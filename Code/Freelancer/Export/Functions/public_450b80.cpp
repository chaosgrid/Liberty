#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_556e00);

#define public_450bb0 _public_450bb0

PROC_DECLARE(0x450b80, internal_450b80, public_450b80);
extern "C" NAKED register_t __cdecl internal_450b80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x5C]
        mov edx, dword ptr ss : [esp+8]
        mov eax, ecx
        shl eax, 6
        add eax, offset public_668b00
        mov dword ptr ds : [eax+0x38], edx
        cmp ecx, dword ptr ds : [public_66d100]
        jne public_450bb0
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        call public_556e00
        add esp, 8
        public_450bb0 : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x450b80)
    }
}

#undef public_450bb0
