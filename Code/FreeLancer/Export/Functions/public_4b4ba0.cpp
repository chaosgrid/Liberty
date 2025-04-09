#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b4ba0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4b4bd6 _public_4b4bd6
#define public_4b4bd8 _public_4b4bd8
#define public_4b4be0 _public_4b4be0
#define public_4b4be5 _public_4b4be5
#define public_4b4bf1 _public_4b4bf1
#define public_4b4c10 _public_4b4c10
#define public_4b4c27 _public_4b4c27
#define public_4b4c35 _public_4b4c35
#define public_4b4c41 _public_4b4c41
#define public_4b4c58 _public_4b4c58
#define public_4b4c5e _public_4b4c5e
#define public_4b4c80 _public_4b4c80
#define public_4b4c97 _public_4b4c97
#define public_4b4ca1 _public_4b4ca1
#define public_4b4cdd _public_4b4cdd
#define public_4b4cfc _public_4b4cfc
#define public_4b4d23 _public_4b4d23
#define public_4b4d3a _public_4b4d3a
#define public_4b4d44 _public_4b4d44
#define public_4b4d58 _public_4b4d58
#define public_4b4d6b _public_4b4d6b
#define public_4b4d71 _public_4b4d71
#define public_4b4d80 _public_4b4d80
#define public_4b4d96 _public_4b4d96
#define public_4b4dac _public_4b4dac
#define public_4b4dc5 _public_4b4dc5
#define public_4b4dd8 _public_4b4dd8
#define public_4b4de6 _public_4b4de6
#define public_4b4df1 _public_4b4df1
#define public_4b4e0a _public_4b4e0a
#define public_4b4e20 _public_4b4e20
#define public_4b4e36 _public_4b4e36
#define public_4b4e42 _public_4b4e42

PROC_DECLARE(0x4b4ba0, internal_4b4ba0, public_4b4ba0);
extern "C" NAKED register_t __cdecl internal_4b4ba0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, eax
        sar ecx, 5
        cmp ecx, esi
        mov dword ptr ss : [esp+0x10], edi
        jae public_4b4cfc
        mov edx, dword ptr ds : [edi+4]
        test edx, edx
        je public_4b4bd6
        mov ecx, eax
        sub ecx, edx
        sar ecx, 5
        cmp esi, ecx
        jb public_4b4bd8
        public_4b4bd6 : nop
        mov ecx, esi
        public_4b4bd8 : nop
        test edx, edx
        jne public_4b4be0
        xor eax, eax
        jmp public_4b4be5
        public_4b4be0 : nop
        sub eax, edx
        sar eax, 5
        public_4b4be5 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_4b4bf1
        xor eax, eax
        public_4b4bf1 : nop
        shl eax, 5
        push eax
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x1C], eax
        mov edx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ecx
        je public_4b4c35
        mov edi, edi
        public_4b4c10 : nop
        test edx, edx
        je public_4b4c27
        mov ecx, 8
        mov esi, eax
        mov edi, edx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_4b4c27 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        add eax, 0x20
        add edx, 0x20
        cmp eax, ecx
        jne public_4b4c10
        public_4b4c35 : nop
        test esi, esi
        mov eax, edx
        jbe public_4b4c5e
        mov ebp, dword ptr ss : [esp+0x28]
        mov ebx, esi
        public_4b4c41 : nop
        test eax, eax
        je public_4b4c58
        mov ecx, 8
        mov esi, ebp
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_4b4c58 : nop
        add eax, 0x20
        dec ebx
        jne public_4b4c41
        public_4b4c5e : nop
        mov ebp, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, esi
        shl ecx, 5
        cmp eax, ebp
        lea ebx, ds:[ecx+edx]
        je public_4b4ca1
        mov eax, ebx
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        sub eax, edx
        add eax, ecx
        lea ecx, ds:[ecx]
        public_4b4c80 : nop
        test ebx, ebx
        je public_4b4c97
        mov ecx, 8
        mov esi, eax
        mov edi, ebx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_4b4c97 : nop
        add eax, 0x20
        add ebx, 0x20
        cmp eax, ebp
        jne public_4b4c80
        public_4b4ca1 : nop
        mov edx, dword ptr ds : [edi+4]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [edi+4]
        shl eax, 5
        add eax, edx
        add esp, 4
        test ecx, ecx
        mov dword ptr ds : [edi+0xC], eax
        jne public_4b4cdd
        xor eax, eax
        mov eax, esi
        shl eax, 5
        add eax, edx
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_4b4cdd : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 5
        add eax, esi
        shl eax, 5
        add eax, edx
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_4b4cfc : nop
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, eax
        sub ecx, ebp
        sar ecx, 5
        cmp ecx, esi
        jae public_4b4dac
        mov ecx, esi
        shl ecx, 5
        cmp ebp, eax
        mov dword ptr ss : [esp+0x20], ecx
        lea edx, ds:[ecx+ebp]
        je public_4b4d44
        mov ebx, edx
        sub ebx, ecx
        public_4b4d23 : nop
        test edx, edx
        je public_4b4d3a
        mov ecx, 8
        mov esi, ebx
        mov edi, edx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_4b4d3a : nop
        add ebx, 0x20
        add edx, 0x20
        cmp ebx, eax
        jne public_4b4d23
        public_4b4d44 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ebx, dword ptr ss : [esp+0x28]
        mov edx, eax
        sub edx, ebp
        sar edx, 5
        sub esi, edx
        je public_4b4d71
        mov edx, esi
        public_4b4d58 : nop
        test eax, eax
        je public_4b4d6b
        mov ecx, 8
        mov esi, ebx
        mov edi, eax
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        public_4b4d6b : nop
        add eax, 0x20
        dec edx
        jne public_4b4d58
        public_4b4d71 : nop
        mov edx, dword ptr ds : [edi+8]
        cmp ebp, edx
        mov eax, ebp
        je public_4b4d96
        lea ebx, ds:[ebx]
        public_4b4d80 : nop
        mov edi, eax
        add eax, 0x20
        cmp eax, edx
        mov ecx, 8
        mov esi, ebx
        rep movsd
        jne public_4b4d80
        mov edi, dword ptr ss : [esp+0x10]
        public_4b4d96 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x20]
        add ecx, eax
        mov dword ptr ds : [edi+8], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_4b4dac : nop
        test esi, esi
        jbe public_4b4e42
        shl esi, 5
        mov edx, eax
        sub edx, esi
        cmp edx, eax
        mov ebx, eax
        mov dword ptr ss : [esp+0x20], esi
        je public_4b4de6
        public_4b4dc5 : nop
        test ebx, ebx
        je public_4b4dd8
        mov ecx, 8
        mov esi, edx
        mov edi, ebx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        public_4b4dd8 : nop
        add edx, 0x20
        add ebx, 0x20
        cmp edx, eax
        jne public_4b4dc5
        mov esi, dword ptr ss : [esp+0x20]
        public_4b4de6 : nop
        mov edx, dword ptr ds : [edi+8]
        mov eax, edx
        sub eax, esi
        cmp ebp, eax
        je public_4b4e0a
        public_4b4df1 : nop
        sub eax, 0x20
        sub edx, 0x20
        cmp eax, ebp
        mov ecx, 8
        mov esi, eax
        mov edi, edx
        rep movsd
        jne public_4b4df1
        mov edi, dword ptr ss : [esp+0x10]
        public_4b4e0a : nop
        mov ecx, dword ptr ss : [esp+0x20]
        lea edx, ds:[ecx+ebp]
        cmp ebp, edx
        mov eax, ebp
        je public_4b4e36
        mov ebx, dword ptr ss : [esp+0x28]
        nop 
        lea esp, ss:[esp]
        public_4b4e20 : nop
        mov edi, eax
        add eax, 0x20
        cmp eax, edx
        mov ecx, 8
        mov esi, ebx
        rep movsd
        jne public_4b4e20
        mov edi, dword ptr ss : [esp+0x10]
        public_4b4e36 : nop
        mov eax, dword ptr ds : [edi+8]
        mov edx, dword ptr ss : [esp+0x20]
        add eax, edx
        mov dword ptr ds : [edi+8], eax
        public_4b4e42 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x4b4ba0)
    }
}

#undef public_4b4bd6
#undef public_4b4bd8
#undef public_4b4be0
#undef public_4b4be5
#undef public_4b4bf1
#undef public_4b4c10
#undef public_4b4c27
#undef public_4b4c35
#undef public_4b4c41
#undef public_4b4c58
#undef public_4b4c5e
#undef public_4b4c80
#undef public_4b4c97
#undef public_4b4ca1
#undef public_4b4cdd
#undef public_4b4cfc
#undef public_4b4d23
#undef public_4b4d3a
#undef public_4b4d44
#undef public_4b4d58
#undef public_4b4d6b
#undef public_4b4d71
#undef public_4b4d80
#undef public_4b4d96
#undef public_4b4dac
#undef public_4b4dc5
#undef public_4b4dd8
#undef public_4b4de6
#undef public_4b4df1
#undef public_4b4e0a
#undef public_4b4e20
#undef public_4b4e36
#undef public_4b4e42
