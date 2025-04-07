#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_435320);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_435373 _public_435373
#define public_435389 _public_435389
#define public_43538c _public_43538c

PROC_DECLARE(0x435320, internal_435320, public_435320);
extern "C" NAKED register_t __cdecl internal_435320()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push eax
        mov ebx, ecx
        call dword ptr ds : [public_5c6020]
        add esp, 4
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0xC]
        push edx
        lea ecx, ds:[ebx+0xC]
        mov dword ptr ss : [esp+0x18], eax
        call public_432240
        mov eax, dword ptr ss : [esp+8]
        cmp eax, dword ptr ds : [ebx+0x10]
        je public_43538c
        lea ebp, ds:[eax+0x10]
        test ebp, ebp
        je public_43538c
        push esi
        mov esi, dword ptr ds : [ebx+0x24]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_5b7e84
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_435373
        mov edi, eax
        public_435373 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        pop edi
        pop esi
        je public_435389
        mov dword ptr ds : [eax], ebp
        public_435389 : nop
        inc dword ptr ds : [ebx+0x28]
        public_43538c : nop
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x435320)
    }
}

#undef public_435373
#undef public_435389
#undef public_43538c
