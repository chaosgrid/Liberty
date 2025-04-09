#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_556cb0);

#define public_4508d4 _public_4508d4

PROC_DECLARE(0x450880, internal_450880, public_450880);
extern "C" NAKED register_t __cdecl internal_450880()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0xC
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ds:[esi+0x20]
        call dword ptr ds : [public_5c6270]
        mov edx, dword ptr ds : [esi+0x60]
        mov ebx, dword ptr ds : [eax]
        mov ecx, edx
        shl ecx, 6
        add ecx, offset public_668b00
        lea esi, ds:[ecx+4]
        mov edi, esi
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+4], ebx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edi+8], eax
        cmp edx, dword ptr ds : [public_66d100]
        jne public_4508d4
        mov ecx, dword ptr ds : [ecx]
        push esi
        push ecx
        call public_556cb0
        add esp, 8
        public_4508d4 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x450880)
    }
}

#undef public_4508d4
