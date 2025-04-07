#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633f080);
CLANG_FORWARD_PROC_SYMBOL(public_633f390);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_633f0d8 _public_633f0d8
#define public_633f0da _public_633f0da
#define public_633f0e2 _public_633f0e2
#define public_633f0f7 _public_633f0f7
#define public_633f104 _public_633f104
#define public_633f124 _public_633f124
#define public_633f13b _public_633f13b
#define public_633f14a _public_633f14a
#define public_633f156 _public_633f156
#define public_633f16d _public_633f16d
#define public_633f175 _public_633f175
#define public_633f197 _public_633f197
#define public_633f1ae _public_633f1ae
#define public_633f1bd _public_633f1bd
#define public_633f1e7 _public_633f1e7
#define public_633f1ff _public_633f1ff
#define public_633f219 _public_633f219
#define public_633f253 _public_633f253
#define public_633f26a _public_633f26a
#define public_633f279 _public_633f279
#define public_633f2a0 _public_633f2a0
#define public_633f2b3 _public_633f2b3
#define public_633f2bb _public_633f2bb
#define public_633f2c2 _public_633f2c2
#define public_633f2d4 _public_633f2d4
#define public_633f2ea _public_633f2ea
#define public_633f308 _public_633f308
#define public_633f31b _public_633f31b
#define public_633f32a _public_633f32a
#define public_633f340 _public_633f340
#define public_633f358 _public_633f358
#define public_633f363 _public_633f363
#define public_633f375 _public_633f375
#define public_633f37c _public_633f37c

PROC_DECLARE(0x633f080, internal_633f080, public_633f080);
extern "C" NAKED register_t __cdecl internal_633f080()
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
        mov ebx, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, ebx
        mov eax, 0xEA0EA0EB
        imul ecx
        add edx, ecx
        sar edx, 8
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, esi
        mov dword ptr ss : [esp+0x10], edi
        jae public_633f219
        mov ebp, dword ptr ds : [edi+4]
        test ebp, ebp
        je public_633f0d8
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0xEA0EA0EB
        imul ecx
        add edx, ecx
        sar edx, 8
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp esi, edx
        mov ecx, edx
        jb public_633f0da
        public_633f0d8 : nop
        mov ecx, esi
        public_633f0da : nop
        test ebp, ebp
        jne public_633f0e2
        xor edx, edx
        jmp public_633f0f7
        public_633f0e2 : nop
        sub ebx, ebp
        mov eax, 0xEA0EA0EB
        imul ebx
        add edx, ebx
        sar edx, 8
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_633f0f7 : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_633f104
        xor eax, eax
        public_633f104 : nop
        imul eax, 0x118
        push eax
        call public_6391d9c
        mov ebx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x1C], eax
        mov edx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ebx
        je public_633f14a
        public_633f124 : nop
        test edx, edx
        je public_633f13b
        mov ecx, 0x46
        mov esi, eax
        mov edi, edx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_633f13b : nop
        add eax, 0x118
        add edx, 0x118
        cmp eax, ebx
        jne public_633f124
        public_633f14a : nop
        test esi, esi
        mov eax, edx
        jbe public_633f175
        mov ebp, dword ptr ss : [esp+0x28]
        mov ebx, esi
        public_633f156 : nop
        test eax, eax
        je public_633f16d
        mov ecx, 0x46
        mov esi, ebp
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_633f16d : nop
        add eax, 0x118
        dec ebx
        jne public_633f156
        public_633f175 : nop
        mov ebp, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, esi
        imul ecx, 0x118
        cmp eax, ebp
        lea ebx, ds:[ecx+edx]
        je public_633f1bd
        mov eax, ebx
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        sub eax, edx
        add eax, ecx
        public_633f197 : nop
        test ebx, ebx
        je public_633f1ae
        mov ecx, 0x46
        mov esi, eax
        mov edi, ebx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_633f1ae : nop
        add eax, 0x118
        add ebx, 0x118
        cmp eax, ebp
        jne public_633f197
        public_633f1bd : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x1C]
        imul eax, 0x118
        add eax, ebx
        mov dword ptr ds : [edi+0xC], eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        test eax, eax
        jne public_633f1e7
        xor edx, edx
        jmp public_633f1ff
        public_633f1e7 : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0xEA0EA0EB
        imul ecx
        add edx, ecx
        sar edx, 8
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_633f1ff : nop
        add edx, esi
        imul edx, 0x118
        add edx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_633f219 : nop
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0xEA0EA0EB
        imul ecx
        add edx, ecx
        sar edx, 8
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edx, esi
        jae public_633f2ea
        mov ecx, esi
        imul ecx, 0x118
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x20], ecx
        lea eax, ds:[ecx+ebp]
        je public_633f279
        mov edx, eax
        sub edx, ecx
        public_633f253 : nop
        test eax, eax
        je public_633f26a
        mov ecx, 0x46
        mov esi, edx
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_633f26a : nop
        add edx, 0x118
        add eax, 0x118
        cmp edx, ebx
        jne public_633f253
        public_633f279 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0xEA0EA0EB
        imul ecx
        add edx, ecx
        sar edx, 8
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        sub esi, edx
        mov eax, ebx
        mov ebx, dword ptr ss : [esp+0x28]
        je public_633f2bb
        mov edx, esi
        nop 
        public_633f2a0 : nop
        test eax, eax
        je public_633f2b3
        mov ecx, 0x46
        mov esi, ebx
        mov edi, eax
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        public_633f2b3 : nop
        add eax, 0x118
        dec edx
        jne public_633f2a0
        public_633f2bb : nop
        mov esi, dword ptr ds : [edi+8]
        cmp ebp, esi
        je public_633f2d4
        public_633f2c2 : nop
        push ebx
        mov ecx, ebp
        call public_633f390
        add ebp, 0x118
        cmp ebp, esi
        jne public_633f2c2
        public_633f2d4 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ss : [esp+0x20]
        add eax, ecx
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_633f2ea : nop
        test esi, esi
        jbe public_633f37c
        mov edi, esi
        imul edi, 0x118
        mov eax, ebx
        sub eax, edi
        cmp eax, ebx
        mov edx, ebx
        mov dword ptr ss : [esp+0x20], edi
        je public_633f32a
        public_633f308 : nop
        test edx, edx
        je public_633f31b
        mov ecx, 0x46
        mov esi, eax
        mov edi, edx
        rep movsd
        mov edi, dword ptr ss : [esp+0x20]
        public_633f31b : nop
        add eax, 0x118
        add edx, 0x118
        cmp eax, ebx
        jne public_633f308
        public_633f32a : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [edx+8]
        mov esi, ebx
        sub esi, edi
        cmp ebp, esi
        je public_633f358
        lea esp, ss:[esp]
        public_633f340 : nop
        sub esi, 0x118
        sub ebx, 0x118
        push esi
        mov ecx, ebx
        call public_633f390
        cmp esi, ebp
        jne public_633f340
        public_633f358 : nop
        lea esi, ds:[edi+ebp]
        cmp ebp, esi
        je public_633f375
        mov ebx, dword ptr ss : [esp+0x28]
        public_633f363 : nop
        push ebx
        mov ecx, ebp
        call public_633f390
        add ebp, 0x118
        cmp ebp, esi
        jne public_633f363
        public_633f375 : nop
        mov eax, dword ptr ss : [esp+0x10]
        add dword ptr ds : [eax+8], edi
        public_633f37c : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x633f080)
    }
}

#undef public_633f0d8
#undef public_633f0da
#undef public_633f0e2
#undef public_633f0f7
#undef public_633f104
#undef public_633f124
#undef public_633f13b
#undef public_633f14a
#undef public_633f156
#undef public_633f16d
#undef public_633f175
#undef public_633f197
#undef public_633f1ae
#undef public_633f1bd
#undef public_633f1e7
#undef public_633f1ff
#undef public_633f219
#undef public_633f253
#undef public_633f26a
#undef public_633f279
#undef public_633f2a0
#undef public_633f2b3
#undef public_633f2bb
#undef public_633f2c2
#undef public_633f2d4
#undef public_633f2ea
#undef public_633f308
#undef public_633f31b
#undef public_633f32a
#undef public_633f340
#undef public_633f358
#undef public_633f363
#undef public_633f375
#undef public_633f37c
