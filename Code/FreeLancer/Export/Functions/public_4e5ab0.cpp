#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_433a50);
CLANG_FORWARD_PROC_SYMBOL(public_4e5ab0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4e5ae4 _public_4e5ae4
#define public_4e5ae6 _public_4e5ae6
#define public_4e5aee _public_4e5aee
#define public_4e5af3 _public_4e5af3
#define public_4e5aff _public_4e5aff
#define public_4e5b20 _public_4e5b20
#define public_4e5b38 _public_4e5b38
#define public_4e5b42 _public_4e5b42
#define public_4e5b62 _public_4e5b62
#define public_4e5b7b _public_4e5b7b
#define public_4e5b80 _public_4e5b80
#define public_4e5b93 _public_4e5b93
#define public_4e5ba0 _public_4e5ba0
#define public_4e5bb1 _public_4e5bb1
#define public_4e5bed _public_4e5bed
#define public_4e5c0c _public_4e5c0c
#define public_4e5c3b _public_4e5c3b
#define public_4e5c40 _public_4e5c40
#define public_4e5c5b _public_4e5c5b
#define public_4e5c70 _public_4e5c70
#define public_4e5c88 _public_4e5c88
#define public_4e5c91 _public_4e5c91
#define public_4e5cb3 _public_4e5cb3
#define public_4e5cc5 _public_4e5cc5
#define public_4e5ce0 _public_4e5ce0
#define public_4e5d04 _public_4e5d04
#define public_4e5d10 _public_4e5d10
#define public_4e5d31 _public_4e5d31
#define public_4e5d40 _public_4e5d40
#define public_4e5d5f _public_4e5d5f
#define public_4e5d62 _public_4e5d62

PROC_DECLARE(0x4e5ab0, internal_4e5ab0, public_4e5ab0);
extern "C" NAKED register_t __cdecl internal_4e5ab0()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ds : [ecx+0xC]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        sub eax, esi
        sar eax, 4
        cmp eax, ebp
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_4e5c0c
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_4e5ae4
        mov eax, esi
        sub eax, ecx
        sar eax, 4
        cmp ebp, eax
        jb public_4e5ae6
        public_4e5ae4 : nop
        mov eax, ebp
        public_4e5ae6 : nop
        test ecx, ecx
        jne public_4e5aee
        xor esi, esi
        jmp public_4e5af3
        public_4e5aee : nop
        sub esi, ecx
        sar esi, 4
        public_4e5af3 : nop
        add eax, esi
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_4e5aff
        xor eax, eax
        public_4e5aff : nop
        shl eax, 4
        push eax
        call public_5b7e84
        mov ebx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_4e5b38
        public_4e5b20 : nop
        push esi
        push edi
        call public_433a50
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x10
        add esp, 8
        add edi, 0x10
        cmp esi, eax
        jne public_4e5b20
        public_4e5b38 : nop
        test ebp, ebp
        mov esi, edi
        jbe public_4e5b62
        mov dword ptr ss : [esp+0x24], ebp
        public_4e5b42 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        push esi
        call public_433a50
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x10
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_4e5b42
        mov eax, dword ptr ss : [esp+0x20]
        public_4e5b62 : nop
        mov edx, ebp
        shl edx, 4
        lea ecx, ds:[edx+edi]
        mov edi, dword ptr ds : [ebx+8]
        cmp eax, edi
        mov esi, eax
        je public_4e5b93
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_4e5b80
        public_4e5b7b : nop
        mov ecx, dword ptr ss : [esp+0x20]
        nop 
        public_4e5b80 : nop
        add ecx, esi
        push esi
        push ecx
        call public_433a50
        add esi, 0x10
        add esp, 8
        cmp esi, edi
        jne public_4e5b7b
        public_4e5b93 : nop
        mov edi, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, edi
        je public_4e5bb1
        lea ecx, ds:[ecx]
        public_4e5ba0 : nop
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c7084]
        add esi, 0x10
        cmp esi, edi
        jne public_4e5ba0
        public_4e5bb1 : nop
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [ebx+4]
        shl eax, 4
        add eax, edx
        add esp, 4
        test ecx, ecx
        mov dword ptr ds : [ebx+0xC], eax
        jne public_4e5bed
        xor eax, eax
        mov eax, ebp
        pop edi
        shl eax, 4
        pop esi
        add eax, edx
        pop ebp
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+4], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_4e5bed : nop
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ecx
        sar eax, 4
        add eax, ebp
        pop edi
        shl eax, 4
        pop esi
        add eax, edx
        pop ebp
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+4], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_4e5c0c : nop
        mov edi, dword ptr ss : [esp+0x20]
        mov edx, esi
        sub edx, edi
        sar edx, 4
        cmp edx, ebp
        jae public_4e5cc5
        mov eax, ebp
        shl eax, 4
        cmp edi, esi
        mov dword ptr ss : [esp+0x20], eax
        lea edx, ds:[eax+edi]
        mov ebx, edi
        je public_4e5c5b
        mov eax, edx
        sub eax, edi
        mov dword ptr ss : [esp+0x24], eax
        jmp public_4e5c40
        public_4e5c3b : nop
        mov eax, dword ptr ss : [esp+0x24]
        nop 
        public_4e5c40 : nop
        add eax, ebx
        push ebx
        push eax
        call public_433a50
        add ebx, 0x10
        add esp, 8
        cmp ebx, esi
        jne public_4e5c3b
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        public_4e5c5b : nop
        mov esi, dword ptr ds : [ecx+8]
        mov edx, esi
        sub edx, edi
        sar edx, 4
        sub ebp, edx
        mov ebx, ebp
        mov ebp, dword ptr ss : [esp+0x28]
        je public_4e5c88
        nop 
        public_4e5c70 : nop
        push ebp
        push esi
        call public_433a50
        add esp, 8
        add esi, 0x10
        dec ebx
        jne public_4e5c70
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        public_4e5c88 : nop
        mov ebx, dword ptr ds : [ecx+8]
        cmp edi, ebx
        mov esi, edi
        je public_4e5cb3
        public_4e5c91 : nop
        mov eax, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push 0
        push ebp
        mov ecx, esi
        call dword ptr ds : [public_5c6f9c]
        add esi, 0x10
        cmp esi, ebx
        jne public_4e5c91
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        public_4e5cb3 : nop
        mov edx, dword ptr ds : [ecx+8]
        pop edi
        pop esi
        add edx, eax
        pop ebp
        mov dword ptr ds : [ecx+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_4e5cc5 : nop
        test ebp, ebp
        jbe public_4e5d62
        shl ebp, 4
        mov ebx, esi
        sub ebx, ebp
        cmp ebx, esi
        mov dword ptr ss : [esp+0x20], esi
        je public_4e5d04
        lea esp, ss:[esp]
        public_4e5ce0 : nop
        mov edx, dword ptr ss : [esp+0x20]
        push ebx
        push edx
        call public_433a50
        mov edx, dword ptr ss : [esp+0x28]
        add edx, 0x10
        add ebx, 0x10
        add esp, 8
        cmp ebx, esi
        mov dword ptr ss : [esp+0x20], edx
        jne public_4e5ce0
        mov ecx, dword ptr ss : [esp+0x10]
        public_4e5d04 : nop
        mov ebx, dword ptr ds : [ecx+8]
        mov esi, ebx
        sub esi, ebp
        cmp edi, esi
        je public_4e5d31
        nop 
        public_4e5d10 : nop
        mov eax, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push 0
        sub esi, 0x10
        sub ebx, 0x10
        push esi
        mov ecx, ebx
        call dword ptr ds : [public_5c6f9c]
        cmp esi, edi
        jne public_4e5d10
        mov ecx, dword ptr ss : [esp+0x10]
        public_4e5d31 : nop
        lea ebx, ds:[edi+ebp]
        cmp edi, ebx
        mov esi, edi
        je public_4e5d5f
        mov edi, dword ptr ss : [esp+0x28]
        mov edi, edi
        public_4e5d40 : nop
        mov edx, dword ptr ds : [public_5c7080]
        mov eax, dword ptr ds : [edx]
        push eax
        push 0
        push edi
        mov ecx, esi
        call dword ptr ds : [public_5c6f9c]
        add esi, 0x10
        cmp esi, ebx
        jne public_4e5d40
        mov ecx, dword ptr ss : [esp+0x10]
        public_4e5d5f : nop
        add dword ptr ds : [ecx+8], ebp
        public_4e5d62 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x4e5ab0)
    }
}

#undef public_4e5ae4
#undef public_4e5ae6
#undef public_4e5aee
#undef public_4e5af3
#undef public_4e5aff
#undef public_4e5b20
#undef public_4e5b38
#undef public_4e5b42
#undef public_4e5b62
#undef public_4e5b7b
#undef public_4e5b80
#undef public_4e5b93
#undef public_4e5ba0
#undef public_4e5bb1
#undef public_4e5bed
#undef public_4e5c0c
#undef public_4e5c3b
#undef public_4e5c40
#undef public_4e5c5b
#undef public_4e5c70
#undef public_4e5c88
#undef public_4e5c91
#undef public_4e5cb3
#undef public_4e5cc5
#undef public_4e5ce0
#undef public_4e5d04
#undef public_4e5d10
#undef public_4e5d31
#undef public_4e5d40
#undef public_4e5d5f
#undef public_4e5d62
