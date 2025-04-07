#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac2690);
CLANG_FORWARD_PROC_SYMBOL(public_6ac2870);
CLANG_FORWARD_PROC_SYMBOL(public_6ac30a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3170);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3450);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3490);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3500);
CLANG_FORWARD_PROC_SYMBOL(public_6ac35c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3b80);

#define public_6ac26f4 _public_6ac26f4
#define public_6ac27da _public_6ac27da
#define public_6ac2827 _public_6ac2827
#define public_6ac2839 _public_6ac2839
#define public_6ac2845 _public_6ac2845
#define public_6ac2854 _public_6ac2854
#define public_6ac2858 _public_6ac2858

PROC_DECLARE(0x6ac2690, internal_6ac2690, public_6ac2690);
extern "C" NAKED register_t __cdecl internal_6ac2690()
{
    __asm
    {
        sub esp, 0x11C
        mov eax, dword ptr ss : [esp+0x128]
        push ebx
        mov ebx, dword ptr ss : [esp+0x128]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x130]
        xor ecx, ecx
        mov esi, 1
        mov edx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], ecx
        lea ebp, ds:[ebx+edx*4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x20], edx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [edi+8]
        cmp eax, ecx
        jle public_6ac2845
        cmp eax, 3
        jg public_6ac2845
        mov dword ptr ss : [esp+0x14], ecx
        public_6ac26f4 : nop
        test esi, esi
        je public_6ac2858
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        jne public_6ac2839
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x28], ecx
        mov edx, dword ptr ds : [edi+0x10]
        push edx
        push ebx
        push 5
        push eax
        call public_6ac2870
        cmp dword ptr ds : [edi+8], 1
        je public_6ac27da
        push edi
        push ebx
        call public_6ac3450
        test eax, eax
        jne public_6ac27da
        lea ecx, ss:[esp+0x2C]
        push edi
        push ecx
        push ebx
        push ebx
        call public_6ac3490
        test eax, eax
        je public_6ac2854
        mov esi, dword ptr ss : [esp+0x138]
        lea edx, ss:[esp+0x2C]
        push edi
        lea eax, ss:[esp+0x30]
        push edx
        lea ecx, ds:[esi+0x104]
        push eax
        push ecx
        call public_6ac3170
        test eax, eax
        je public_6ac2854
        lea edx, ss:[esp+0x2C]
        push edi
        push edx
        lea eax, ss:[esp+0x34]
        push ebx
        push eax
        call public_6ac30a0
        test eax, eax
        je public_6ac2854
        lea ecx, ss:[esp+0x2C]
        push edi
        add esi, 4
        push ecx
        lea edx, ss:[esp+0x34]
        push esi
        push edx
        call public_6ac30a0
        test eax, eax
        je public_6ac2854
        push edi
        lea eax, ss:[esp+0x30]
        push ebp
        push eax
        mov esi, 1
        call public_6ac3b80
        test eax, eax
        je public_6ac2827
        push edi
        push ebp
        push ebp
        push ebx
        call public_6ac3490
        mov esi, eax
        neg esi
        sbb esi, esi
        mov dword ptr ss : [esp+0x10], 1
        neg esi
        jmp public_6ac2827
        public_6ac27da : nop
        mov esi, dword ptr ss : [esp+0x138]
        lea ecx, ss:[esp+0x2C]
        push edi
        push ecx
        lea edx, ds:[esi+4]
        push edx
        push ebx
        push ebx
        call public_6ac3500
        test eax, eax
        je public_6ac2854
        lea eax, ss:[esp+0x2C]
        push edi
        add esi, 0x104
        push eax
        lea ecx, ss:[esp+0x34]
        push esi
        push ecx
        push ebx
        call public_6ac3500
        test eax, eax
        je public_6ac2854
        push edi
        lea edx, ss:[esp+0x30]
        push ebp
        push edx
        mov esi, 1
        call public_6ac35c0
        mov dword ptr ss : [esp+0x10], eax
        public_6ac2827 : nop
        mov eax, dword ptr ss : [esp+0x14]
        inc eax
        cmp eax, 0x64
        mov dword ptr ss : [esp+0x14], eax
        jl public_6ac26f4
        public_6ac2839 : nop
        test esi, esi
        je public_6ac2858
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        jne public_6ac2858
        public_6ac2845 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x11C
        ret 0xC
        public_6ac2854 : nop
        xor esi, esi
        jmp public_6ac2827
        public_6ac2858 : nop
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x11C
        ret 0xC
        UNREACHABLE_TRAP(0x6ac2690)
    }
}

#undef public_6ac26f4
#undef public_6ac27da
#undef public_6ac2827
#undef public_6ac2839
#undef public_6ac2845
#undef public_6ac2854
#undef public_6ac2858
