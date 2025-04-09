#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4363b0);
CLANG_FORWARD_PROC_SYMBOL(public_436bb0);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_578220);
CLANG_FORWARD_PROC_SYMBOL(public_5995f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_578240 _public_578240
#define public_57826b _public_57826b
#define public_5782a0 _public_5782a0
#define public_5782a9 _public_5782a9
#define public_5782af _public_5782af
#define public_5782ca _public_5782ca
#define public_5782fd _public_5782fd
#define public_578310 _public_578310
#define public_578322 _public_578322
#define public_578335 _public_578335
#define public_578348 _public_578348
#define public_57834d _public_57834d
#define public_57835e _public_57835e
#define public_5783e0 _public_5783e0
#define public_578421 _public_578421
#define public_578446 _public_578446
#define public_578460 _public_578460
#define public_578472 _public_578472
#define public_578480 _public_578480
#define public_578493 _public_578493
#define public_578496 _public_578496

PROC_DECLARE(0x578220, internal_578220, public_578220);
extern "C" NAKED register_t __cdecl internal_578220()
{
    __asm
    {
        sub esp, 0xC
        mov ecx, dword ptr ds : [public_67c258]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], eax
        je public_578496
        mov esi, dword ptr ss : [esp+0x20]
        nop 
        public_578240 : nop
        cmp esi, dword ptr ds : [eax+8]
        je public_57826b
        push 0
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_53ab20
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [public_67c258]
        jne public_578240
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0xC
        ret 
        public_57826b : nop
        lea esi, ds:[eax+8]
        test esi, esi
        je public_578496
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ds : [esi+0x18]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], edx
        mov ebp, 8
        je public_5782af
        mov edi, dword ptr ss : [esp+0x30]
        mov ebx, dword ptr ss : [esp+0x2C]
        lea ecx, ds:[ecx]
        public_5782a0 : nop
        cmp dword ptr ds : [eax], ebx
        jne public_5782a9
        cmp dword ptr ds : [eax+4], edi
        je public_5782fd
        public_5782a9 : nop
        add eax, ebp
        cmp eax, ecx
        jne public_5782a0
        public_5782af : nop
        mov ecx, dword ptr ds : [esi+0x14]
        add esi, 0x10
        test ecx, ecx
        je public_5782ca
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 3
        cmp eax, 2
        jae public_578496
        public_5782ca : nop
        test edx, edx
        je public_578496
        mov edi, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, edi
        sar eax, 3
        cmp eax, 1
        jae public_5783e0
        mov ecx, esi
        call public_5995f0
        cmp eax, 1
        jbe public_578348
        mov ecx, esi
        call public_5995f0
        mov ebx, eax
        jmp public_57834d
        public_5782fd : nop
        test edx, edx
        jne public_578335
        mov edx, dword ptr ds : [esi+0x18]
        add eax, 8
        cmp eax, edx
        je public_578322
        lea ecx, ds:[eax-8]
        mov edi, edi
        public_578310 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edi
        add eax, ebp
        add ecx, ebp
        cmp eax, edx
        jne public_578310
        public_578322 : nop
        mov eax, dword ptr ds : [esi+0x18]
        add eax, 0xFFFFFFF8
        pop edi
        mov dword ptr ds : [esi+0x18], eax
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 
        public_578335 : nop
        pop edi
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax+4], edx
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 
        public_578348 : nop
        mov ebx, 1
        public_57834d : nop
        mov ecx, esi
        call public_5995f0
        mov ebp, eax
        add ebp, ebx
        mov eax, ebp
        jns public_57835e
        xor eax, eax
        public_57835e : nop
        lea ecx, ds:[eax*8]
        push ecx
        call public_5b7e84
        mov edx, dword ptr ds : [esi+4]
        add esp, 4
        mov ebx, eax
        push ebx
        push edi
        push edx
        mov ecx, esi
        call public_4363b0
        lea ecx, ss:[esp+0x14]
        push ecx
        push 1
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x2C], eax
        call public_436bb0
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi+8]
        add edx, 8
        push edx
        push eax
        push edi
        mov ecx, esi
        call public_4363b0
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_53aaa0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        lea ecx, ds:[ebx+ebp*8]
        mov dword ptr ds : [esi+0xC], ecx
        add esp, 4
        mov ecx, esi
        call public_5995f0
        lea edx, ds:[ebx+eax*8+8]
        pop edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], edx
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0xC
        ret 
        public_5783e0 : nop
        mov eax, edi
        sub eax, edi
        sar eax, 3
        cmp eax, 1
        jae public_578446
        lea ecx, ds:[edi+8]
        push ecx
        push edi
        push edi
        mov ecx, esi
        call public_4363b0
        mov eax, dword ptr ds : [esi+8]
        mov ecx, eax
        lea edx, ss:[esp+0x14]
        push edx
        sub ecx, edi
        sar ecx, 3
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, esi
        call public_436bb0
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_578493
        public_578421 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], edx
        add eax, ebp
        cmp eax, ecx
        jne public_578421
        mov eax, dword ptr ds : [esi+8]
        add eax, ebp
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0xC
        ret 
        public_578446 : nop
        push edi
        push edi
        lea eax, ds:[edi-8]
        push eax
        mov ecx, esi
        call public_4363b0
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-8]
        cmp edi, eax
        je public_578472
        lea ecx, ds:[ecx]
        public_578460 : nop
        sub eax, ebp
        mov edx, dword ptr ds : [eax]
        sub ecx, ebp
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        jne public_578460
        public_578472 : nop
        lea ecx, ds:[edi+8]
        cmp edi, ecx
        mov eax, edi
        je public_578493
        nop 
        lea esp, ss:[esp]
        public_578480 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], edx
        add eax, ebp
        cmp eax, ecx
        jne public_578480
        public_578493 : nop
        add dword ptr ds : [esi+8], ebp
        public_578496 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x578220)
    }
}

#undef public_578240
#undef public_57826b
#undef public_5782a0
#undef public_5782a9
#undef public_5782af
#undef public_5782ca
#undef public_5782fd
#undef public_578310
#undef public_578322
#undef public_578335
#undef public_578348
#undef public_57834d
#undef public_57835e
#undef public_5783e0
#undef public_578421
#undef public_578446
#undef public_578460
#undef public_578472
#undef public_578480
#undef public_578493
#undef public_578496
