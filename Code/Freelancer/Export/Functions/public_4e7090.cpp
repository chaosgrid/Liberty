#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4e7090);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_4e70a9 _public_4e70a9

PROC_DECLARE(0x4e7090, internal_4e7090, public_4e7090);
extern "C" NAKED register_t __cdecl internal_4e7090()
{
    __asm
    {
        mov eax, dword ptr ds : [public_674b1c]
        sub esp, 0xC
        test eax, eax
        push esi
        mov esi, ecx
        jne public_4e70a9
        call public_5b73e0
        mov dword ptr ds : [public_674b1c], eax
        public_4e70a9 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        push edx
        push esi
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+4]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+8], edx
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x4e7090)
    }
}

#undef public_4e70a9
