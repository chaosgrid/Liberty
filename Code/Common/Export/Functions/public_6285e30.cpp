#include "Common-PCH.h"


#define public_6285e41 _public_6285e41

PROC_DECLARE(0x6285e30, internal_6285e30, public_6285e30);
extern "C" NAKED register_t __cdecl internal_6285e30()
{
    __asm
    {
        test ecx, ecx
        je public_6285e41
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+4], 1
        jmp dword ptr ds : [eax+0x14]
        public_6285e41 : nop
        ret 4
        UNREACHABLE_TRAP(0x6285e30)
    }
}

#undef public_6285e41
