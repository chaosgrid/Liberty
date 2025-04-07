#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0160);
CLANG_FORWARD_PROC_SYMBOL(public_6f94b20);
CLANG_FORWARD_PROC_SYMBOL(public_6fa1b10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa4c80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa51f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa5d90);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6fa1b62 _public_6fa1b62
#define public_6fa1b64 _public_6fa1b64
#define public_6fa1b6c _public_6fa1b6c
#define public_6fa1b7f _public_6fa1b7f
#define public_6fa1b8c _public_6fa1b8c
#define public_6fa1bb0 _public_6fa1bb0
#define public_6fa1bce _public_6fa1bce
#define public_6fa1bd8 _public_6fa1bd8
#define public_6fa1bfb _public_6fa1bfb
#define public_6fa1c16 _public_6fa1c16
#define public_6fa1c20 _public_6fa1c20
#define public_6fa1c36 _public_6fa1c36
#define public_6fa1c40 _public_6fa1c40
#define public_6fa1c51 _public_6fa1c51
#define public_6fa1c7b _public_6fa1c7b
#define public_6fa1c91 _public_6fa1c91
#define public_6fa1cab _public_6fa1cab
#define public_6fa1ce8 _public_6fa1ce8
#define public_6fa1cf0 _public_6fa1cf0
#define public_6fa1d0a _public_6fa1d0a
#define public_6fa1d30 _public_6fa1d30
#define public_6fa1d43 _public_6fa1d43
#define public_6fa1d50 _public_6fa1d50
#define public_6fa1d62 _public_6fa1d62
#define public_6fa1d78 _public_6fa1d78
#define public_6fa1d96 _public_6fa1d96
#define public_6fa1dc0 _public_6fa1dc0
#define public_6fa1dd0 _public_6fa1dd0
#define public_6fa1dec _public_6fa1dec
#define public_6fa1e02 _public_6fa1e02
#define public_6fa1e94 _public_6fa1e94
#define public_6fa1e97 _public_6fa1e97

PROC_DECLARE(0x6fa1b10, internal_6fa1b10, public_6fa1b10);
extern "C" NAKED register_t __cdecl internal_6fa1b10()
{
    __asm
    {
        sub esp, 0xC
        mov edx, dword ptr ds : [ecx+0xC]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        sub edx, esi
        mov eax, 0x6BCA1AF3
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_6fa1cab
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6fa1b62
        mov edx, esi
        sub edx, ecx
        mov eax, 0x6BCA1AF3
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp ebp, edx
        mov edi, edx
        jb public_6fa1b64
        public_6fa1b62 : nop
        mov edi, ebp
        public_6fa1b64 : nop
        test ecx, ecx
        jne public_6fa1b6c
        xor edx, edx
        jmp public_6fa1b7f
        public_6fa1b6c : nop
        sub esi, ecx
        mov eax, 0x6BCA1AF3
        imul esi
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6fa1b7f : nop
        lea eax, ds:[edx+edi]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6fa1b8c
        xor eax, eax
        public_6fa1b8c : nop
        imul eax, 0x98
        push eax
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_6fa1bce
        public_6fa1bb0 : nop
        push esi
        push ebx
        call public_6fa4c80
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x98
        add esp, 8
        add ebx, 0x98
        cmp esi, eax
        jne public_6fa1bb0
        public_6fa1bce : nop
        test ebp, ebp
        mov esi, ebx
        jbe public_6fa1bfb
        mov dword ptr ss : [esp+0x24], ebp
        public_6fa1bd8 : nop
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        push esi
        call public_6fa4c80
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x98
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_6fa1bd8
        mov eax, dword ptr ss : [esp+0x20]
        public_6fa1bfb : nop
        mov ecx, ebp
        imul ecx, 0x98
        add ecx, ebx
        mov ebx, dword ptr ds : [edi+8]
        cmp eax, ebx
        mov esi, eax
        je public_6fa1c36
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_6fa1c20
        public_6fa1c16 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        lea ebx, ds:[ebx]
        public_6fa1c20 : nop
        add ecx, esi
        push esi
        push ecx
        call public_6fa4c80
        add esi, 0x98
        add esp, 8
        cmp esi, ebx
        jne public_6fa1c16
        public_6fa1c36 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        je public_6fa1c51
        public_6fa1c40 : nop
        mov ecx, esi
        call public_6f94b20
        add esi, 0x98
        cmp esi, ebx
        jne public_6fa1c40
        public_6fa1c51 : nop
        mov edx, dword ptr ds : [edi+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x1C]
        imul eax, 0x98
        add eax, esi
        mov dword ptr ds : [edi+0xC], eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        test eax, eax
        jne public_6fa1c7b
        xor edx, edx
        jmp public_6fa1c91
        public_6fa1c7b : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0x6BCA1AF3
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6fa1c91 : nop
        add edx, ebp
        imul edx, 0x98
        add edx, esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6fa1cab : nop
        mov ebx, dword ptr ss : [esp+0x20]
        mov edx, esi
        sub edx, ebx
        mov eax, 0x6BCA1AF3
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        jae public_6fa1d78
        mov eax, ebp
        imul eax, 0x98
        mov dword ptr ss : [esp+0x24], eax
        add eax, ebx
        cmp ebx, esi
        mov edi, ebx
        je public_6fa1d0a
        sub eax, ebx
        mov dword ptr ss : [esp+0x20], eax
        jmp public_6fa1cf0
        public_6fa1ce8 : nop
        mov eax, dword ptr ss : [esp+0x20]
        lea esp, ss:[esp]
        public_6fa1cf0 : nop
        add eax, edi
        push edi
        push eax
        call public_6fa4c80
        add edi, 0x98
        add esp, 8
        cmp edi, esi
        jne public_6fa1ce8
        mov ecx, dword ptr ss : [esp+0x10]
        public_6fa1d0a : nop
        mov esi, dword ptr ds : [ecx+8]
        mov edi, dword ptr ss : [esp+0x28]
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x6BCA1AF3
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub ebp, edx
        je public_6fa1d43
        lea ebx, ds:[ebx]
        public_6fa1d30 : nop
        push edi
        push esi
        call public_6fa4c80
        add esp, 8
        add esi, 0x98
        dec ebp
        jne public_6fa1d30
        public_6fa1d43 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [ebp+8]
        cmp ebx, esi
        je public_6fa1d62
        mov edi, edi
        public_6fa1d50 : nop
        push edi
        mov ecx, ebx
        call public_6fa51f0
        add ebx, 0x98
        cmp ebx, esi
        jne public_6fa1d50
        public_6fa1d62 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [esp+0x24]
        pop edi
        add eax, edx
        pop esi
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6fa1d78 : nop
        test ebp, ebp
        jbe public_6fa1e97
        imul ebp, 0x98
        mov edi, esi
        sub edi, ebp
        cmp edi, esi
        mov dword ptr ss : [esp+0x20], esi
        mov dword ptr ss : [esp+0x24], ebp
        je public_6fa1dc0
        public_6fa1d96 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push edi
        push eax
        call public_6fa4c80
        mov edx, dword ptr ss : [esp+0x28]
        add edx, 0x98
        add edi, 0x98
        add esp, 8
        cmp edi, esi
        mov dword ptr ss : [esp+0x20], edx
        jne public_6fa1d96
        mov ecx, dword ptr ss : [esp+0x10]
        public_6fa1dc0 : nop
        mov edi, dword ptr ds : [ecx+8]
        mov esi, edi
        sub esi, ebp
        cmp ebx, esi
        je public_6fa1dec
        nop 
        lea esp, ss:[esp]
        public_6fa1dd0 : nop
        sub esi, 0x98
        sub edi, 0x98
        push esi
        mov ecx, edi
        call public_6fa51f0
        cmp esi, ebx
        jne public_6fa1dd0
        mov ecx, dword ptr ss : [esp+0x10]
        public_6fa1dec : nop
        lea eax, ds:[ebx+ebp]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x20], eax
        je public_6fa1e94
        mov ebp, dword ptr ss : [esp+0x28]
        add ebx, 2
        public_6fa1e02 : nop
        mov cl, byte ptr ss : [ebp]
        mov byte ptr ds : [ebx-2], cl
        mov dl, byte ptr ss : [ebp+1]
        mov byte ptr ds : [ebx-1], dl
        mov al, byte ptr ss : [ebp+2]
        mov byte ptr ds : [ebx], al
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [ebx+2], ecx
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ebx+6], edx
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ebx+0xA], eax
        lea edi, ds:[ebx+0xE]
        mov ecx, 0xC
        lea esi, ss:[ebp+0x10]
        rep movsd
        mov ecx, dword ptr ss : [ebp+0x40]
        lea eax, ss:[ebp+0x48]
        mov dword ptr ds : [ebx+0x3E], ecx
        push eax
        lea ecx, ds:[ebx+0x42]
        call public_6ed0160
        mov edx, dword ptr ss : [ebp+0x78]
        mov dword ptr ds : [ebx+0x76], edx
        mov eax, dword ptr ss : [ebp+0x7C]
        mov dword ptr ds : [ebx+0x7A], eax
        mov ecx, dword ptr ss : [ebp+0x80]
        lea eax, ss:[ebp+0x84]
        mov dword ptr ds : [ebx+0x7E], ecx
        push eax
        lea ecx, ds:[ebx+0x82]
        call public_6fa5d90
        mov edx, dword ptr ss : [ebp+0x94]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ebx+0x92], edx
        add ebx, 0x98
        lea eax, ds:[ebx-2]
        cmp eax, ecx
        jne public_6fa1e02
        mov ebp, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6fa1e94 : nop
        add dword ptr ds : [ecx+8], ebp
        public_6fa1e97 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6fa1b10)
    }
}

#undef public_6fa1b62
#undef public_6fa1b64
#undef public_6fa1b6c
#undef public_6fa1b7f
#undef public_6fa1b8c
#undef public_6fa1bb0
#undef public_6fa1bce
#undef public_6fa1bd8
#undef public_6fa1bfb
#undef public_6fa1c16
#undef public_6fa1c20
#undef public_6fa1c36
#undef public_6fa1c40
#undef public_6fa1c51
#undef public_6fa1c7b
#undef public_6fa1c91
#undef public_6fa1cab
#undef public_6fa1ce8
#undef public_6fa1cf0
#undef public_6fa1d0a
#undef public_6fa1d30
#undef public_6fa1d43
#undef public_6fa1d50
#undef public_6fa1d62
#undef public_6fa1d78
#undef public_6fa1d96
#undef public_6fa1dc0
#undef public_6fa1dd0
#undef public_6fa1dec
#undef public_6fa1e02
#undef public_6fa1e94
#undef public_6fa1e97
