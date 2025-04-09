#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58f810);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_58f85d _public_58f85d
#define public_58f8a1 _public_58f8a1

PROC_DECLARE(0x58f810, internal_58f810, public_58f810);
extern "C" NAKED register_t __cdecl internal_58f810()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x18
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+0x3FC], eax
        mov eax, dword ptr ds : [esi+0x588]
        test eax, eax
        push edi
        je public_58f8a1
        fld dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [public_67d95c]
        test eax, eax
        fadd dword ptr ds : [esi+0x330]
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        fstp dword ptr ss : [esp+0xC]
        jne public_58f85d
        call public_5b73e0
        mov dword ptr ds : [public_67d95c], eax
        public_58f85d : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC]
        push edx
        lea edi, ds:[esi+0x3C]
        push edi
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov ebx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+0x588]
        mov eax, dword ptr ds : [ecx]
        sub esp, 0xC
        mov edx, esp
        mov dword ptr ds : [edx], ebx
        mov ebx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx+4], ebx
        mov ebx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [edx+8], ebx
        call dword ptr ds : [eax+0x7C]
        mov ecx, dword ptr ds : [esi+0x588]
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax+0x20]
        public_58f8a1 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x58f810)
    }
}

#undef public_58f85d
#undef public_58f8a1
