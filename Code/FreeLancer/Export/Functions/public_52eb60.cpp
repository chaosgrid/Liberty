#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_489e80);
CLANG_FORWARD_PROC_SYMBOL(public_531b20);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_52ebae _public_52ebae
#define public_52ebb0 _public_52ebb0
#define public_52ebd6 _public_52ebd6

PROC_DECLARE(0x52eb60, internal_52eb60, public_52eb60);
extern "C" NAKED register_t __cdecl internal_52eb60()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        cmp ebx, 0xA
        push esi
        push edi
        mov edi, ecx
        jne public_52ebd6
        mov esi, dword ptr ds : [edi+8]
        call public_54baf0
        cmp esi, eax
        jne public_52ebd6
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x158]
        test al, al
        jne public_52ebd6
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        je public_52ebae
        add eax, 0xC
        test eax, eax
        je public_52ebae
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_52ebae
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_52ebb0
        public_52ebae : nop
        xor eax, eax
        public_52ebb0 : nop
        mov ecx, eax
        call dword ptr ds : [public_5c6358]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_52ebd6
        mov edx, dword ptr ds : [public_67545c]
        push 0
        push edx
        call public_489e80
        add esp, 8
        public_52ebd6 : nop
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        push ebx
        mov ecx, edi
        call public_531b20
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x52eb60)
    }
}

#undef public_52ebae
#undef public_52ebb0
#undef public_52ebd6
