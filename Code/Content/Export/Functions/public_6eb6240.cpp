#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb4680);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6240);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6560);
CLANG_FORWARD_PROC_SYMBOL(public_6eb68a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb69d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6b50);
CLANG_FORWARD_PROC_SYMBOL(public_6f971e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eb6274 _public_6eb6274
#define public_6eb6276 _public_6eb6276
#define public_6eb627e _public_6eb627e
#define public_6eb6283 _public_6eb6283
#define public_6eb628f _public_6eb628f
#define public_6eb62b0 _public_6eb62b0
#define public_6eb62ce _public_6eb62ce
#define public_6eb62d8 _public_6eb62d8
#define public_6eb62fb _public_6eb62fb
#define public_6eb6314 _public_6eb6314
#define public_6eb6318 _public_6eb6318
#define public_6eb632e _public_6eb632e
#define public_6eb6338 _public_6eb6338
#define public_6eb6349 _public_6eb6349
#define public_6eb6385 _public_6eb6385
#define public_6eb63a4 _public_6eb63a4
#define public_6eb63d3 _public_6eb63d3
#define public_6eb63d7 _public_6eb63d7
#define public_6eb63f5 _public_6eb63f5
#define public_6eb6407 _public_6eb6407
#define public_6eb6422 _public_6eb6422
#define public_6eb6430 _public_6eb6430
#define public_6eb644a _public_6eb644a
#define public_6eb645c _public_6eb645c
#define public_6eb6477 _public_6eb6477
#define public_6eb64a1 _public_6eb64a1
#define public_6eb64b0 _public_6eb64b0
#define public_6eb64f0 _public_6eb64f0
#define public_6eb6505 _public_6eb6505
#define public_6eb6547 _public_6eb6547
#define public_6eb654a _public_6eb654a

PROC_DECLARE(0x6eb6240, internal_6eb6240, public_6eb6240);
extern "C" NAKED register_t __cdecl internal_6eb6240()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ds : [ecx+0xC]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        sub eax, esi
        sar eax, 7
        cmp eax, ebp
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_6eb63a4
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6eb6274
        mov eax, esi
        sub eax, ecx
        sar eax, 7
        cmp ebp, eax
        jb public_6eb6276
        public_6eb6274 : nop
        mov eax, ebp
        public_6eb6276 : nop
        test ecx, ecx
        jne public_6eb627e
        xor esi, esi
        jmp public_6eb6283
        public_6eb627e : nop
        sub esi, ecx
        sar esi, 7
        public_6eb6283 : nop
        add eax, esi
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6eb628f
        xor eax, eax
        public_6eb628f : nop
        shl eax, 7
        push eax
        call public_6fa912a
        mov ebx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_6eb62ce
        public_6eb62b0 : nop
        push esi
        push edi
        call public_6eb68a0
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x80
        add esp, 8
        add edi, 0x80
        cmp esi, eax
        jne public_6eb62b0
        public_6eb62ce : nop
        test ebp, ebp
        mov esi, edi
        jbe public_6eb62fb
        mov dword ptr ss : [esp+0x24], ebp
        public_6eb62d8 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        push esi
        call public_6eb68a0
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x80
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_6eb62d8
        mov eax, dword ptr ss : [esp+0x20]
        public_6eb62fb : nop
        mov edx, ebp
        shl edx, 7
        lea ecx, ds:[edx+edi]
        mov edi, dword ptr ds : [ebx+8]
        cmp eax, edi
        mov esi, eax
        je public_6eb632e
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_6eb6318
        public_6eb6314 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        public_6eb6318 : nop
        add ecx, esi
        push esi
        push ecx
        call public_6eb68a0
        add esi, 0x80
        add esp, 8
        cmp esi, edi
        jne public_6eb6314
        public_6eb632e : nop
        mov edi, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, edi
        je public_6eb6349
        public_6eb6338 : nop
        mov ecx, esi
        call public_6eb4680
        add esi, 0x80
        cmp esi, edi
        jne public_6eb6338
        public_6eb6349 : nop
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [ebx+4]
        shl eax, 7
        add eax, edx
        add esp, 4
        test ecx, ecx
        mov dword ptr ds : [ebx+0xC], eax
        jne public_6eb6385
        xor eax, eax
        mov eax, ebp
        pop edi
        shl eax, 7
        pop esi
        add eax, edx
        pop ebp
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+4], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6eb6385 : nop
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ecx
        sar eax, 7
        add eax, ebp
        pop edi
        shl eax, 7
        pop esi
        add eax, edx
        pop ebp
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+4], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6eb63a4 : nop
        mov ebx, dword ptr ss : [esp+0x20]
        mov edx, esi
        sub edx, ebx
        sar edx, 7
        cmp edx, ebp
        jae public_6eb645c
        mov eax, ebp
        shl eax, 7
        cmp ebx, esi
        mov dword ptr ss : [esp+0x20], eax
        lea edx, ds:[eax+ebx]
        mov edi, ebx
        je public_6eb63f5
        mov eax, edx
        sub eax, ebx
        mov dword ptr ss : [esp+0x24], eax
        jmp public_6eb63d7
        public_6eb63d3 : nop
        mov eax, dword ptr ss : [esp+0x24]
        public_6eb63d7 : nop
        add eax, edi
        push edi
        push eax
        call public_6eb68a0
        add edi, 0x80
        add esp, 8
        cmp edi, esi
        jne public_6eb63d3
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6eb63f5 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov edi, dword ptr ss : [esp+0x28]
        mov edx, esi
        sub edx, ebx
        sar edx, 7
        sub ebp, edx
        je public_6eb6422
        public_6eb6407 : nop
        push edi
        push esi
        call public_6eb68a0
        add esp, 8
        add esi, 0x80
        dec ebp
        jne public_6eb6407
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6eb6422 : nop
        mov esi, dword ptr ds : [ecx+8]
        cmp ebx, esi
        je public_6eb644a
        lea esp, ss:[esp]
        public_6eb6430 : nop
        push edi
        mov ecx, ebx
        call public_6eb69d0
        add ebx, 0x80
        cmp ebx, esi
        jne public_6eb6430
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6eb644a : nop
        mov edx, dword ptr ds : [ecx+8]
        pop edi
        pop esi
        add edx, eax
        pop ebp
        mov dword ptr ds : [ecx+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6eb645c : nop
        test ebp, ebp
        jbe public_6eb654a
        shl ebp, 7
        mov edi, esi
        sub edi, ebp
        cmp edi, esi
        mov dword ptr ss : [esp+0x24], esi
        mov dword ptr ss : [esp+0x20], ebp
        je public_6eb64a1
        public_6eb6477 : nop
        mov eax, dword ptr ss : [esp+0x24]
        push edi
        push eax
        call public_6eb68a0
        mov edx, dword ptr ss : [esp+0x2C]
        add edx, 0x80
        add edi, 0x80
        add esp, 8
        cmp edi, esi
        mov dword ptr ss : [esp+0x24], edx
        jne public_6eb6477
        mov ecx, dword ptr ss : [esp+0x10]
        public_6eb64a1 : nop
        mov edi, dword ptr ds : [ecx+8]
        mov esi, edi
        sub esi, ebp
        cmp ebx, esi
        je public_6eb64f0
        lea esp, ss:[esp]
        public_6eb64b0 : nop
        sub esi, 0x80
        sub edi, 0x80
        push esi
        mov ecx, edi
        call public_6eb6560
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [edi+0x10], ecx
        mov edx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [edi+0x14], edx
        mov eax, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [edi+0x18], eax
        mov ecx, dword ptr ds : [esi+0x1C]
        lea edx, ds:[esi+0x20]
        mov dword ptr ds : [edi+0x1C], ecx
        push edx
        lea ecx, ds:[edi+0x20]
        call public_6eb6b50
        cmp esi, ebx
        jne public_6eb64b0
        mov ecx, dword ptr ss : [esp+0x10]
        public_6eb64f0 : nop
        lea eax, ds:[ebx+ebp]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x24], eax
        je public_6eb6547
        mov edi, dword ptr ss : [esp+0x28]
        lea ebp, ds:[edi+0x20]
        lea esi, ds:[ebx+0x14]
        public_6eb6505 : nop
        push edi
        lea ecx, ds:[esi-0x14]
        call public_6f971e0
        mov eax, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi-4], eax
        mov ecx, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [esi], ecx
        mov edx, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [esi+4], edx
        mov eax, dword ptr ds : [edi+0x1C]
        push ebp
        lea ecx, ds:[esi+0xC]
        mov dword ptr ds : [esi+8], eax
        call public_6eb6b50
        mov eax, dword ptr ss : [esp+0x24]
        add esi, 0x80
        lea ecx, ds:[esi-0x14]
        cmp ecx, eax
        jne public_6eb6505
        mov ecx, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ss : [esp+0x20]
        public_6eb6547 : nop
        add dword ptr ds : [ecx+8], ebp
        public_6eb654a : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6eb6240)
    }
}

#undef public_6eb6274
#undef public_6eb6276
#undef public_6eb627e
#undef public_6eb6283
#undef public_6eb628f
#undef public_6eb62b0
#undef public_6eb62ce
#undef public_6eb62d8
#undef public_6eb62fb
#undef public_6eb6314
#undef public_6eb6318
#undef public_6eb632e
#undef public_6eb6338
#undef public_6eb6349
#undef public_6eb6385
#undef public_6eb63a4
#undef public_6eb63d3
#undef public_6eb63d7
#undef public_6eb63f5
#undef public_6eb6407
#undef public_6eb6422
#undef public_6eb6430
#undef public_6eb644a
#undef public_6eb645c
#undef public_6eb6477
#undef public_6eb64a1
#undef public_6eb64b0
#undef public_6eb64f0
#undef public_6eb6505
#undef public_6eb6547
#undef public_6eb654a
