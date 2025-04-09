#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_42a7f4 _public_42a7f4
#define public_42a804 _public_42a804

PROC_DECLARE(0x42a7e0, internal_42a7e0, public_42a7e0);
extern "C" NAKED register_t __cdecl internal_42a7e0()
{
    __asm
    {
        push 0xC
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_42a7f4
        mov ecx, eax
        public_42a7f4 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_42a804
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_42a804 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x42a7e0)
    }
}

#undef public_42a7f4
#undef public_42a804
