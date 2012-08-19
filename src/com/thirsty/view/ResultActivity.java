package com.thirsty.view;

import com.thirsty.R;
import com.thirsty.controller.Controller;

import android.app.Activity;
import android.os.Bundle;
import android.view.View;

public class ResultActivity extends Activity {
    private Controller _application;
    
    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.result_view);
        
        this._application = (Controller)getApplication();
    }
    
    public void toNextActivity(View view)
    {
    	this._application.nextActivityFromResultActivity(ResultActivity.this);
    }

    public void onBackPressed() 
    {        
    	this._application.disconnectRobot();        
    	super.onBackPressed();    
    }
}
