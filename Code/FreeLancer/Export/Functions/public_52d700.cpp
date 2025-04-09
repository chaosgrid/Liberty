#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_489e80);
CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_4fcef0);
CLANG_FORWARD_PROC_SYMBOL(public_531b20);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_54bb00);

#define public_52d733 _public_52d733
#define public_52d738 _public_52d738
#define public_52d77a _public_52d77a
#define public_52d7bb _public_52d7bb
#define public_52d7bd _public_52d7bd
#define public_52d7e3 _public_52d7e3
#define public_52d820 _public_52d820
#define public_52d84a _public_52d84a

PROC_DECLARE(0x52d700, internal_52d700, public_52d700);
extern "C" NAKED register_t __cdecl internal_52d700()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        cmp ebx, 0xA
        push esi
        mov esi, ecx
        je public_52d77a
        cmp ebx, 0x19
        jne public_52d84a
        mov eax, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        je public_52d733
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        jne public_52d733
        mov eax, dword ptr ds : [eax+0xB4]
        jmp public_52d738
        public_52d733 : nop
        call public_54bb00
        public_52d738 : nop
        mov edx, dword ptr ds : [public_673344]
        cmp eax, edx
        jne public_52d84a
        mov eax, dword ptr ds : [esi+4]
        xor ecx, ecx
        mov cx, word ptr ds : [eax+8]
        mov eax, dword ptr ds : [esi+8]
        push edx
        push 0
        push 1
        lea edx, ss:[esp+0x18]
        push edx
        mov dword ptr ss : [esp+0x1C], ecx
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x34]
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push ebx
        mov ecx, esi
        call public_531b20
        pop esi
        pop ebx
        ret 8
        public_52d77a : nop
        push edi
        mov edi, dword ptr ds : [esi+8]
        call public_54baf0
        cmp edi, eax
        jne public_52d7e3
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x158]
        test al, al
        jne public_52d7e3
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_52d7bb
        add eax, 0xC
        test eax, eax
        je public_52d7bb
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_52d7bb
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_52d7bd
        public_52d7bb : nop
        xor eax, eax
        public_52d7bd : nop
        mov ecx, eax
        call dword ptr ds : [public_5c6358]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_52d7e3
        mov edx, dword ptr ds : [public_675440]
        push 0
        push edx
        call public_489e80
        add esp, 8
        public_52d7e3 : nop
        mov eax, dword ptr ds : [esi+0x10]
        push eax
        call dword ptr ds : [public_5c68ac]
        mov ecx, dword ptr ds : [esi+0x10]
        add esp, 4
        cmp ecx, 0xFFFFFFFF
        pop edi
        je public_52d820
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
        public_52d820 : nop
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[esi+0x30]
        push eax
        add ecx, 0x28
        call public_4fcef0
        mov ecx, dword ptr ds : [esi+0x28]
        test ecx, ecx
        je public_52d84a
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [esi+0x28]
        call public_4f7a90
        mov dword ptr ds : [esi+0x28], 0
        public_52d84a : nop
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push ebx
        mov ecx, esi
        call public_531b20
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x52d700)
    }
}

#undef public_52d733
#undef public_52d738
#undef public_52d77a
#undef public_52d7bb
#undef public_52d7bd
#undef public_52d7e3
#undef public_52d820
#undef public_52d84a
