#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_556f10);

#define public_450bf0 _public_450bf0

PROC_DECLARE(0x450bc0, internal_450bc0, public_450bc0);
extern "C" NAKED register_t __cdecl internal_450bc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x5C]
        mov edx, dword ptr ss : [esp+8]
        mov eax, ecx
        shl eax, 6
        add eax, offset public_668b00
        mov dword ptr ds : [eax+0x3C], edx
        cmp ecx, dword ptr ds : [public_66d100]
        jne public_450bf0
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        call public_556f10
        add esp, 8
        public_450bf0 : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x450bc0)
    }
}

#undef public_450bf0
