#include "Common-PCH.h"


#define public_62b17d1 _public_62b17d1

PROC_DECLARE(0x62b17c0, internal_62b17c0, public_62b17c0);
extern "C" NAKED register_t __cdecl internal_62b17c0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x2BC]
        test al, al
        je public_62b17d1
        fld dword ptr ds : [ecx+0x2B8]
        ret 
        public_62b17d1 : nop
        fld dword ptr ds : [public_6399408]
        ret 
        UNREACHABLE_TRAP(0x62b17c0)
    }
}

#undef public_62b17d1
