#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5273d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_5273e4 _public_5273e4
#define public_5273f4 _public_5273f4

PROC_DECLARE(0x5273d0, internal_5273d0, public_5273d0);
extern "C" NAKED register_t __cdecl internal_5273d0()
{
    __asm
    {
        push 0x18
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_5273e4
        mov ecx, eax
        public_5273e4 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_5273f4
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_5273f4 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x5273d0)
    }
}

#undef public_5273e4
#undef public_5273f4
