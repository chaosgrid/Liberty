#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d10aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d10ab4 _public_6d10ab4
#define public_6d10ac4 _public_6d10ac4

PROC_DECLARE(0x6d10aa0, internal_6d10aa0, public_6d10aa0);
extern "C" NAKED register_t __cdecl internal_6d10aa0()
{
    __asm
    {
        push 0x20
        call public_6d60012
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_6d10ab4
        mov ecx, eax
        public_6d10ab4 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6d10ac4
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_6d10ac4 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x6d10aa0)
    }
}

#undef public_6d10ab4
#undef public_6d10ac4
