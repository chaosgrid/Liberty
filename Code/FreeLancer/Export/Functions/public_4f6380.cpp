#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_442da0);
CLANG_FORWARD_PROC_SYMBOL(public_4f5c20);
CLANG_FORWARD_PROC_SYMBOL(public_4f6380);

#define public_4f639a _public_4f639a
#define public_4f63a6 _public_4f63a6
#define public_4f63b6 _public_4f63b6
#define public_4f63c1 _public_4f63c1
#define public_4f63c9 _public_4f63c9
#define public_4f63d8 _public_4f63d8
#define public_4f63ec _public_4f63ec
#define public_4f6407 _public_4f6407
#define public_4f6415 _public_4f6415
#define public_4f6430 _public_4f6430
#define public_4f6441 _public_4f6441
#define public_4f6473 _public_4f6473
#define public_4f6477 _public_4f6477
#define public_4f6494 _public_4f6494
#define public_4f64b3 _public_4f64b3
#define public_4f64c7 _public_4f64c7
#define public_4f64e3 _public_4f64e3
#define public_4f64f7 _public_4f64f7
#define public_4f6513 _public_4f6513
#define public_4f6530 _public_4f6530
#define public_4f6534 _public_4f6534
#define public_4f654e _public_4f654e
#define public_4f6560 _public_4f6560
#define public_4f657b _public_4f657b
#define public_4f6585 _public_4f6585
#define public_4f65bd _public_4f65bd
#define public_4f65d0 _public_4f65d0
#define public_4f65e0 _public_4f65e0
#define public_4f6605 _public_4f6605
#define public_4f661d _public_4f661d
#define public_4f6621 _public_4f6621
#define public_4f6634 _public_4f6634

PROC_DECLARE(0x4f6380, internal_4f6380, public_4f6380);
extern "C" NAKED register_t __cdecl internal_4f6380()
{
    __asm
    {
        sub esp, 0x24
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+0xC]
        push edi
        xor edi, edi
        cmp ecx, edi
        mov dword ptr ss : [esp+0x28], ebp
        jne public_4f639a
        mov dword ptr ss : [esp+0x1C], edi
        jmp public_4f63a6
        public_4f639a : nop
        mov eax, dword ptr ss : [ebp+0x10]
        sub eax, ecx
        sar eax, 2
        mov dword ptr ss : [esp+0x1C], eax
        public_4f63a6 : nop
        cmp dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x18], edi
        jle public_4f6634
        push ebx
        push esi
        public_4f63b6 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        jne public_4f63c1
        xor ecx, ecx
        jmp public_4f63c9
        public_4f63c1 : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        sub ecx, eax
        sar ecx, 2
        public_4f63c9 : nop
        xor eax, eax
        test ecx, ecx
        jle public_4f6621
        mov esi, dword ptr ss : [ebp+0xC]
        mov edx, esi
        public_4f63d8 : nop
        mov ebx, dword ptr ds : [edx]
        cmp dword ptr ds : [ebx+0x10], edi
        je public_4f63ec
        inc eax
        add edx, 4
        cmp eax, ecx
        jl public_4f63d8
        jmp public_4f6621
        public_4f63ec : nop
        cmp eax, 0xFFFFFFFF
        je public_4f6621
        mov edi, dword ptr ds : [esi+eax*4]
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        mov dword ptr ss : [esp+0x28], edi
        jne public_4f6407
        xor ebx, ebx
        jmp public_4f6415
        public_4f6407 : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 4
        mov dword ptr ss : [esp+0x1C], eax
        mov ebx, eax
        public_4f6415 : nop
        xor esi, esi
        test ebx, ebx
        mov dword ptr ss : [esp+0x10], esi
        jle public_4f661d
        xor ebp, ebp
        mov dword ptr ss : [esp+0x14], ebp
        lea esp, ss:[esp]
        public_4f6430 : nop
        mov eax, dword ptr ds : [edi+4]
        add eax, ebp
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        jne public_4f6441
        mov eax, dword ptr ds : [public_5c7078]
        public_4f6441 : nop
        mov ecx, dword ptr ss : [esp+0x38]
        push ecx
        push eax
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        jne public_4f6605
        dec ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x1C], ebx
        jge public_4f654e
        mov eax, ebx
        sub eax, esi
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x2C], eax
        jmp public_4f6477
        public_4f6473 : nop
        mov ebp, dword ptr ss : [esp+0x18]
        public_4f6477 : nop
        mov eax, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [eax+ebp+0x18]
        lea esi, ds:[eax+ebp+0x10]
        add ebp, eax
        mov eax, dword ptr ds : [edx]
        mov ebx, ecx
        cmp eax, ebx
        jae public_4f6494
        mov ebx, eax
        public_4f6494 : nop
        cmp ebp, esi
        jne public_4f64b3
        push eax
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c707c]
        push 0
        push 0
        mov ecx, ebp
        call dword ptr ds : [public_5c707c]
        jmp public_4f6534
        public_4f64b3 : nop
        test ebx, ebx
        jbe public_4f64f7
        cmp ebx, ecx
        jne public_4f64f7
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_4f64c7
        mov eax, dword ptr ds : [public_5c7078]
        public_4f64c7 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_4f64f7
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_5c7084]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_4f64e3
        mov eax, dword ptr ds : [public_5c7078]
        public_4f64e3 : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_4f6534
        public_4f64f7 : nop
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_4f6530
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_4f6513
        mov esi, dword ptr ds : [public_5c7078]
        public_4f6513 : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+ecx], 0
        public_4f6530 : nop
        mov edi, dword ptr ss : [esp+0x28]
        public_4f6534 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x2C]
        add edx, 0x10
        dec eax
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x2C], eax
        jne public_4f6473
        public_4f654e : nop
        mov ebx, dword ptr ds : [edi+8]
        lea ebp, ds:[ebx-0x10]
        lea esi, ss:[ebp+0x10]
        cmp esi, ebx
        je public_4f657b
        sub ebp, esi
        lea ecx, ds:[ecx]
        public_4f6560 : nop
        mov eax, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push 0
        push esi
        lea ecx, ds:[esi+ebp]
        call dword ptr ds : [public_5c6f9c]
        add esi, 0x10
        cmp esi, ebx
        jne public_4f6560
        public_4f657b : nop
        mov ebx, dword ptr ds : [edi+8]
        lea esi, ds:[ebx-0x10]
        cmp esi, ebx
        je public_4f65e0
        public_4f6585 : nop
        mov eax, dword ptr ds : [esi+4]
        xor ebp, ebp
        cmp eax, ebp
        je public_4f65d0
        push eax
        mov ecx, esi
        call dword ptr ds : [public_5c6fa8]
        cmp byte ptr ds : [eax], 0
        je public_4f65bd
        mov edx, dword ptr ds : [esi+4]
        push edx
        mov ecx, esi
        call dword ptr ds : [public_5c6fa8]
        cmp byte ptr ds : [eax], 0xFF
        je public_4f65bd
        mov eax, dword ptr ds : [esi+4]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_5c6fa8]
        dec byte ptr ds : [eax]
        jmp public_4f65d0
        public_4f65bd : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+4]
        add ecx, 2
        push ecx
        dec edx
        push edx
        mov ecx, esi
        call public_442da0
        public_4f65d0 : nop
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        add esi, 0x10
        cmp esi, ebx
        jne public_4f6585
        public_4f65e0 : nop
        mov edx, dword ptr ds : [edi+8]
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ss : [esp+0x1C]
        add edx, 0xFFFFFFF0
        dec ecx
        sub eax, 0x10
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], eax
        mov ebp, eax
        mov esi, ecx
        public_4f6605 : nop
        inc esi
        add ebp, 0x10
        cmp esi, ebx
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0x14], ebp
        jl public_4f6430
        mov ebp, dword ptr ss : [esp+0x30]
        public_4f661d : nop
        mov edi, dword ptr ss : [esp+0x20]
        public_4f6621 : nop
        mov eax, dword ptr ss : [esp+0x24]
        inc edi
        cmp edi, eax
        mov dword ptr ss : [esp+0x20], edi
        jl public_4f63b6
        pop esi
        pop ebx
        public_4f6634 : nop
        mov ecx, ebp
        call public_4f5c20
        pop edi
        pop ebp
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x4f6380)
    }
}

#undef public_4f639a
#undef public_4f63a6
#undef public_4f63b6
#undef public_4f63c1
#undef public_4f63c9
#undef public_4f63d8
#undef public_4f63ec
#undef public_4f6407
#undef public_4f6415
#undef public_4f6430
#undef public_4f6441
#undef public_4f6473
#undef public_4f6477
#undef public_4f6494
#undef public_4f64b3
#undef public_4f64c7
#undef public_4f64e3
#undef public_4f64f7
#undef public_4f6513
#undef public_4f6530
#undef public_4f6534
#undef public_4f654e
#undef public_4f6560
#undef public_4f657b
#undef public_4f6585
#undef public_4f65bd
#undef public_4f65d0
#undef public_4f65e0
#undef public_4f6605
#undef public_4f661d
#undef public_4f6621
#undef public_4f6634
