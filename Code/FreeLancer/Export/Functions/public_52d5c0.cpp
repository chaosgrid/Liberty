#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_489e80);
CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_4fcef0);
CLANG_FORWARD_PROC_SYMBOL(public_531b20);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_52d612 _public_52d612
#define public_52d614 _public_52d614
#define public_52d63a _public_52d63a
#define public_52d677 _public_52d677
#define public_52d6a1 _public_52d6a1

PROC_DECLARE(0x52d5c0, internal_52d5c0, public_52d5c0);
extern "C" NAKED register_t __cdecl internal_52d5c0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        cmp ebx, 0xA
        push esi
        mov esi, ecx
        jne public_52d6a1
        push edi
        mov edi, dword ptr ds : [esi+8]
        call public_54baf0
        cmp edi, eax
        jne public_52d63a
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x158]
        test al, al
        jne public_52d63a
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_52d612
        add eax, 0xC
        test eax, eax
        je public_52d612
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_52d612
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_52d614
        public_52d612 : nop
        xor eax, eax
        public_52d614 : nop
        mov ecx, eax
        call dword ptr ds : [public_5c6358]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_52d63a
        mov edx, dword ptr ds : [public_675444]
        push 0
        push edx
        call public_489e80
        add esp, 8
        public_52d63a : nop
        mov eax, dword ptr ds : [esi+0x10]
        push eax
        call dword ptr ds : [public_5c68ac]
        mov ecx, dword ptr ds : [esi+0x10]
        add esp, 4
        cmp ecx, 0xFFFFFFFF
        pop edi
        je public_52d677
        mov edx, dword ptr ds : [public_5c6d40]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        mov eax, dword ptr ds : [public_5c6d40]
        mov edx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov dword ptr ds : [esi+0x10], 0xFFFFFFFF
        public_52d677 : nop
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[esi+0x30]
        push eax
        add ecx, 0x28
        call public_4fcef0
        mov ecx, dword ptr ds : [esi+0x28]
        test ecx, ecx
        je public_52d6a1
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [esi+0x28]
        call public_4f7a90
        mov dword ptr ds : [esi+0x28], 0
        public_52d6a1 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push ebx
        mov ecx, esi
        call public_531b20
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x52d5c0)
    }
}

#undef public_52d612
#undef public_52d614
#undef public_52d63a
#undef public_52d677
#undef public_52d6a1
