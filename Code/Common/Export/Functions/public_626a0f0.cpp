#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626c1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_626a12d _public_626a12d
#define public_626a12f _public_626a12f
#define public_626a137 _public_626a137
#define public_626a13c _public_626a13c
#define public_626a148 _public_626a148
#define public_626a170 _public_626a170
#define public_626a188 _public_626a188
#define public_626a192 _public_626a192
#define public_626a1ae _public_626a1ae
#define public_626a1c0 _public_626a1c0
#define public_626a1d8 _public_626a1d8
#define public_626a214 _public_626a214
#define public_626a233 _public_626a233
#define public_626a258 _public_626a258
#define public_626a274 _public_626a274
#define public_626a290 _public_626a290
#define public_626a2b0 _public_626a2b0
#define public_626a2c7 _public_626a2c7
#define public_626a2de _public_626a2de
#define public_626a2f4 _public_626a2f4
#define public_626a310 _public_626a310
#define public_626a328 _public_626a328
#define public_626a337 _public_626a337
#define public_626a350 _public_626a350
#define public_626a360 _public_626a360
#define public_626a37b _public_626a37b
#define public_626a387 _public_626a387

PROC_DECLARE(0x626a0f0, internal_626a0f0, public_626a0f0);
extern "C" NAKED register_t __cdecl internal_626a0f0()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx+0xC]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [ecx+8]
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        sub edi, eax
        sub edx, esi
        sar edi, 5
        sar edx, 5
        cmp edx, edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_626a233
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_626a12d
        mov eax, esi
        sub eax, ecx
        sar eax, 5
        cmp edi, eax
        jb public_626a12f
        public_626a12d : nop
        mov eax, edi
        public_626a12f : nop
        test ecx, ecx
        jne public_626a137
        xor esi, esi
        jmp public_626a13c
        public_626a137 : nop
        sub esi, ecx
        sar esi, 5
        public_626a13c : nop
        add eax, esi
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_626a148
        xor eax, eax
        public_626a148 : nop
        shl eax, 5
        push eax
        call public_6391d9c
        mov ebp, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_626a188
        lea esp, ss:[esp]
        public_626a170 : nop
        push esi
        push ebx
        call public_626c1e0
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x20
        add esp, 8
        add ebx, 0x20
        cmp esi, eax
        jne public_626a170
        public_626a188 : nop
        mov esi, dword ptr ss : [esp+0x24]
        cmp esi, dword ptr ss : [esp+0x28]
        je public_626a1ae
        public_626a192 : nop
        push esi
        push ebx
        call public_626c1e0
        mov eax, dword ptr ss : [esp+0x30]
        add esi, 0x20
        add esp, 8
        add ebx, 0x20
        cmp esi, eax
        jne public_626a192
        mov eax, dword ptr ss : [esp+0x20]
        public_626a1ae : nop
        mov ecx, dword ptr ss : [ebp+8]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x28], ecx
        mov esi, eax
        je public_626a1d8
        sub ebx, eax
        lea ecx, ds:[ecx]
        public_626a1c0 : nop
        lea eax, ds:[ebx+esi]
        push esi
        push eax
        call public_626c1e0
        mov eax, dword ptr ss : [esp+0x30]
        add esi, 0x20
        add esp, 8
        cmp esi, eax
        jne public_626a1c0
        public_626a1d8 : nop
        mov ecx, dword ptr ss : [ebp+4]
        push ecx
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [ebp+4]
        shl eax, 5
        add eax, edx
        add esp, 4
        test ecx, ecx
        mov dword ptr ss : [ebp+0xC], eax
        jne public_626a214
        xor eax, eax
        mov eax, edi
        pop edi
        shl eax, 5
        add eax, edx
        pop esi
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+4], edx
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_626a214 : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        sar eax, 5
        add eax, edi
        pop edi
        shl eax, 5
        add eax, edx
        pop esi
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+4], edx
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_626a233 : nop
        mov ebx, dword ptr ss : [esp+0x20]
        mov edx, esi
        sub edx, ebx
        sar edx, 5
        cmp edx, edi
        jae public_626a2f4
        shl edi, 5
        cmp ebx, esi
        mov dword ptr ss : [esp+0x20], edi
        lea ebp, ds:[edi+ebx]
        mov edi, ebx
        je public_626a274
        sub ebp, ebx
        public_626a258 : nop
        lea eax, ds:[edi+ebp]
        push edi
        push eax
        call public_626c1e0
        add edi, 0x20
        add esp, 8
        cmp edi, esi
        jne public_626a258
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x24]
        public_626a274 : nop
        mov edi, dword ptr ds : [ecx+8]
        mov edx, dword ptr ss : [esp+0x28]
        mov esi, edi
        sub esi, ebx
        sar esi, 5
        shl esi, 5
        add esi, eax
        cmp esi, edx
        je public_626a2b0
        nop 
        lea esp, ss:[esp]
        public_626a290 : nop
        push esi
        push edi
        call public_626c1e0
        mov eax, dword ptr ss : [esp+0x30]
        add esi, 0x20
        add esp, 8
        add edi, 0x20
        cmp esi, eax
        jne public_626a290
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x24]
        public_626a2b0 : nop
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ss : [esp+0x24]
        sub edx, ebx
        sar edx, 5
        shl edx, 5
        add edx, eax
        cmp esi, edx
        je public_626a2de
        sub ebx, esi
        public_626a2c7 : nop
        lea edi, ds:[ebx+eax]
        mov esi, eax
        add eax, 0x20
        cmp eax, edx
        mov ecx, 8
        rep movsd
        jne public_626a2c7
        mov ecx, dword ptr ss : [esp+0x10]
        public_626a2de : nop
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        add eax, edx
        pop ebp
        mov dword ptr ds : [ecx+8], eax
        pop ebx
        add esp, 0xC
        ret 0xC
        public_626a2f4 : nop
        test edi, edi
        jbe public_626a387
        shl edi, 5
        mov eax, edi
        mov edi, esi
        sub edi, eax
        cmp edi, esi
        mov ebp, esi
        mov dword ptr ss : [esp+0x20], eax
        je public_626a328
        nop 
        public_626a310 : nop
        push edi
        push ebp
        call public_626c1e0
        add edi, 0x20
        add esp, 8
        add ebp, 0x20
        cmp edi, esi
        jne public_626a310
        mov ecx, dword ptr ss : [esp+0x10]
        public_626a328 : nop
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ss : [esp+0x20]
        mov eax, edx
        sub eax, edi
        cmp ebx, eax
        je public_626a350
        public_626a337 : nop
        sub eax, 0x20
        sub edx, 0x20
        cmp eax, ebx
        mov ecx, 8
        mov esi, eax
        mov edi, edx
        rep movsd
        jne public_626a337
        mov ecx, dword ptr ss : [esp+0x10]
        public_626a350 : nop
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, dword ptr ss : [esp+0x28]
        je public_626a37b
        sub ebx, eax
        lea esp, ss:[esp]
        public_626a360 : nop
        lea edi, ds:[ebx+eax]
        mov esi, eax
        mov ecx, 8
        rep movsd
        mov ecx, dword ptr ss : [esp+0x28]
        add eax, 0x20
        cmp eax, ecx
        jne public_626a360
        mov ecx, dword ptr ss : [esp+0x10]
        public_626a37b : nop
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ss : [esp+0x20]
        add edx, eax
        mov dword ptr ds : [ecx+8], edx
        public_626a387 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x626a0f0)
    }
}

#undef public_626a12d
#undef public_626a12f
#undef public_626a137
#undef public_626a13c
#undef public_626a148
#undef public_626a170
#undef public_626a188
#undef public_626a192
#undef public_626a1ae
#undef public_626a1c0
#undef public_626a1d8
#undef public_626a214
#undef public_626a233
#undef public_626a258
#undef public_626a274
#undef public_626a290
#undef public_626a2b0
#undef public_626a2c7
#undef public_626a2de
#undef public_626a2f4
#undef public_626a310
#undef public_626a328
#undef public_626a337
#undef public_626a350
#undef public_626a360
#undef public_626a37b
#undef public_626a387
