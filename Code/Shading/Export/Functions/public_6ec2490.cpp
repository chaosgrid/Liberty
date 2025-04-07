#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec5e70);
CLANG_FORWARD_PROC_SYMBOL(public_6ec60f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecb170);
CLANG_FORWARD_PROC_SYMBOL(public_6ecde00);
CLANG_FORWARD_PROC_SYMBOL(public_6ece190);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ec24d0 _public_6ec24d0
#define public_6ec24d8 _public_6ec24d8
#define public_6ec2527 _public_6ec2527
#define public_6ec252c _public_6ec252c
#define public_6ec2534 _public_6ec2534
#define public_6ec2539 _public_6ec2539
#define public_6ec2545 _public_6ec2545
#define public_6ec25c2 _public_6ec25c2
#define public_6ec2603 _public_6ec2603
#define public_6ec2622 _public_6ec2622
#define public_6ec2637 _public_6ec2637
#define public_6ec2646 _public_6ec2646
#define public_6ec2650 _public_6ec2650
#define public_6ec265d _public_6ec265d
#define public_6ec266f _public_6ec266f

PROC_DECLARE(0x6ec2490, internal_6ec2490, public_6ec2490);
extern "C" NAKED register_t __cdecl internal_6ec2490()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push esi
        or ebx, 0xFFFFFFFF
        test eax, eax
        push edi
        je public_6ec266f
        mov edi, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x18]
        lea esi, ds:[edi+0x3C]
        push eax
        mov ecx, esi
        call public_6ec60f0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        je public_6ec24d0
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, dword ptr ds : [eax+0xC]
        jl public_6ec24d0
        lea eax, ss:[esp+0x14]
        jmp public_6ec24d8
        public_6ec24d0 : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_6ec24d8 : nop
        mov esi, dword ptr ds : [eax]
        cmp esi, dword ptr ds : [edi+0x40]
        je public_6ec266f
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x14]
        push eax
        push ecx
        push edi
        call dword ptr ds : [edx+0x34]
        test eax, eax
        jl public_6ec266f
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [esi+0x20]
        add esi, 0x14
        sub edx, eax
        sar edx, 2
        cmp edx, 1
        mov edi, eax
        jae public_6ec25c2
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        je public_6ec2527
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_6ec252c
        public_6ec2527 : nop
        mov ecx, 1
        public_6ec252c : nop
        test edx, edx
        jne public_6ec2534
        xor eax, eax
        jmp public_6ec2539
        public_6ec2534 : nop
        sub eax, edx
        sar eax, 2
        public_6ec2539 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_6ec2545
        xor eax, eax
        public_6ec2545 : nop
        shl eax, 2
        push ebp
        push eax
        call public_6ed0c5c
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        mov ebx, eax
        push ebx
        push edi
        push ecx
        mov ecx, esi
        call public_6ece190
        lea edx, ss:[esp+0x18]
        push edx
        mov ebp, eax
        push 1
        push ebp
        mov ecx, esi
        call public_6ec5e70
        mov eax, dword ptr ds : [esi+8]
        add ebp, 4
        push ebp
        push eax
        push edi
        mov ecx, esi
        call public_6ece190
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_6ecb170
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6ed0c50
        mov ecx, dword ptr ss : [esp+0x24]
        lea edx, ds:[ebx+ecx*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], edx
        call public_6ecde00
        pop ebp
        lea eax, ds:[ebx+eax*4+4]
        pop edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], eax
        pop esi
        xor eax, eax
        pop ebx
        pop ecx
        ret 0xC
        public_6ec25c2 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_6ec2622
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_6ece190
        mov eax, dword ptr ds : [esi+8]
        mov edx, eax
        lea ecx, ss:[esp+0x14]
        push ecx
        sub edx, edi
        sar edx, 2
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_6ec5e70
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_6ec265d
        public_6ec2603 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6ec2603
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        xor eax, eax
        pop ebx
        pop ecx
        ret 0xC
        public_6ec2622 : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_6ece190
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_6ec2646
        public_6ec2637 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6ec2637
        public_6ec2646 : nop
        lea ecx, ds:[edi+4]
        cmp edi, ecx
        mov eax, edi
        je public_6ec265d
        nop 
        public_6ec2650 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6ec2650
        public_6ec265d : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        xor eax, eax
        pop ebx
        pop ecx
        ret 0xC
        public_6ec266f : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6ec2490)
    }
}

#undef public_6ec24d0
#undef public_6ec24d8
#undef public_6ec2527
#undef public_6ec252c
#undef public_6ec2534
#undef public_6ec2539
#undef public_6ec2545
#undef public_6ec25c2
#undef public_6ec2603
#undef public_6ec2622
#undef public_6ec2637
#undef public_6ec2646
#undef public_6ec2650
#undef public_6ec265d
#undef public_6ec266f
