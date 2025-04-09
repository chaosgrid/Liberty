#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f79c0);

#define public_4f79d9 _public_4f79d9

PROC_DECLARE(0x4f79c0, internal_4f79c0, public_4f79c0);
extern "C" NAKED register_t __cdecl internal_4f79c0()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0x84
        je public_4f79d9
        mov eax, dword ptr ss : [esp+4]
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        ret 
        public_4f79d9 : nop
        mov ecx, dword ptr ss : [esp+4]
        push ecx
        mov ecx, offset public_674ccc
        call dword ptr ds : [public_5c60c4]
        ret 
        UNREACHABLE_TRAP(0x4f79c0)
    }
}

#undef public_4f79d9
