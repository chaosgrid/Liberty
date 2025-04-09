#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_427730);
CLANG_FORWARD_PROC_SYMBOL(public_536c20);
CLANG_FORWARD_PROC_SYMBOL(public_537260);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_597c70);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_536c50 _public_536c50
#define public_536c7f _public_536c7f
#define public_536cf4 _public_536cf4
#define public_536cfc _public_536cfc
#define public_536d4f _public_536d4f
#define public_536d68 _public_536d68
#define public_536d77 _public_536d77
#define public_536d7f _public_536d7f
#define public_536e18 _public_536e18
#define public_536e22 _public_536e22
#define public_536e54 _public_536e54
#define public_536e59 _public_536e59
#define public_536e6a _public_536e6a
#define public_536ee8 _public_536ee8
#define public_536f30 _public_536f30
#define public_536f3d _public_536f3d
#define public_536f50 _public_536f50
#define public_536f65 _public_536f65
#define public_536f74 _public_536f74
#define public_536f80 _public_536f80
#define public_536f8d _public_536f8d
#define public_536fa0 _public_536fa0
#define public_536fa6 _public_536fa6

PROC_DECLARE(0x536c20, internal_536c20, public_536c20);
extern "C" NAKED register_t __cdecl internal_536c20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x48]
        push edi
        push 0xFFFFFFFF
        push 1
        push esi
        mov edi, ecx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xD8]
        cmp eax, 0xFFFFFFFF
        je public_536c7f
        mov ebx, dword ptr ss : [esp+0x54]
        mov ebp, dword ptr ss : [esp+0x50]
        nop 
        public_536c50 : nop
        push ebx
        push ebp
        push eax
        mov ecx, edi
        call public_536c20
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 1
        push esi
        push eax
        call dword ptr ds : [ecx+0xD8]
        cmp eax, 0xFFFFFFFF
        jne public_536c50
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x38
        ret 0xC
        public_536c7f : nop
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0xD4]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_536fa6
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x80]
        mov edx, dword ptr ds : [public_5c6d90]
        mov dword ptr ss : [esp+0x4C], eax
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0x80]
        mov edx, dword ptr ds : [public_5c6d90]
        push esi
        mov ebx, eax
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0xC0]
        mov ecx, dword ptr ss : [esp+0x4C]
        cmp ecx, ebx
        jne public_536d68
        mov edi, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        jne public_536cf4
        xor eax, eax
        jmp public_536cfc
        public_536cf4 : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 2
        public_536cfc : nop
        cmp eax, dword ptr ss : [esp+0x50]
        jae public_536d4f
        push 1
        call dword ptr ds : [public_5c69dc]
        mov edx, dword ptr ds : [public_5c6d90]
        add esp, 4
        push eax
        mov dword ptr ss : [esp+0x50], eax
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx]
        push esi
        push ecx
        call dword ptr ds : [edx+0x70]
        mov ecx, ebx
        call dword ptr ds : [public_5c6590]
        mov ecx, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x4C]
        mov ecx, dword ptr ds : [edi+8]
        lea eax, ss:[esp+0x4C]
        push eax
        push 1
        push ecx
        mov ecx, edi
        call public_537260
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x38
        ret 0xC
        public_536d4f : nop
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x60]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x38
        ret 0xC
        public_536d68 : nop
        mov esi, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        jne public_536d77
        xor eax, eax
        jmp public_536d7f
        public_536d77 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, edx
        sar eax, 2
        public_536d7f : nop
        cmp eax, dword ptr ss : [esp+0x50]
        jae public_536fa0
        cmp dword ptr ds : [ecx+0x74], 2
        jne public_536e18
        mov edx, dword ptr ds : [public_5c692c]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [public_5c6928]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x24], eax
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x28], edx
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x34], 0x3F800000
        mov byte ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x44], 0
        mov byte ptr ss : [esp+0x2C], 0
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x64]
        mov ecx, dword ptr ss : [esp+0x4C]
        lea eax, ss:[esp+0x1C]
        fmul dword ptr ds : [public_5de598]
        push eax
        push ecx
        fstp dword ptr ss : [esp+0x3C]
        call dword ptr ds : [public_5c69d8]
        mov ecx, dword ptr ss : [esp+0x54]
        add esp, 8
        push 1
        call dword ptr ds : [public_5c65c4]
        jmp public_536e22
        public_536e18 : nop
        push ecx
        call dword ptr ds : [public_5c69d4]
        add esp, 4
        public_536e22 : nop
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+0xC]
        sub edx, eax
        sar edx, 2
        cmp edx, 1
        mov edi, eax
        jae public_536ee8
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_536e54
        sub eax, ecx
        sar eax, 2
        cmp eax, 1
        jbe public_536e54
        mov ecx, esi
        call public_5ad970
        mov ebx, eax
        jmp public_536e59
        public_536e54 : nop
        mov ebx, 1
        public_536e59 : nop
        mov ecx, esi
        call public_5ad970
        mov ebp, eax
        add ebp, ebx
        mov eax, ebp
        jns public_536e6a
        xor eax, eax
        public_536e6a : nop
        shl eax, 2
        push eax
        call public_5b7e84
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        mov ebx, eax
        push ebx
        push edi
        push ecx
        mov ecx, esi
        call public_597c70
        lea edx, ss:[esp+0x4C]
        push edx
        push 1
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x60], eax
        call public_427730
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ds : [esi+8]
        add eax, 4
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_597c70
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_53aaa0
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_5b7e1d
        lea edx, ds:[ebx+ebp*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], edx
        call public_5ad970
        lea eax, ds:[ebx+eax*4+4]
        pop edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x38
        ret 0xC
        public_536ee8 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_536f50
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_597c70
        mov eax, dword ptr ds : [esi+8]
        mov edx, eax
        lea ecx, ss:[esp+0x4C]
        push ecx
        sub edx, edi
        sar edx, 2
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_427730
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_536f3d
        lea esp, ss:[esp]
        public_536f30 : nop
        mov edx, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_536f30
        public_536f3d : nop
        mov eax, dword ptr ds : [esi+8]
        pop edi
        add eax, 4
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x38
        ret 0xC
        public_536f50 : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_597c70
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_536f74
        public_536f65 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_536f65
        public_536f74 : nop
        lea ecx, ds:[edi+4]
        cmp edi, ecx
        mov eax, edi
        je public_536f8d
        lea ecx, ds:[ecx]
        public_536f80 : nop
        mov edx, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_536f80
        public_536f8d : nop
        mov eax, dword ptr ds : [esi+8]
        pop edi
        add eax, 4
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x38
        ret 0xC
        public_536fa0 : nop
        call dword ptr ds : [public_5c69c0]
        public_536fa6 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x38
        ret 0xC
        UNREACHABLE_TRAP(0x536c20)
    }
}

#undef public_536c50
#undef public_536c7f
#undef public_536cf4
#undef public_536cfc
#undef public_536d4f
#undef public_536d68
#undef public_536d77
#undef public_536d7f
#undef public_536e18
#undef public_536e22
#undef public_536e54
#undef public_536e59
#undef public_536e6a
#undef public_536ee8
#undef public_536f30
#undef public_536f3d
#undef public_536f50
#undef public_536f65
#undef public_536f74
#undef public_536f80
#undef public_536f8d
#undef public_536fa0
#undef public_536fa6
