#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d573b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d573c4 _public_6d573c4
#define public_6d573d4 _public_6d573d4

PROC_DECLARE(0x6d573b0, internal_6d573b0, public_6d573b0);
extern "C" NAKED register_t __cdecl internal_6d573b0()
{
    __asm
    {
        push 0x18
        call public_6d60012
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_6d573c4
        mov ecx, eax
        public_6d573c4 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6d573d4
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_6d573d4 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x6d573b0)
    }
}

#undef public_6d573c4
#undef public_6d573d4
