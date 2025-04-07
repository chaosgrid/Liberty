#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62695c0);
CLANG_FORWARD_PROC_SYMBOL(public_626a570);
CLANG_FORWARD_PROC_SYMBOL(public_626a5b0);
CLANG_FORWARD_PROC_SYMBOL(public_626c1e0);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6309bf4 _public_6309bf4
#define public_6309bfc _public_6309bfc
#define public_6309c0b _public_6309c0b
#define public_6309c13 _public_6309c13
#define public_6309c21 _public_6309c21
#define public_6309c29 _public_6309c29
#define public_6309c33 _public_6309c33
#define public_6309c50 _public_6309c50
#define public_6309c64 _public_6309c64
#define public_6309c96 _public_6309c96
#define public_6309ca6 _public_6309ca6
#define public_6309cd1 _public_6309cd1
#define public_6309cd6 _public_6309cd6
#define public_6309ce7 _public_6309ce7
#define public_6309d61 _public_6309d61
#define public_6309da0 _public_6309da0
#define public_6309db6 _public_6309db6
#define public_6309dd0 _public_6309dd0
#define public_6309de5 _public_6309de5
#define public_6309df0 _public_6309df0
#define public_6309e04 _public_6309e04
#define public_6309e0a _public_6309e0a
#define public_6309e27 _public_6309e27

PROC_DECLARE(0x6309be0, internal_6309be0, public_6309be0);
extern "C" NAKED register_t __cdecl internal_6309be0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebx, ecx
        mov edx, dword ptr ds : [ebx+4]
        test edx, edx
        push esi
        push edi
        jne public_6309bf4
        xor ecx, ecx
        jmp public_6309bfc
        public_6309bf4 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, edx
        sar ecx, 5
        public_6309bfc : nop
        mov edi, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [edi+4]
        test esi, esi
        jne public_6309c0b
        xor eax, eax
        jmp public_6309c13
        public_6309c0b : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, esi
        sar eax, 5
        public_6309c13 : nop
        add eax, ecx
        test edx, edx
        mov dword ptr ss : [esp+0x10], eax
        jne public_6309c21
        xor ecx, ecx
        jmp public_6309c29
        public_6309c21 : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        sub ecx, edx
        sar ecx, 5
        public_6309c29 : nop
        cmp ecx, eax
        jae public_6309c96
        test eax, eax
        jge public_6309c33
        xor eax, eax
        public_6309c33 : nop
        shl eax, 5
        push eax
        call public_6391d9c
        mov ebp, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [ebx+4]
        add esp, 4
        cmp esi, ebp
        mov dword ptr ss : [esp+0x14], eax
        mov edi, eax
        je public_6309c64
        nop 
        public_6309c50 : nop
        push esi
        push edi
        call public_626c1e0
        add esi, 0x20
        add esp, 8
        add edi, 0x20
        cmp esi, ebp
        jne public_6309c50
        public_6309c64 : nop
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp+0x18]
        shl eax, 5
        add eax, esi
        add esp, 4
        mov ecx, ebx
        mov dword ptr ds : [ebx+0xC], eax
        call public_62695c0
        mov edi, dword ptr ss : [esp+0x1C]
        shl eax, 5
        add eax, esi
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+4], esi
        public_6309c96 : nop
        mov esi, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x10], esi
        je public_6309e27
        public_6309ca6 : nop
        mov ebp, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [ebx+0xC]
        sub ecx, ebp
        sar ecx, 5
        cmp ecx, 1
        jae public_6309d61
        mov ecx, ebx
        call public_62695c0
        cmp eax, 1
        jbe public_6309cd1
        mov ecx, ebx
        call public_62695c0
        mov esi, eax
        jmp public_6309cd6
        public_6309cd1 : nop
        mov esi, 1
        public_6309cd6 : nop
        mov ecx, ebx
        call public_62695c0
        mov edi, eax
        add edi, esi
        mov eax, edi
        jns public_6309ce7
        xor eax, eax
        public_6309ce7 : nop
        shl eax, 5
        push eax
        call public_6391d9c
        mov edx, dword ptr ds : [ebx+4]
        add esp, 4
        mov esi, eax
        push esi
        push ebp
        push edx
        mov ecx, ebx
        call public_626a570
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        push 1
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x20], eax
        call public_626a5b0
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ebx+8]
        add edx, 0x20
        push edx
        push eax
        push ebp
        mov ecx, ebx
        call public_626a570
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+4]
        push ecx
        push edx
        mov ecx, ebx
        call public_628f050
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6391d5a
        shl edi, 5
        add edi, esi
        add esp, 4
        mov ecx, ebx
        mov dword ptr ds : [ebx+0xC], edi
        call public_62695c0
        inc eax
        shl eax, 5
        add eax, esi
        mov dword ptr ds : [ebx+4], esi
        jmp public_6309e0a
        public_6309d61 : nop
        mov ecx, ebp
        sub ecx, ebp
        sar ecx, 5
        cmp ecx, 1
        mov ecx, ebx
        jae public_6309db6
        lea edx, ss:[ebp+0x20]
        push edx
        push ebp
        push ebp
        call public_626a570
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, eax
        sub ecx, ebp
        sar ecx, 5
        push esi
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, ebx
        call public_626a5b0
        mov eax, dword ptr ds : [ebx+8]
        cmp ebp, eax
        je public_6309e04
        lea esp, ss:[esp]
        public_6309da0 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov edi, ebp
        add ebp, 0x20
        cmp ebp, eax
        mov ecx, 8
        rep movsd
        jne public_6309da0
        jmp public_6309e04
        public_6309db6 : nop
        push ebp
        push ebp
        lea eax, ss:[ebp-0x20]
        push eax
        call public_626a570
        mov edx, dword ptr ds : [ebx+8]
        lea eax, ds:[edx-0x20]
        cmp ebp, eax
        je public_6309de5
        nop 
        lea esp, ss:[esp]
        public_6309dd0 : nop
        sub eax, 0x20
        sub edx, 0x20
        cmp eax, ebp
        mov ecx, 8
        mov esi, eax
        mov edi, edx
        rep movsd
        jne public_6309dd0
        public_6309de5 : nop
        lea eax, ss:[ebp+0x20]
        cmp ebp, eax
        je public_6309e04
        lea esp, ss:[esp]
        public_6309df0 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov edi, ebp
        add ebp, 0x20
        cmp ebp, eax
        mov ecx, 8
        rep movsd
        jne public_6309df0
        public_6309e04 : nop
        mov eax, dword ptr ds : [ebx+8]
        add eax, 0x20
        public_6309e0a : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ds : [ecx+8]
        add esi, 0x20
        cmp esi, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6309ca6
        public_6309e27 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6309be0)
    }
}

#undef public_6309bf4
#undef public_6309bfc
#undef public_6309c0b
#undef public_6309c13
#undef public_6309c21
#undef public_6309c29
#undef public_6309c33
#undef public_6309c50
#undef public_6309c64
#undef public_6309c96
#undef public_6309ca6
#undef public_6309cd1
#undef public_6309cd6
#undef public_6309ce7
#undef public_6309d61
#undef public_6309da0
#undef public_6309db6
#undef public_6309dd0
#undef public_6309de5
#undef public_6309df0
#undef public_6309e04
#undef public_6309e0a
#undef public_6309e27
