#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10001cf0);
CLANG_FORWARD_PROC_SYMBOL(public_10002350);
CLANG_FORWARD_PROC_SYMBOL(public_10008140);

#define public_10002488 _public_10002488
#define public_100024a0 _public_100024a0
#define public_100024b9 _public_100024b9
#define public_100024cc _public_100024cc
#define public_100024ce _public_100024ce
#define public_100024f3 _public_100024f3
#define public_10002512 _public_10002512
#define public_10002514 _public_10002514
#define public_1000253b _public_1000253b
#define public_10002541 _public_10002541
#define public_10002557 _public_10002557
#define public_10002559 _public_10002559
#define public_10002598 _public_10002598

PROC_DECLARE(0x10002470, internal_10002470, public_10002470);
extern "C" NAKED register_t __cdecl internal_10002470()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ebx+0xC]
        push esi
        mov esi, 0xFFFF
        add eax, 0xFFFFFFFB
        cmp eax, esi
        push edi
        jae public_10002488
        mov esi, eax
        public_10002488 : nop
        mov eax, dword ptr ds : [ebx+0x6C]
        cmp eax, 1
        ja public_100024a0
        call public_10002350
        mov eax, dword ptr ds : [ebx+0x6C]
        test eax, eax
        je public_10002541
        public_100024a0 : nop
        add dword ptr ds : [ebx+0x64], eax
        mov ecx, dword ptr ds : [ebx+0x54]
        mov edx, dword ptr ds : [ebx+0x64]
        mov dword ptr ds : [ebx+0x6C], 0
        lea eax, ds:[ecx+esi]
        je public_100024b9
        cmp edx, eax
        jb public_100024f3
        public_100024b9 : nop
        sub edx, eax
        test ecx, ecx
        mov dword ptr ds : [ebx+0x6C], edx
        mov dword ptr ds : [ebx+0x64], eax
        jl public_100024cc
        mov edx, dword ptr ds : [ebx+0x30]
        add edx, ecx
        jmp public_100024ce
        public_100024cc : nop
        xor edx, edx
        public_100024ce : nop
        push 0
        sub eax, ecx
        push eax
        push edx
        push ebx
        call public_10008140
        mov eax, dword ptr ds : [ebx+0x64]
        mov dword ptr ds : [ebx+0x54], eax
        mov eax, dword ptr ds : [ebx]
        add esp, 0x10
        call public_10001cf0
        mov ecx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_1000253b
        public_100024f3 : nop
        mov ecx, dword ptr ds : [ebx+0x54]
        mov edx, dword ptr ds : [ebx+0x64]
        mov eax, dword ptr ds : [ebx+0x24]
        sub edx, ecx
        sub eax, 0x106
        cmp edx, eax
        jb public_10002488
        test ecx, ecx
        jl public_10002512
        mov eax, dword ptr ds : [ebx+0x30]
        add eax, ecx
        jmp public_10002514
        public_10002512 : nop
        xor eax, eax
        public_10002514 : nop
        push 0
        push edx
        push eax
        push ebx
        call public_10008140
        mov ecx, dword ptr ds : [ebx+0x64]
        mov eax, dword ptr ds : [ebx]
        add esp, 0x10
        mov dword ptr ds : [ebx+0x54], ecx
        call public_10001cf0
        mov edx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [edx+0x10]
        test eax, eax
        jne public_10002488
        public_1000253b : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 
        public_10002541 : nop
        mov edi, dword ptr ss : [esp+0x14]
        test edi, edi
        je public_1000253b
        mov esi, dword ptr ds : [ebx+0x54]
        test esi, esi
        jl public_10002557
        mov eax, dword ptr ds : [ebx+0x30]
        add eax, esi
        jmp public_10002559
        public_10002557 : nop
        xor eax, eax
        public_10002559 : nop
        mov edx, dword ptr ds : [ebx+0x64]
        xor ecx, ecx
        cmp edi, 4
        sete cl
        sub edx, esi
        push ecx
        push edx
        push eax
        push ebx
        call public_10008140
        mov eax, dword ptr ds : [ebx+0x64]
        mov dword ptr ds : [ebx+0x54], eax
        mov eax, dword ptr ds : [ebx]
        add esp, 0x10
        call public_10001cf0
        mov ecx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        jne public_10002598
        xor eax, eax
        cmp edi, 4
        setne al
        pop edi
        pop esi
        pop ebx
        dec eax
        and eax, 2
        ret 
        public_10002598 : nop
        xor eax, eax
        cmp edi, 4
        sete al
        pop edi
        pop esi
        pop ebx
        lea eax, ds:[eax+eax+1]
        ret 
        UNREACHABLE_TRAP(0x10002470)
    }
}

#undef public_10002488
#undef public_100024a0
#undef public_100024b9
#undef public_100024cc
#undef public_100024ce
#undef public_100024f3
#undef public_10002512
#undef public_10002514
#undef public_1000253b
#undef public_10002541
#undef public_10002557
#undef public_10002559
#undef public_10002598
