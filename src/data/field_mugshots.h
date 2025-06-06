static const u32 sFieldMugshotGfx_TestNormal[] = INCBIN_U32("graphics/field_mugshots/test/normal.4bpp.lz");
static const u32 sFieldMugshotGfx_TestAlt[] = INCBIN_U32("graphics/field_mugshots/test/alt.4bpp.lz");
static const u16 sFieldMugshotPal_TestNormal[] = INCBIN_U16("graphics/field_mugshots/test/normal.gbapal");
static const u16 sFieldMugshotPal_TestAlt[] = INCBIN_U16("graphics/field_mugshots/test/alt.gbapal");

static const u32 sFieldMugshotGfx_Cozmo[] = INCBIN_U32("graphics/field_mugshots/cozmo/normal.4bpp.lz");
static const u16 sFieldMugshotPal_Cozmo[] = INCBIN_U16("graphics/field_mugshots/cozmo/normal.gbapal");

static const u32 sFieldMugshotGfx_Cosmog[] = INCBIN_U32("graphics/field_mugshots/cosmog/normal.4bpp.lz");
static const u16 sFieldMugshotPal_Cosmog[] = INCBIN_U16("graphics/field_mugshots/cosmog/normal.gbapal");

struct MugshotGfx
{
    const u32 *gfx;
    const u16 *pal;
};

static const struct MugshotGfx sFieldMugshots[MUGSHOT_COUNT][EMOTE_COUNT] =
{
    [MUGSHOT_TEST] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_TestNormal,
            .pal = sFieldMugshotPal_TestNormal,
        },

        [EMOTE_ALT] =
        {
            .gfx = sFieldMugshotGfx_TestAlt,
            .pal = sFieldMugshotPal_TestAlt,
        },

    },
    
    [MUGSHOT_COZMO] = 
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_Cozmo,
            .pal = sFieldMugshotPal_Cozmo,
        }, 
    },

    [MUGSHOT_COSMOG] = 
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_Cosmog,
            .pal = sFieldMugshotPal_Cosmog,
        }, 
    },

};
