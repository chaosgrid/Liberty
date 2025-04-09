#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f79a0);

#define public_4f79b5 _public_4f79b5

PROC_DECLARE(0x4f79a0, internal_4f79a0, public_4f79a0);
extern "C" NAKED register_t __cdecl internal_4f79a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0x84
        je public_4f79b5
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [public_5c71cc]
        public_4f79b5 : nop
        mov ecx, offset public_674ccc
        jmp dword ptr ds : [public_5c60c0]
        UNREACHABLE_TRAP(0x4f79a0)
    }
}

#undef public_4f79b5
