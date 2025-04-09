#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4022f0);
CLANG_FORWARD_PROC_SYMBOL(public_402500);

#define public_40707c _public_40707c
#define public_40708e _public_40708e
#define public_4070ba _public_4070ba
#define public_4070bf _public_4070bf
#define public_4070d8 _public_4070d8
#define public_4070ec _public_4070ec

PROC_DECLARE(0x407050, internal_407050, public_407050);
extern "C" NAKED register_t __cdecl internal_407050()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ebx+4]
        push esi
        push edi
        mov esi, ecx
        push eax
        lea edi, ds:[esi+4]
        push edi
        call public_402500
        fld dword ptr ds : [ebx+8]
        fcomp dword ptr ds : [esi+8]
        add esp, 8
        fnstsw ax
        test ah, 0x44
        jnp public_40707c
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [esi+8], ecx
        public_40707c : nop
        cmp dword ptr ds : [edi], 0
        jne public_40708e
        pop edi
        mov dword ptr ds : [esi+0xC], 0xBF800000
        pop esi
        pop ebx
        ret 4
        public_40708e : nop
        mov ecx, dword ptr ds : [esi+0x14]
        call dword ptr ds : [public_5c602c]
        test al, al
        je public_4070ec
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        cmp eax, 3
        je public_4070ba
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        cmp eax, 2
        mov byte ptr ss : [esp+0x10], 0
        jne public_4070bf
        public_4070ba : nop
        mov byte ptr ss : [esp+0x10], 1
        public_4070bf : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        mov ecx, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [ecx+0x40]
        jne public_4070d8
        pop edi
        mov dword ptr ds : [esi+0xC], 0xBF800000
        pop esi
        pop ebx
        ret 4
        public_4070d8 : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push 0
        push eax
        push ecx
        call public_4022f0
        fstp dword ptr ds : [esi+0xC]
        add esp, 0x10
        public_4070ec : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x407050)
    }
}

#undef public_40707c
#undef public_40708e
#undef public_4070ba
#undef public_4070bf
#undef public_4070d8
#undef public_4070ec
