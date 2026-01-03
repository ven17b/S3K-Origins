void RegisterS3KContent(void)
{
    S3K->sonicFrames      = RSDK.LoadSpriteAnimation("3K_Players/Sonic.bin", SCOPE_GLOBAL);
    S3K->superFrames      = RSDK.LoadSpriteAnimation("3K_Players/SuperSonic.bin", SCOPE_GLOBAL);
    S3K->tailsFrames      = RSDK.LoadSpriteAnimation("3K_Players/Tails.bin", SCOPE_GLOBAL);
    S3K->tailsTailsFrames = RSDK.LoadSpriteAnimation("3K_Players/TailSprite.bin", SCOPE_GLOBAL);
    S3K->knuxFrames       = RSDK.LoadSpriteAnimation("3K_Players/Knux.bin", SCOPE_GLOBAL);
    S3K->amyFrames        = RSDK.LoadSpriteAnimation("3K_Players/Amy.bin", SCOPE_GLOBAL);

    if (!RSDK.CheckSceneFolder("3K_BlueSpheresN")) {
        S3K->miscFrames        = RSDK.LoadSpriteAnimation("3K_Ending/EndingProp.bin", SCOPE_GLOBAL);
        S3K->blueSpheresFrames = RSDK.LoadSpriteAnimation("3K_BlueSpheres/Menu.bin", SCOPE_GLOBAL);
        S3K->isBlueSpheresNew  = false;
    }
    else {
        S3K->miscFrames        = RSDK.LoadSpriteAnimation("3K_Eggman/Eggman.bin", SCOPE_GLOBAL);
        S3K->blueSpheresFrames = RSDK.LoadSpriteAnimation("3K_BlueSpheres/New.bin", SCOPE_GLOBAL);
        S3K->isBlueSpheresNew  = true;
    }

    S3K->mechaSonicMkIIFrames = RSDK.LoadSpriteAnimation("3K_SSZ/MechaSonicMkII.bin", SCOPE_GLOBAL);
    S3K->mechaSonicFrames     = RSDK.LoadSpriteAnimation("3K_SSZ/MechaSonic.bin", SCOPE_GLOBAL);
    S3K->eggMobileFrames      = RSDK.LoadSpriteAnimation("3K_Eggman/EggMobile.bin", SCOPE_GLOBAL);
    S3K->eggRoboFrames        = RSDK.LoadSpriteAnimation("3K_Eggman/EggRobo.bin", SCOPE_GLOBAL);
    S3K->animalsFrames        = RSDK.LoadSpriteAnimation("3K_Global/Animals.bin", SCOPE_GLOBAL);
    S3K->blueSpheresStageFrames = RSDK.LoadSpriteAnimation("3K_BlueSpheres/StageObjects.bin", SCOPE_GLOBAL);

    for (int32 i = 0; i < 32; ++i) {
        SpriteFrame *frame1 = RSDK.GetFrame(S3K->blueSpheresStageFrames, 8, i);
        frame1->pivotY += 16;

        SpriteFrame *frame2 = RSDK.GetFrame(S3K->blueSpheresStageFrames, 9, i);
        frame2->pivotY += 16;
    }

    S3K->scope         = SCOPE_GLOBAL;
    S3K->field_2C      = false;
    S3K->field_30      = 0x8000;

    S3K->sfxBeep       = RSDK.GetSfx("Stage/Beep3.wav");
    S3K->sfxContinue   = RSDK.GetSfx("Special/Continue.wav");
    S3K->sfxRelease    = RSDK.GetSfx("Global/Release.wav");
    S3K->sfxTransform2 = RSDK.GetSfx("Global/Transform2.wav");

    S3K->randSeed  = sub_140A58D94(0);
    S3K->randValue1 = RSDK.Rand(0x80000001, 0x7FFFFFFF, &S3K->randSeed);
    S3K->randValue2 = RSDK.Rand(0x80000001, 0x7FFFFFFF, &S3K->randSeed);
    S3K->randSeed   = RSDK.Rand(0x80000001, 0x7FFFFFFF, &S3K->randSeed);

    S3K->field_58 = 0;
    S3K->field_5C = 0;
    S3K->field_60 = globals->field_4C4CB8;
    S3K->field_64 = false;
}
