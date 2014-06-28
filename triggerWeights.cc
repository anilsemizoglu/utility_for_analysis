float muonTriggerWeight( float pt, float eta ) {
  float aeta = fabs(eta);

  if( aeta < 0.8 ){
    if( pt >  30.0 && pt <   32.0 )   return 0.91;
    if( pt >  32.0 && pt <   34.0 )   return 0.92;
    if( pt >  34.0 && pt <   36.0 )   return 0.93;
    if( pt >  36.0 && pt <   38.0 )   return 0.93;
    if( pt >  38.0 && pt <   40.0 )   return 0.93;
    if( pt >  40.0 && pt <   50.0 )   return 0.94;
    if( pt >  50.0 && pt <   60.0 )   return 0.95;
    if( pt >  60.0 && pt <   80.0 )   return 0.95;
    if( pt >  80.0 && pt <   100.0 )  return 0.94;
    if( pt >  100.0 && pt <   150.0 ) return 0.94;
    if( pt >  150.0 && pt <   200.0 ) return 0.93;
    if( pt >  200.0 		    ) return 0.92;
  }

  else if( aeta > 0.8 && aeta < 1.5 ){
    if( pt >  30.0 && pt <   32.0 )   return 0.82;
    if( pt >  32.0 && pt <   34.0 )   return 0.82;
    if( pt >  34.0 && pt <   36.0 )   return 0.82;
    if( pt >  36.0 && pt <   38.0 )   return 0.83;
    if( pt >  38.0 && pt <   40.0 )   return 0.83;
    if( pt >  40.0 && pt <   50.0 )   return 0.84;
    if( pt >  50.0 && pt <   60.0 )   return 0.84;
    if( pt >  60.0 && pt <   80.0 )   return 0.84;
    if( pt >  80.0 && pt <   100.0 )  return 0.84;
    if( pt >  100.0 && pt <   150.0 ) return 0.84;
    if( pt >  150.0 && pt <   200.0 ) return 0.83;
    if( pt >  200.0 		    ) return 0.83;
     }

  else if( aeta > 1.5 && aeta <= 2.1 ){
    if( pt >  30.0 && pt <   32.0 )   return 0.80;
    if( pt >  32.0 && pt <   34.0 )   return 0.81;
    if( pt >  34.0 && pt <   36.0 )   return 0.81;
    if( pt >  36.0 && pt <   38.0 )   return 0.82;
    if( pt >  38.0 && pt <   40.0 )   return 0.82;
    if( pt >  40.0 && pt <   50.0 )   return 0.83;
    if( pt >  50.0 && pt <   60.0 )   return 0.83;
    if( pt >  60.0 && pt <   80.0 )   return 0.84;
    if( pt >  80.0 && pt <   100.0 )  return 0.84;
    if( pt >  100.0 && pt <   150.0 ) return 0.84;
    if( pt >  150.0 && pt <   200.0 ) return 0.82;
    if( pt >  200.0 		    ) return 0.83;
    }

  return 1;
}

float electronTriggerWeight( float pt, float eta ) {
  float aeta = fabs(eta);

  if( aeta < 1.5 ){
    if( pt >  30.0 && pt <   32.0 )   return 0.85;
    if( pt >  32.0 && pt <   34.0 )   return 0.88;
    if( pt >  34.0 && pt <   36.0 )   return 0.89;
    if( pt >  36.0 && pt <   38.0 )   return 0.91;
    if( pt >  38.0 && pt <   40.0 )   return 0.92;
    if( pt >  40.0 && pt <   50.0 )   return 0.94;
    if( pt >  50.0 && pt <   60.0 )   return 0.95;
    if( pt >  60.0 && pt <   80.0 )   return 0.96;
    if( pt >  80.0 && pt <   100.0 )  return 0.96;
    if( pt >  100.0 && pt <   150.0 ) return 0.97;
    if( pt >  150.0 && pt <   200.0 ) return 0.97;
    if( pt >  200.0 		    ) return 0.97;
  }

  else if( aeta > 1.5 && aeta < 2.1 ){
    if( pt >  30.0 && pt <   32.0 )   return 0.65;
    if( pt >  32.0 && pt <   34.0 )   return 0.70;
    if( pt >  34.0 && pt <   36.0 )   return 0.72;
    if( pt >  36.0 && pt <   38.0 )   return 0.74;
    if( pt >  38.0 && pt <   40.0 )   return 0.75;
    if( pt >  40.0 && pt <   50.0 )   return 0.77;
    if( pt >  50.0 && pt <   60.0 )   return 0.79;
    if( pt >  60.0 && pt <   80.0 )   return 0.79;
    if( pt >  80.0 && pt <   100.0 )  return 0.80;
    if( pt >  100.0 && pt <   150.0 ) return 0.82;
    if( pt >  150.0 && pt <   200.0 ) return 0.83;
    if( pt >  200.0 		    ) return 0.85;
     }

  return 1;
}
