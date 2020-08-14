package com.revo.demojniutil;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.util.Log;

public class MainActivity extends AppCompatActivity {

    private JniUtil jniUtil;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        jniUtil = new JniUtil();
        Log.e("demojniutil", "JNI 调用add方法结果为："  + jniUtil.add(100,200));

        Log.e("demojniutil", "JNI 调用getString方法结果为："  + jniUtil.getString());
    }
}
