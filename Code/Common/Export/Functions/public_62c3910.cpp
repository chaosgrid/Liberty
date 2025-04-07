#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b1870);
CLANG_FORWARD_PROC_SYMBOL(public_62d20f0);
CLANG_FORWARD_PROC_SYMBOL(public_62d21c0);
CLANG_FORWARD_PROC_SYMBOL(public_62d21d0);
CLANG_FORWARD_PROC_SYMBOL(public_62d4b90);
CLANG_FORWARD_PROC_SYMBOL(public_62d88b0);
CLANG_FORWARD_PROC_SYMBOL(public_62e9a60);

#define public_62c394e _public_62c394e
#define public_62c3999 _public_62c3999
#define public_62c399b _public_62c399b
#define public_62c39a2 _public_62c39a2
#define public_62c39d8 _public_62c39d8
#define public_62c39e5 _public_62c39e5
#define public_62c39e9 _public_62c39e9
#define public_62c3a01 _public_62c3a01
#define public_62c3a2a _public_62c3a2a
#define public_62c3a2b _public_62c3a2b
#define public_62c3a7a _public_62c3a7a
#define public_62c3a87 _public_62c3a87
#define public_62c3a8b _public_62c3a8b
#define public_62c3a9e _public_62c3a9e
#define public_62c3afc _public_62c3afc
#define public_62c3b43 _public_62c3b43
#define public_62c3b50 _public_62c3b50
#define public_62c3b54 _public_62c3b54
#define public_62c3b67 _public_62c3b67

PROC_DECLARE(0x62c3910, internal_62c3910, public_62c3910);
extern "C" NAKED register_t __cdecl internal_62c3910()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x320]
        xor ebx, ebx
        cmp eax, ebx
        je public_62c3afc
        mov ecx, dword ptr ds : [esi+0x20]
        push ebx
        call public_62d4b90
        mov ecx, dword ptr ds : [esi+0x2F0]
        cmp ecx, ebx
        je public_62c394e
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [esi+0x2F0]
        call public_62d21c0
        mov dword ptr ds : [esi+0x2F0], ebx
        public_62c394e : nop
        mov al, byte ptr ds : [esi+0x32C]
        test al, al
        push edi
        jns public_62c3a01
        lea edi, ds:[esi+0x30]
        push 2
        mov ecx, edi
        call public_62d88b0
        cmp byte ptr ds : [esi+0x398], bl
        je public_62c39a2
        cmp byte ptr ds : [esi+0x399], bl
        jne public_62c39a2
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x150]
        cmp eax, ebx
        je public_62c3999
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_62c399b
        public_62c3999 : nop
        xor eax, eax
        public_62c399b : nop
        mov ecx, eax
        call public_62b1870
        public_62c39a2 : nop
        cmp byte ptr ds : [esi+0x39A], bl
        je public_62c3a9e
        mov eax, dword ptr ds : [esi+0x324]
        cmp eax, ebx
        je public_62c39e5
        add eax, 0xFFFFFFF8
        cmp eax, ebx
        je public_62c39e5
        mov eax, dword ptr ds : [esi+0x324]
        cmp eax, ebx
        je public_62c39d8
        mov edx, dword ptr ds : [eax-8]
        lea ecx, ds:[eax-8]
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0xC], eax
        jmp public_62c39e9
        public_62c39d8 : nop
        xor ecx, ecx
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0xC], eax
        jmp public_62c39e9
        public_62c39e5 : nop
        mov dword ptr ss : [esp+0xC], ebx
        public_62c39e9 : nop
        mov eax, dword ptr ds : [esi+0x14]
        push ebx
        lea edx, ss:[esp+0x10]
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push edx
        push 2
        call dword ptr ds : [eax+0x60]
        jmp public_62c3a9e
        public_62c3a01 : nop
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xBC]
        test al, al
        je public_62c3a2a
        cmp dword ptr ds : [esi+0x320], 1
        jne public_62c3a2a
        push 2
        jmp public_62c3a2b
        public_62c3a2a : nop
        push ebx
        public_62c3a2b : nop
        lea edi, ds:[esi+0x30]
        mov ecx, edi
        call public_62d88b0
        test byte ptr ds : [esi+0x28], 1
        jne public_62c3a9e
        mov dword ptr ds : [esi+0x440], ebx
        mov dword ptr ds : [esi+0x330], 0xFFFFFFFF
        mov byte ptr ds : [esi+0x334], bl
        mov eax, dword ptr ds : [esi+0x324]
        cmp eax, ebx
        je public_62c3a87
        add eax, 0xFFFFFFF8
        cmp eax, ebx
        je public_62c3a87
        mov eax, dword ptr ds : [esi+0x324]
        cmp eax, ebx
        je public_62c3a7a
        lea ecx, ds:[eax-8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        mov dword ptr ss : [esp+0xC], eax
        jmp public_62c3a8b
        public_62c3a7a : nop
        xor ecx, ecx
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        mov dword ptr ss : [esp+0xC], eax
        jmp public_62c3a8b
        public_62c3a87 : nop
        mov dword ptr ss : [esp+0xC], ebx
        public_62c3a8b : nop
        mov eax, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        push ebx
        lea eax, ss:[esp+0x10]
        push eax
        push ebx
        call dword ptr ds : [edx+0x60]
        public_62c3a9e : nop
        mov edx, dword ptr ds : [esi+0x2DC]
        lea ecx, ds:[esi+0x2DC]
        mov byte ptr ds : [esi+0x39A], bl
        mov byte ptr ds : [esi+0x398], bl
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [esi+0xA8]
        lea ecx, ds:[esi+0xA8]
        call dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        push 3
        push 1
        mov ecx, esi
        call public_62d21d0
        mov ecx, dword ptr ds : [esi+0x24]
        push 1
        add ecx, 0x12C
        call public_62e9a60
        mov ecx, esi
        call public_62d20f0
        pop edi
        mov dword ptr ds : [esi+0x320], ebx
        pop esi
        pop ebx
        pop ecx
        ret 
        public_62c3afc : nop
        cmp byte ptr ds : [esi+0x334], bl
        je public_62c3b67
        mov dword ptr ds : [esi+0x440], ebx
        mov dword ptr ds : [esi+0x330], 0xFFFFFFFF
        mov byte ptr ds : [esi+0x334], bl
        mov eax, dword ptr ds : [esi+0x324]
        cmp eax, ebx
        je public_62c3b50
        add eax, 0xFFFFFFF8
        cmp eax, ebx
        je public_62c3b50
        mov eax, dword ptr ds : [esi+0x324]
        cmp eax, ebx
        je public_62c3b43
        lea ecx, ds:[eax-8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        mov dword ptr ss : [esp+8], eax
        jmp public_62c3b54
        public_62c3b43 : nop
        xor ecx, ecx
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        mov dword ptr ss : [esp+8], eax
        jmp public_62c3b54
        public_62c3b50 : nop
        mov dword ptr ss : [esp+8], ebx
        public_62c3b54 : nop
        mov esi, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [esi+4]
        push ebx
        lea eax, ss:[esp+0xC]
        lea ecx, ds:[esi+4]
        push eax
        push ebx
        call dword ptr ds : [edx+0x60]
        public_62c3b67 : nop
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62c3910)
    }
}

#undef public_62c394e
#undef public_62c3999
#undef public_62c399b
#undef public_62c39a2
#undef public_62c39d8
#undef public_62c39e5
#undef public_62c39e9
#undef public_62c3a01
#undef public_62c3a2a
#undef public_62c3a2b
#undef public_62c3a7a
#undef public_62c3a87
#undef public_62c3a8b
#undef public_62c3a9e
#undef public_62c3afc
#undef public_62c3b43
#undef public_62c3b50
#undef public_62c3b54
#undef public_62c3b67
