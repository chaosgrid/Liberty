#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_427a40);
CLANG_FORWARD_PROC_SYMBOL(public_489e80);
CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_4fcef0);
CLANG_FORWARD_PROC_SYMBOL(public_531b20);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_52da5d _public_52da5d
#define public_52da5f _public_52da5f
#define public_52da94 _public_52da94
#define public_52dab0 _public_52dab0
#define public_52dab7 _public_52dab7
#define public_52dabf _public_52dabf
#define public_52db3e _public_52db3e
#define public_52db76 _public_52db76
#define public_52dbb1 _public_52dbb1
#define public_52dbdb _public_52dbdb

PROC_DECLARE(0x52da00, internal_52da00, public_52da00);
extern "C" NAKED register_t __cdecl internal_52da00()
{
    __asm
    {
        sub esp, 0x30
        push ebx
        mov ebx, dword ptr ss : [esp+0x38]
        cmp ebx, 0xA
        push esi
        mov esi, ecx
        jne public_52dbdb
        push edi
        mov edi, dword ptr ds : [esi+8]
        call public_54baf0
        cmp edi, eax
        jne public_52dabf
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x158]
        test al, al
        jne public_52dabf
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_52da5d
        add eax, 0xC
        test eax, eax
        je public_52da5d
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_52da5d
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_52da5f
        public_52da5d : nop
        xor eax, eax
        public_52da5f : nop
        mov ecx, eax
        call dword ptr ds : [public_5c6358]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_52dabf
        mov edi, dword ptr ds : [esi+4]
        mov ecx, edi
        call dword ptr ds : [public_5c659c]
        mov cl, byte ptr ds : [eax+0xBA]
        test cl, cl
        je public_52da94
        mov edx, dword ptr ds : [public_67543c]
        push 0
        push edx
        jmp public_52dab7
        public_52da94 : nop
        mov ecx, edi
        call dword ptr ds : [public_5c6548]
        mov ecx, dword ptr ds : [eax+0x90]
        test ecx, ecx
        push 0
        je public_52dab0
        mov eax, dword ptr ds : [public_675438]
        push eax
        jmp public_52dab7
        public_52dab0 : nop
        mov ecx, dword ptr ds : [public_675434]
        push ecx
        public_52dab7 : nop
        call public_489e80
        add esp, 8
        public_52dabf : nop
        mov ecx, dword ptr ds : [esi+0x40]
        test ecx, ecx
        pop edi
        je public_52db3e
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        mov ecx, dword ptr ds : [esi+0x40]
        lea edx, ss:[esp+8]
        push edx
        mov dword ptr ss : [esp+0x2C], 0x3F800000
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        mov dword ptr ss : [esp+0xC], 0x3F800000
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov eax, dword ptr ds : [ecx]
        push 0xFFFFFFFF
        call dword ptr ds : [eax+0x94]
        public_52db3e : nop
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        je public_52db76
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [ecx+4]
        lea ecx, ds:[eax+0x84]
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_52db76
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [eax+4]
        add ecx, 0x84
        push ecx
        call public_427a40
        add esp, 4
        public_52db76 : nop
        mov edx, dword ptr ds : [esi+0x10]
        push edx
        call dword ptr ds : [public_5c68ac]
        mov ecx, dword ptr ds : [esi+0x10]
        add esp, 4
        cmp ecx, 0xFFFFFFFF
        je public_52dbb1
        mov eax, dword ptr ds : [public_5c6d40]
        mov eax, dword ptr ds : [eax]
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
        public_52dbb1 : nop
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[esi+0x30]
        push eax
        add ecx, 0x28
        call public_4fcef0
        mov ecx, dword ptr ds : [esi+0x28]
        test ecx, ecx
        je public_52dbdb
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [esi+0x28]
        call public_4f7a90
        mov dword ptr ds : [esi+0x28], 0
        public_52dbdb : nop
        mov eax, dword ptr ss : [esp+0x40]
        push eax
        push ebx
        mov ecx, esi
        call public_531b20
        pop esi
        pop ebx
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x52da00)
    }
}

#undef public_52da5d
#undef public_52da5f
#undef public_52da94
#undef public_52dab0
#undef public_52dab7
#undef public_52dabf
#undef public_52db3e
#undef public_52db76
#undef public_52dbb1
#undef public_52dbdb
