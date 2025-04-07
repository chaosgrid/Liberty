#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d22b60);

#define public_6d22b75 _public_6d22b75

PROC_DECLARE(0x6d22b60, internal_6d22b60, public_6d22b60);
extern "C" NAKED register_t __cdecl internal_6d22b60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6d22b75
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], offset public_6d68e54
        public_6d22b75 : nop
        ret 
        UNREACHABLE_TRAP(0x6d22b60)
    }
}

#undef public_6d22b75
