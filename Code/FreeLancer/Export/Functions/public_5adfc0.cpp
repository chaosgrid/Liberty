#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5686b0);
CLANG_FORWARD_PROC_SYMBOL(public_5a9ea0);
CLANG_FORWARD_PROC_SYMBOL(public_5adfc0);
CLANG_FORWARD_PROC_SYMBOL(public_5af3b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_5ae016 _public_5ae016
#define public_5ae018 _public_5ae018
#define public_5ae020 _public_5ae020
#define public_5ae035 _public_5ae035
#define public_5ae042 _public_5ae042
#define public_5ae066 _public_5ae066
#define public_5ae084 _public_5ae084
#define public_5ae090 _public_5ae090
#define public_5ae0b3 _public_5ae0b3
#define public_5ae0cf _public_5ae0cf
#define public_5ae0d3 _public_5ae0d3
#define public_5ae0e9 _public_5ae0e9
#define public_5ae0f3 _public_5ae0f3
#define public_5ae104 _public_5ae104
#define public_5ae12e _public_5ae12e
#define public_5ae146 _public_5ae146
#define public_5ae160 _public_5ae160
#define public_5ae19f _public_5ae19f
#define public_5ae1a3 _public_5ae1a3
#define public_5ae1bd _public_5ae1bd
#define public_5ae1e0 _public_5ae1e0
#define public_5ae1f3 _public_5ae1f3
#define public_5ae200 _public_5ae200
#define public_5ae212 _public_5ae212
#define public_5ae228 _public_5ae228
#define public_5ae242 _public_5ae242
#define public_5ae26c _public_5ae26c
#define public_5ae277 _public_5ae277
#define public_5ae293 _public_5ae293
#define public_5ae2a0 _public_5ae2a0
#define public_5ae2b6 _public_5ae2b6
#define public_5ae2b9 _public_5ae2b9

PROC_DECLARE(0x5adfc0, internal_5adfc0, public_5adfc0);
extern "C" NAKED register_t __cdecl internal_5adfc0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        push edi
        mov edi, dword ptr ds : [ecx+0xC]
        sub edi, esi
        mov eax, 0xD20D20D3
        imul edi
        add edx, edi
        sar edx, 7
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        mov dword ptr ss : [esp+0x10], ecx
        jae public_5ae160
        mov edi, dword ptr ds : [ecx+4]
        test edi, edi
        je public_5ae016
        mov ecx, esi
        sub ecx, edi
        mov eax, 0xD20D20D3
        imul ecx
        add edx, ecx
        sar edx, 7
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp ebp, edx
        mov ecx, edx
        jb public_5ae018
        public_5ae016 : nop
        mov ecx, ebp
        public_5ae018 : nop
        test edi, edi
        jne public_5ae020
        xor edx, edx
        jmp public_5ae035
        public_5ae020 : nop
        sub esi, edi
        mov eax, 0xD20D20D3
        imul esi
        add edx, esi
        sar edx, 7
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_5ae035 : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_5ae042
        xor eax, eax
        public_5ae042 : nop
        imul eax, 0x9C
        push eax
        call public_5b7e84
        mov edi, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_5ae084
        public_5ae066 : nop
        push esi
        push ebx
        call public_5af3b0
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x9C
        add esp, 8
        add ebx, 0x9C
        cmp esi, eax
        jne public_5ae066
        public_5ae084 : nop
        test ebp, ebp
        mov esi, ebx
        jbe public_5ae0b3
        mov dword ptr ss : [esp+0x24], ebp
        mov edi, edi
        public_5ae090 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        push esi
        call public_5af3b0
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x9C
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_5ae090
        mov eax, dword ptr ss : [esp+0x20]
        public_5ae0b3 : nop
        mov edx, ebp
        imul edx, 0x9C
        lea ecx, ds:[edx+ebx]
        mov ebx, dword ptr ds : [edi+8]
        cmp eax, ebx
        mov esi, eax
        je public_5ae0e9
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_5ae0d3
        public_5ae0cf : nop
        mov ecx, dword ptr ss : [esp+0x20]
        public_5ae0d3 : nop
        add ecx, esi
        push esi
        push ecx
        call public_5af3b0
        add esi, 0x9C
        add esp, 8
        cmp esi, ebx
        jne public_5ae0cf
        public_5ae0e9 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        je public_5ae104
        public_5ae0f3 : nop
        mov ecx, esi
        call public_5686b0
        add esi, 0x9C
        cmp esi, ebx
        jne public_5ae0f3
        public_5ae104 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x1C]
        imul eax, 0x9C
        add eax, esi
        mov dword ptr ds : [edi+0xC], eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        test eax, eax
        jne public_5ae12e
        xor edx, edx
        jmp public_5ae146
        public_5ae12e : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0xD20D20D3
        imul ecx
        add edx, ecx
        sar edx, 7
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_5ae146 : nop
        add edx, ebp
        imul edx, 0x9C
        add edx, esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_5ae160 : nop
        mov edi, dword ptr ss : [esp+0x20]
        mov ebx, esi
        sub ebx, edi
        mov eax, 0xD20D20D3
        imul ebx
        add edx, ebx
        sar edx, 7
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        jae public_5ae228
        mov eax, ebp
        imul eax, 0x9C
        mov dword ptr ss : [esp+0x24], eax
        add eax, edi
        cmp edi, esi
        mov ebx, edi
        je public_5ae1bd
        sub eax, edi
        mov dword ptr ss : [esp+0x20], eax
        jmp public_5ae1a3
        public_5ae19f : nop
        mov eax, dword ptr ss : [esp+0x20]
        public_5ae1a3 : nop
        add eax, ebx
        push ebx
        push eax
        call public_5af3b0
        add ebx, 0x9C
        add esp, 8
        cmp ebx, esi
        jne public_5ae19f
        mov ecx, dword ptr ss : [esp+0x10]
        public_5ae1bd : nop
        mov esi, dword ptr ds : [ecx+8]
        mov ebx, dword ptr ss : [esp+0x28]
        mov ecx, esi
        sub ecx, edi
        mov eax, 0xD20D20D3
        imul ecx
        add edx, ecx
        sar edx, 7
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub ebp, edx
        je public_5ae1f3
        nop 
        public_5ae1e0 : nop
        push ebx
        push esi
        call public_5af3b0
        add esp, 8
        add esi, 0x9C
        dec ebp
        jne public_5ae1e0
        public_5ae1f3 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [ebp+8]
        cmp edi, esi
        je public_5ae212
        mov edi, edi
        public_5ae200 : nop
        push ebx
        mov ecx, edi
        call public_5a9ea0
        add edi, 0x9C
        cmp edi, esi
        jne public_5ae200
        public_5ae212 : nop
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
        public_5ae228 : nop
        test ebp, ebp
        jbe public_5ae2b9
        imul ebp, 0x9C
        mov ebx, esi
        sub ebx, ebp
        cmp ebx, esi
        mov dword ptr ss : [esp+0x20], esi
        je public_5ae26c
        public_5ae242 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push ebx
        push eax
        call public_5af3b0
        mov edx, dword ptr ss : [esp+0x28]
        add edx, 0x9C
        add ebx, 0x9C
        add esp, 8
        cmp ebx, esi
        mov dword ptr ss : [esp+0x20], edx
        jne public_5ae242
        mov ecx, dword ptr ss : [esp+0x10]
        public_5ae26c : nop
        mov ebx, dword ptr ds : [ecx+8]
        mov esi, ebx
        sub esi, ebp
        cmp edi, esi
        je public_5ae293
        public_5ae277 : nop
        sub esi, 0x9C
        sub ebx, 0x9C
        push esi
        mov ecx, ebx
        call public_5a9ea0
        cmp esi, edi
        jne public_5ae277
        mov ecx, dword ptr ss : [esp+0x10]
        public_5ae293 : nop
        lea esi, ds:[edi+ebp]
        cmp edi, esi
        je public_5ae2b6
        mov ebx, dword ptr ss : [esp+0x28]
        mov edi, edi
        public_5ae2a0 : nop
        push ebx
        mov ecx, edi
        call public_5a9ea0
        add edi, 0x9C
        cmp edi, esi
        jne public_5ae2a0
        mov ecx, dword ptr ss : [esp+0x10]
        public_5ae2b6 : nop
        add dword ptr ds : [ecx+8], ebp
        public_5ae2b9 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x5adfc0)
    }
}

#undef public_5ae016
#undef public_5ae018
#undef public_5ae020
#undef public_5ae035
#undef public_5ae042
#undef public_5ae066
#undef public_5ae084
#undef public_5ae090
#undef public_5ae0b3
#undef public_5ae0cf
#undef public_5ae0d3
#undef public_5ae0e9
#undef public_5ae0f3
#undef public_5ae104
#undef public_5ae12e
#undef public_5ae146
#undef public_5ae160
#undef public_5ae19f
#undef public_5ae1a3
#undef public_5ae1bd
#undef public_5ae1e0
#undef public_5ae1f3
#undef public_5ae200
#undef public_5ae212
#undef public_5ae228
#undef public_5ae242
#undef public_5ae26c
#undef public_5ae277
#undef public_5ae293
#undef public_5ae2a0
#undef public_5ae2b6
#undef public_5ae2b9
