#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f31000);
CLANG_FORWARD_PROC_SYMBOL(public_6f7a050);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f7a0a2 _public_6f7a0a2
#define public_6f7a0a4 _public_6f7a0a4
#define public_6f7a0ac _public_6f7a0ac
#define public_6f7a0bf _public_6f7a0bf
#define public_6f7a0cc _public_6f7a0cc
#define public_6f7a0f0 _public_6f7a0f0
#define public_6f7a108 _public_6f7a108
#define public_6f7a112 _public_6f7a112
#define public_6f7a132 _public_6f7a132
#define public_6f7a14a _public_6f7a14a
#define public_6f7a150 _public_6f7a150
#define public_6f7a163 _public_6f7a163
#define public_6f7a19f _public_6f7a19f
#define public_6f7a1cc _public_6f7a1cc
#define public_6f7a206 _public_6f7a206
#define public_6f7a210 _public_6f7a210
#define public_6f7a227 _public_6f7a227
#define public_6f7a247 _public_6f7a247
#define public_6f7a257 _public_6f7a257
#define public_6f7a262 _public_6f7a262
#define public_6f7a274 _public_6f7a274
#define public_6f7a28a _public_6f7a28a
#define public_6f7a2a5 _public_6f7a2a5
#define public_6f7a2bd _public_6f7a2bd
#define public_6f7a2d0 _public_6f7a2d0
#define public_6f7a2e9 _public_6f7a2e9
#define public_6f7a2f4 _public_6f7a2f4
#define public_6f7a30a _public_6f7a30a
#define public_6f7a30d _public_6f7a30d

PROC_DECLARE(0x6f7a050, internal_6f7a050, public_6f7a050);
extern "C" NAKED register_t __cdecl internal_6f7a050()
{
    __asm
    {
        sub esp, 0xC
        mov edx, dword ptr ds : [ecx+0xC]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [ecx+8]
        sub edx, esi
        mov eax, 0x78787879
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        add edx, eax
        cmp edx, edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_6f7a1cc
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6f7a0a2
        mov edx, esi
        sub edx, ecx
        mov eax, 0x78787879
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edi, edx
        mov ebx, edx
        jb public_6f7a0a4
        public_6f7a0a2 : nop
        mov ebx, edi
        public_6f7a0a4 : nop
        test ecx, ecx
        jne public_6f7a0ac
        xor edx, edx
        jmp public_6f7a0bf
        public_6f7a0ac : nop
        sub esi, ecx
        mov eax, 0x78787879
        imul esi
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6f7a0bf : nop
        lea eax, ds:[edx+ebx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6f7a0cc
        xor eax, eax
        public_6f7a0cc : nop
        imul eax, 0x44
        push eax
        call public_6fa912a
        mov ebp, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_6f7a108
        lea ecx, ds:[ecx]
        public_6f7a0f0 : nop
        push esi
        push ebx
        call public_6f31000
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x44
        add esp, 8
        add ebx, 0x44
        cmp esi, eax
        jne public_6f7a0f0
        public_6f7a108 : nop
        test edi, edi
        mov esi, ebx
        jbe public_6f7a132
        mov dword ptr ss : [esp+0x24], edi
        public_6f7a112 : nop
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        push esi
        call public_6f31000
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x44
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_6f7a112
        mov eax, dword ptr ss : [esp+0x20]
        public_6f7a132 : nop
        mov ecx, edi
        imul ecx, 0x44
        add ecx, ebx
        mov ebx, dword ptr ss : [ebp+8]
        cmp eax, ebx
        mov esi, eax
        je public_6f7a163
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_6f7a150
        public_6f7a14a : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edi, edi
        public_6f7a150 : nop
        add ecx, esi
        push esi
        push ecx
        call public_6f31000
        add esi, 0x44
        add esp, 8
        cmp esi, ebx
        jne public_6f7a14a
        public_6f7a163 : nop
        mov edx, dword ptr ss : [ebp+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x1C]
        imul eax, 0x44
        add eax, esi
        mov dword ptr ss : [ebp+0xC], eax
        mov eax, dword ptr ss : [ebp+4]
        add esp, 4
        test eax, eax
        jne public_6f7a19f
        xor edx, edx
        mov edx, edi
        imul edx, 0x44
        pop edi
        add edx, esi
        mov dword ptr ss : [ebp+4], esi
        pop esi
        mov dword ptr ss : [ebp+8], edx
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6f7a19f : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, eax
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add edx, edi
        imul edx, 0x44
        pop edi
        add edx, esi
        mov dword ptr ss : [ebp+4], esi
        pop esi
        mov dword ptr ss : [ebp+8], edx
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6f7a1cc : nop
        mov ebx, dword ptr ss : [esp+0x20]
        mov edx, esi
        sub edx, ebx
        mov eax, 0x78787879
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, edi
        jae public_6f7a28a
        mov eax, edi
        imul eax, 0x44
        mov dword ptr ss : [esp+0x20], eax
        add eax, ebx
        cmp ebx, esi
        mov ebp, ebx
        je public_6f7a227
        sub eax, ebx
        mov dword ptr ss : [esp+0x24], eax
        jmp public_6f7a210
        public_6f7a206 : nop
        mov eax, dword ptr ss : [esp+0x24]
        lea ebx, ds:[ebx]
        public_6f7a210 : nop
        add eax, ebp
        push ebp
        push eax
        call public_6f31000
        add ebp, 0x44
        add esp, 8
        cmp ebp, esi
        jne public_6f7a206
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f7a227 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov ebp, dword ptr ss : [esp+0x28]
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub edi, edx
        je public_6f7a257
        public_6f7a247 : nop
        push ebp
        push esi
        call public_6f31000
        add esp, 8
        add esi, 0x44
        dec edi
        jne public_6f7a247
        public_6f7a257 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+8]
        cmp ebx, eax
        je public_6f7a274
        public_6f7a262 : nop
        mov edi, ebx
        add ebx, 0x44
        cmp ebx, eax
        mov ecx, 0x11
        mov esi, ebp
        rep movsd
        jne public_6f7a262
        public_6f7a274 : nop
        mov ecx, dword ptr ds : [edx+8]
        mov eax, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        add ecx, eax
        pop ebp
        mov dword ptr ds : [edx+8], ecx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6f7a28a : nop
        test edi, edi
        jbe public_6f7a30d
        mov eax, edi
        imul eax, 0x44
        mov edi, esi
        sub edi, eax
        cmp edi, esi
        mov ebp, esi
        mov dword ptr ss : [esp+0x20], eax
        je public_6f7a2bd
        public_6f7a2a5 : nop
        push edi
        push ebp
        call public_6f31000
        add edi, 0x44
        add esp, 8
        add ebp, 0x44
        cmp edi, esi
        jne public_6f7a2a5
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f7a2bd : nop
        mov edx, dword ptr ds : [ecx+8]
        mov ebp, dword ptr ss : [esp+0x20]
        mov eax, edx
        sub eax, ebp
        cmp ebx, eax
        je public_6f7a2e9
        lea esp, ss:[esp]
        public_6f7a2d0 : nop
        sub eax, 0x44
        sub edx, 0x44
        cmp eax, ebx
        mov ecx, 0x11
        mov esi, eax
        mov edi, edx
        rep movsd
        jne public_6f7a2d0
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f7a2e9 : nop
        lea eax, ds:[ebx+ebp]
        cmp ebx, eax
        je public_6f7a30a
        mov edx, dword ptr ss : [esp+0x28]
        public_6f7a2f4 : nop
        mov edi, ebx
        add ebx, 0x44
        cmp ebx, eax
        mov ecx, 0x11
        mov esi, edx
        rep movsd
        jne public_6f7a2f4
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f7a30a : nop
        add dword ptr ds : [ecx+8], ebp
        public_6f7a30d : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6f7a050)
    }
}

#undef public_6f7a0a2
#undef public_6f7a0a4
#undef public_6f7a0ac
#undef public_6f7a0bf
#undef public_6f7a0cc
#undef public_6f7a0f0
#undef public_6f7a108
#undef public_6f7a112
#undef public_6f7a132
#undef public_6f7a14a
#undef public_6f7a150
#undef public_6f7a163
#undef public_6f7a19f
#undef public_6f7a1cc
#undef public_6f7a206
#undef public_6f7a210
#undef public_6f7a227
#undef public_6f7a247
#undef public_6f7a257
#undef public_6f7a262
#undef public_6f7a274
#undef public_6f7a28a
#undef public_6f7a2a5
#undef public_6f7a2bd
#undef public_6f7a2d0
#undef public_6f7a2e9
#undef public_6f7a2f4
#undef public_6f7a30a
#undef public_6f7a30d
