#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f244e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);

#define public_6f244fc _public_6f244fc
#define public_6f24504 _public_6f24504
#define public_6f2450f _public_6f2450f
#define public_6f24517 _public_6f24517
#define public_6f24522 _public_6f24522
#define public_6f24530 _public_6f24530
#define public_6f2454a _public_6f2454a
#define public_6f24563 _public_6f24563
#define public_6f2456b _public_6f2456b
#define public_6f24573 _public_6f24573
#define public_6f2457b _public_6f2457b
#define public_6f24583 _public_6f24583
#define public_6f24593 _public_6f24593
#define public_6f2459b _public_6f2459b
#define public_6f245a2 _public_6f245a2
#define public_6f245b0 _public_6f245b0
#define public_6f245c0 _public_6f245c0
#define public_6f245c8 _public_6f245c8
#define public_6f245d2 _public_6f245d2
#define public_6f245ec _public_6f245ec
#define public_6f24605 _public_6f24605
#define public_6f24619 _public_6f24619
#define public_6f24621 _public_6f24621
#define public_6f24627 _public_6f24627
#define public_6f24646 _public_6f24646
#define public_6f2464e _public_6f2464e
#define public_6f24658 _public_6f24658
#define public_6f2465e _public_6f2465e

PROC_DECLARE(0x6f244e0, internal_6f244e0, public_6f244e0);
extern "C" NAKED register_t __cdecl internal_6f244e0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov ebx, ecx
        cmp ebx, esi
        push edi
        je public_6f2465e
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6f244fc
        xor edi, edi
        jmp public_6f24504
        public_6f244fc : nop
        mov edi, dword ptr ds : [esi+8]
        sub edi, eax
        sar edi, 2
        public_6f24504 : nop
        mov edx, dword ptr ds : [ebx+4]
        test edx, edx
        jne public_6f2450f
        xor ecx, ecx
        jmp public_6f24517
        public_6f2450f : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, edx
        sar ecx, 2
        public_6f24517 : nop
        cmp edi, ecx
        ja public_6f24563
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        je public_6f24530
        public_6f24522 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], edi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_6f24522
        public_6f24530 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6f2454a
        mov eax, dword ptr ds : [ebx+4]
        xor esi, esi
        lea ecx, ds:[eax+esi*4]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+8], ecx
        mov eax, ebx
        pop ebx
        ret 4
        public_6f2454a : nop
        mov esi, dword ptr ds : [esi+8]
        sub esi, eax
        mov eax, dword ptr ds : [ebx+4]
        sar esi, 2
        lea ecx, ds:[eax+esi*4]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+8], ecx
        mov eax, ebx
        pop ebx
        ret 4
        public_6f24563 : nop
        test eax, eax
        jne public_6f2456b
        xor edi, edi
        jmp public_6f24573
        public_6f2456b : nop
        mov edi, dword ptr ds : [esi+8]
        sub edi, eax
        sar edi, 2
        public_6f24573 : nop
        test edx, edx
        jne public_6f2457b
        xor ecx, ecx
        jmp public_6f24583
        public_6f2457b : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        sub ecx, edx
        sar ecx, 2
        public_6f24583 : nop
        cmp edi, ecx
        ja public_6f24605
        test edx, edx
        jne public_6f24593
        xor ecx, ecx
        jmp public_6f2459b
        public_6f24593 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, edx
        sar ecx, 2
        public_6f2459b : nop
        lea ecx, ds:[eax+ecx*4]
        cmp eax, ecx
        je public_6f245b0
        public_6f245a2 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], edi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_6f245a2
        public_6f245b0 : nop
        mov edi, dword ptr ds : [esi+8]
        cmp ecx, edi
        mov edx, dword ptr ds : [ebx+8]
        mov eax, ecx
        je public_6f245d2
        lea esp, ss:[esp]
        public_6f245c0 : nop
        test edx, edx
        je public_6f245c8
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        public_6f245c8 : nop
        add eax, 4
        add edx, 4
        cmp eax, edi
        jne public_6f245c0
        public_6f245d2 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6f245ec
        mov edx, dword ptr ds : [ebx+4]
        xor esi, esi
        lea eax, ds:[edx+esi*4]
        pop edi
        mov dword ptr ds : [ebx+8], eax
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
        public_6f245ec : nop
        mov esi, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ebx+4]
        sub esi, eax
        sar esi, 2
        lea eax, ds:[edx+esi*4]
        pop edi
        mov dword ptr ds : [ebx+8], eax
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
        public_6f24605 : nop
        push edx
        call public_6f57e26
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_6f24619
        xor eax, eax
        jmp public_6f24621
        public_6f24619 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_6f24621 : nop
        test eax, eax
        jge public_6f24627
        xor eax, eax
        public_6f24627 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6f57e9c
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [esi+8]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edx
        je public_6f24658
        public_6f24646 : nop
        test ecx, ecx
        je public_6f2464e
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        public_6f2464e : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6f24646
        public_6f24658 : nop
        mov dword ptr ds : [ebx+0xC], ecx
        mov dword ptr ds : [ebx+8], ecx
        public_6f2465e : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f244e0)
    }
}

#undef public_6f244fc
#undef public_6f24504
#undef public_6f2450f
#undef public_6f24517
#undef public_6f24522
#undef public_6f24530
#undef public_6f2454a
#undef public_6f24563
#undef public_6f2456b
#undef public_6f24573
#undef public_6f2457b
#undef public_6f24583
#undef public_6f24593
#undef public_6f2459b
#undef public_6f245a2
#undef public_6f245b0
#undef public_6f245c0
#undef public_6f245c8
#undef public_6f245d2
#undef public_6f245ec
#undef public_6f24605
#undef public_6f24619
#undef public_6f24621
#undef public_6f24627
#undef public_6f24646
#undef public_6f2464e
#undef public_6f24658
#undef public_6f2465e
