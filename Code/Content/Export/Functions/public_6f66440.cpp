#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24610);
CLANG_FORWARD_PROC_SYMBOL(public_6f66440);
CLANG_FORWARD_PROC_SYMBOL(public_6f6aff0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6b5a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f20);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);

#define public_6f66474 _public_6f66474
#define public_6f66486 _public_6f66486
#define public_6f664a7 _public_6f664a7
#define public_6f664ad _public_6f664ad
#define public_6f664c4 _public_6f664c4
#define public_6f664f5 _public_6f664f5
#define public_6f66518 _public_6f66518
#define public_6f66520 _public_6f66520
#define public_6f6652d _public_6f6652d
#define public_6f6652f _public_6f6652f
#define public_6f6653e _public_6f6653e
#define public_6f66550 _public_6f66550
#define public_6f6658a _public_6f6658a
#define public_6f66592 _public_6f66592
#define public_6f66596 _public_6f66596
#define public_6f6659a _public_6f6659a
#define public_6f665cc _public_6f665cc
#define public_6f665d5 _public_6f665d5
#define public_6f665f0 _public_6f665f0
#define public_6f66600 _public_6f66600
#define public_6f6661f _public_6f6661f
#define public_6f66625 _public_6f66625
#define public_6f66632 _public_6f66632
#define public_6f66634 _public_6f66634
#define public_6f6663f _public_6f6663f
#define public_6f66645 _public_6f66645
#define public_6f66660 _public_6f66660
#define public_6f6667a _public_6f6667a
#define public_6f66687 _public_6f66687

PROC_DECLARE(0x6f66440, internal_6f66440, public_6f66440);
extern "C" NAKED register_t __cdecl internal_6f66440()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        cmp ebp, 0xFFFFFFFF
        push esi
        push edi
        je public_6f66687
        call public_6f75f20
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], ecx
        call public_6f75f20
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [eax+4]
        mov edi, dword ptr ss : [esp+0x1C]
        je public_6f664c4
        public_6f66474 : nop
        mov eax, dword ptr ds : [ecx+0xF0]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        lea ebx, ds:[ecx+0xF0]
        je public_6f664ad
        public_6f66486 : nop
        mov eax, dword ptr ds : [esi+8]
        cmp dword ptr ds : [eax+0x154], ebp
        jne public_6f664a7
        lea edx, ss:[esp+0x20]
        push edx
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [edi+8]
        push 1
        push eax
        mov ecx, edi
        call public_6f937c0
        public_6f664a7 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ebx]
        jne public_6f66486
        public_6f664ad : nop
        lea ecx, ss:[esp+0x10]
        call public_6f24610
        call public_6f75f20
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [eax+4]
        jne public_6f66474
        public_6f664c4 : nop
        mov edx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        mov eax, edx
        sub eax, edi
        sar eax, 2
        cmp eax, 0x10
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ss : [esp+0x14], edi
        jg public_6f6653e
        cmp edi, edx
        je public_6f66687
        lea esi, ds:[edi+4]
        cmp esi, edx
        je public_6f66687
        mov ebx, dword ptr ss : [esp+0x20]
        public_6f664f5 : nop
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi]
        mov ebp, dword ptr ds : [ecx+0x14C]
        cmp ebp, dword ptr ds : [eax+0x14C]
        jl public_6f66518
        push ebx
        push ecx
        push esi
        call public_6f6b0f0
        mov edx, dword ptr ss : [esp+0x2C]
        add esp, 0xC
        jmp public_6f6652f
        public_6f66518 : nop
        cmp edi, esi
        mov eax, esi
        je public_6f6652d
        mov edi, edi
        public_6f66520 : nop
        mov ebp, dword ptr ds : [eax-4]
        sub eax, 4
        cmp eax, edi
        mov dword ptr ds : [eax+4], ebp
        jne public_6f66520
        public_6f6652d : nop
        mov dword ptr ds : [edi], ecx
        public_6f6652f : nop
        add esi, 4
        cmp esi, edx
        jne public_6f664f5
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        public_6f6653e : nop
        cmp eax, 0x10
        mov ebp, dword ptr ss : [esp+0x20]
        mov ebx, edx
        mov esi, edi
        jle public_6f665f0
        nop 
        public_6f66550 : nop
        mov edi, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [edi+0x14C]
        mov eax, ebx
        sub eax, esi
        sar eax, 2
        cdq 
        sub eax, edx
        sar eax, 1
        mov edx, dword ptr ds : [esi+eax*4]
        mov eax, dword ptr ds : [ebx-4]
        mov ebp, dword ptr ds : [eax+0x14C]
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ds : [edx+0x14C]
        cmp ecx, edx
        jge public_6f6658a
        cmp edx, ebp
        jl public_6f66596
        cmp ecx, ebp
        jl public_6f6659a
        mov eax, edi
        jmp public_6f6659a
        public_6f6658a : nop
        cmp ecx, ebp
        jge public_6f66592
        mov eax, edi
        jmp public_6f6659a
        public_6f66592 : nop
        cmp edx, ebp
        jl public_6f6659a
        public_6f66596 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        public_6f6659a : nop
        mov ebp, dword ptr ss : [esp+0x20]
        push ebp
        push eax
        push ebx
        push esi
        call public_6f6b5a0
        mov edi, eax
        mov ecx, ebx
        mov edx, edi
        add esp, 0x10
        sub ecx, edi
        sub edx, esi
        and ecx, 0xFFFFFFFC
        and edx, 0xFFFFFFFC
        cmp ecx, edx
        push 0
        push ebp
        jg public_6f665cc
        push ebx
        push edi
        call public_6f6aff0
        mov ebx, edi
        jmp public_6f665d5
        public_6f665cc : nop
        push edi
        push esi
        call public_6f6aff0
        mov esi, edi
        public_6f665d5 : nop
        mov eax, ebx
        sub eax, esi
        and eax, 0xFFFFFFFC
        add esp, 0x10
        cmp eax, 0x40
        jg public_6f66550
        mov edi, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x20]
        public_6f665f0 : nop
        lea ebx, ds:[edi+0x40]
        cmp edi, ebx
        je public_6f6663f
        lea esi, ds:[edi+4]
        cmp esi, ebx
        je public_6f6663f
        mov edi, edi
        public_6f66600 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [ecx+0x14C]
        cmp eax, dword ptr ds : [edx+0x14C]
        jl public_6f6661f
        push ebp
        push ecx
        push esi
        call public_6f6b0f0
        add esp, 0xC
        jmp public_6f66634
        public_6f6661f : nop
        cmp edi, esi
        mov eax, esi
        je public_6f66632
        public_6f66625 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        cmp eax, edi
        mov dword ptr ds : [eax+4], edx
        jne public_6f66625
        public_6f66632 : nop
        mov dword ptr ds : [edi], ecx
        public_6f66634 : nop
        add esi, 4
        cmp esi, ebx
        jne public_6f66600
        mov edx, dword ptr ss : [esp+0x20]
        public_6f6663f : nop
        mov edi, ebx
        cmp edi, edx
        je public_6f66687
        public_6f66645 : nop
        mov esi, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edi-4]
        mov ebx, dword ptr ds : [esi+0x14C]
        cmp ebx, dword ptr ds : [ecx+0x14C]
        lea eax, ds:[edi-4]
        mov edx, edi
        jge public_6f6667a
        lea ecx, ds:[ecx]
        public_6f66660 : nop
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax-4]
        mov ebx, dword ptr ds : [esi+0x14C]
        mov ebp, dword ptr ds : [ecx+0x14C]
        mov edx, eax
        sub eax, 4
        cmp ebx, ebp
        jl public_6f66660
        public_6f6667a : nop
        mov eax, dword ptr ss : [esp+0x20]
        add edi, 4
        cmp edi, eax
        mov dword ptr ds : [edx], esi
        jne public_6f66645
        public_6f66687 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f66440)
    }
}

#undef public_6f66474
#undef public_6f66486
#undef public_6f664a7
#undef public_6f664ad
#undef public_6f664c4
#undef public_6f664f5
#undef public_6f66518
#undef public_6f66520
#undef public_6f6652d
#undef public_6f6652f
#undef public_6f6653e
#undef public_6f66550
#undef public_6f6658a
#undef public_6f66592
#undef public_6f66596
#undef public_6f6659a
#undef public_6f665cc
#undef public_6f665d5
#undef public_6f665f0
#undef public_6f66600
#undef public_6f6661f
#undef public_6f66625
#undef public_6f66632
#undef public_6f66634
#undef public_6f6663f
#undef public_6f66645
#undef public_6f66660
#undef public_6f6667a
#undef public_6f66687
