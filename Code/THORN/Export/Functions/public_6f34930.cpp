#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f224f0);

#define public_6f34943 _public_6f34943

PROC_DECLARE(0x6f34930, internal_6f34930, public_6f34930);
extern "C" NAKED register_t __cdecl internal_6f34930()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0xC]
        test ecx, ecx
        je public_6f34943
        call public_6f224f0
        ret 4
        public_6f34943 : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6f34930)
    }
}

#undef public_6f34943
