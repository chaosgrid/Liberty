#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6fa8bc4 _public_6fa8bc4
#define public_6fa8bd4 _public_6fa8bd4

PROC_DECLARE(0x6fa8bb0, internal_6fa8bb0, public_6fa8bb0);
extern "C" NAKED register_t __cdecl internal_6fa8bb0()
{
    __asm
    {
        push 0x10
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_6fa8bc4
        mov ecx, eax
        public_6fa8bc4 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6fa8bd4
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_6fa8bd4 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x6fa8bb0)
    }
}

#undef public_6fa8bc4
#undef public_6fa8bd4
