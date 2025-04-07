#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420690);

#define public_4206b9 _public_4206b9

PROC_DECLARE(0x420690, internal_420690, public_420690);
extern "C" NAKED register_t __cdecl internal_420690()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x14]
        cmp dword ptr ds : [ecx+4], eax
        je public_4206b9
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 4
        push ecx
        add eax, 0x10
        push eax
        call dword ptr ds : [public_5c70bc]
        add esp, 8
        test eax, eax
        jne public_4206b9
        mov eax, 1
        ret 4
        public_4206b9 : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x420690)
    }
}

#undef public_4206b9
