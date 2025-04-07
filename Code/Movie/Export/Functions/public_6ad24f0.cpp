#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acff18);
CLANG_FORWARD_PROC_SYMBOL(public_6ad0953);
CLANG_FORWARD_PROC_SYMBOL(public_6ad24f0);

#define public_6ad2512 _public_6ad2512
#define public_6ad2528 _public_6ad2528
#define public_6ad254a _public_6ad254a
#define public_6ad2580 _public_6ad2580
#define public_6ad258d _public_6ad258d
#define public_6ad25ab _public_6ad25ab
#define public_6ad25cb _public_6ad25cb
#define public_6ad25d8 _public_6ad25d8
#define public_6ad25de _public_6ad25de
#define public_6ad25e4 _public_6ad25e4
#define public_6ad2603 _public_6ad2603
#define public_6ad2626 _public_6ad2626
#define public_6ad2630 _public_6ad2630
#define public_6ad2632 _public_6ad2632
#define public_6ad2651 _public_6ad2651
#define public_6ad265b _public_6ad265b
#define public_6ad2680 _public_6ad2680
#define public_6ad2686 _public_6ad2686
#define public_6ad2691 _public_6ad2691
#define public_6ad2695 _public_6ad2695

PROC_DECLARE(0x6ad24f0, internal_6ad24f0, public_6ad24f0);
extern "C" NAKED register_t __cdecl internal_6ad24f0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x48
        push ebx
        push esi
        push edi
        push 0x480
        call public_6ad0953
        mov esi, eax
        pop ecx
        test esi, esi
        jne public_6ad2512
        push 0x1B
        call public_6acff18
        pop ecx
        public_6ad2512 : nop
        mov dword ptr ds : [public_6ae2480], esi
        mov dword ptr ds : [public_6ae2580], 0x20
        lea eax, ds:[esi+0x480]
        public_6ad2528 : nop
        cmp esi, eax
        jae public_6ad254a
        and byte ptr ds : [esi+4], 0
        or dword ptr ds : [esi], 0xFFFFFFFF
        and dword ptr ds : [esi+8], 0
        mov byte ptr ds : [esi+5], 0xA
        mov eax, dword ptr ds : [public_6ae2480]
        add esi, 0x24
        add eax, 0x480
        jmp public_6ad2528
        public_6ad254a : nop
        lea eax, ss:[ebp-0x48]
        push eax
        call dword ptr ds : [public_6ada0e8]
        cmp word ptr ss : [ebp-0x16], 0
        je public_6ad2630
        mov eax, dword ptr ss : [ebp-0x14]
        test eax, eax
        je public_6ad2630
        mov edi, dword ptr ds : [eax]
        lea ebx, ds:[eax+4]
        lea eax, ds:[ebx+edi]
        mov dword ptr ss : [ebp-4], eax
        mov eax, 0x800
        cmp edi, eax
        jl public_6ad2580
        mov edi, eax
        public_6ad2580 : nop
        cmp dword ptr ds : [public_6ae2580], edi
        jge public_6ad25de
        mov esi, offset public_6ae2484
        public_6ad258d : nop
        push 0x480
        call public_6ad0953
        test eax, eax
        pop ecx
        je public_6ad25d8
        add dword ptr ds : [public_6ae2580], 0x20
        mov dword ptr ds : [esi], eax
        lea ecx, ds:[eax+0x480]
        public_6ad25ab : nop
        cmp eax, ecx
        jae public_6ad25cb
        and byte ptr ds : [eax+4], 0
        or dword ptr ds : [eax], 0xFFFFFFFF
        and dword ptr ds : [eax+8], 0
        mov byte ptr ds : [eax+5], 0xA
        mov ecx, dword ptr ds : [esi]
        add eax, 0x24
        add ecx, 0x480
        jmp public_6ad25ab
        public_6ad25cb : nop
        add esi, 4
        cmp dword ptr ds : [public_6ae2580], edi
        jl public_6ad258d
        jmp public_6ad25de
        public_6ad25d8 : nop
        mov edi, dword ptr ds : [public_6ae2580]
        public_6ad25de : nop
        xor esi, esi
        test edi, edi
        jle public_6ad2630
        public_6ad25e4 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, 0xFFFFFFFF
        je public_6ad2626
        mov al, byte ptr ds : [ebx]
        test al, 1
        je public_6ad2626
        test al, 8
        jne public_6ad2603
        push ecx
        call dword ptr ds : [public_6ada0ec]
        test eax, eax
        je public_6ad2626
        public_6ad2603 : nop
        mov ecx, esi
        mov eax, esi
        sar ecx, 5
        and eax, 0x1F
        mov ecx, dword ptr ds : [ecx*4+public_6ae2480]
        lea eax, ds:[eax+eax*8]
        lea eax, ds:[ecx+eax*4]
        mov ecx, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], ecx
        mov cl, byte ptr ds : [ebx]
        mov byte ptr ds : [eax+4], cl
        public_6ad2626 : nop
        add dword ptr ss : [ebp-4], 4
        inc esi
        inc ebx
        cmp esi, edi
        jl public_6ad25e4
        public_6ad2630 : nop
        xor ebx, ebx
        public_6ad2632 : nop
        mov ecx, dword ptr ds : [public_6ae2480]
        lea eax, ds:[ebx+ebx*8]
        cmp dword ptr ds : [ecx+eax*4], 0xFFFFFFFF
        lea esi, ds:[ecx+eax*4]
        jne public_6ad2691
        test ebx, ebx
        mov byte ptr ds : [esi+4], 0x81
        jne public_6ad2651
        push 0xFFFFFFF6
        pop eax
        jmp public_6ad265b
        public_6ad2651 : nop
        mov eax, ebx
        dec eax
        neg eax
        sbb eax, eax
        add eax, 0xFFFFFFF5
        public_6ad265b : nop
        push eax
        call dword ptr ds : [public_6ada07c]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_6ad2680
        push edi
        call dword ptr ds : [public_6ada0ec]
        test eax, eax
        je public_6ad2680
        and eax, 0xFF
        mov dword ptr ds : [esi], edi
        cmp eax, 2
        jne public_6ad2686
        public_6ad2680 : nop
        or byte ptr ds : [esi+4], 0x40
        jmp public_6ad2695
        public_6ad2686 : nop
        cmp eax, 3
        jne public_6ad2695
        or byte ptr ds : [esi+4], 8
        jmp public_6ad2695
        public_6ad2691 : nop
        or byte ptr ds : [esi+4], 0x80
        public_6ad2695 : nop
        inc ebx
        cmp ebx, 3
        jl public_6ad2632
        push dword ptr ds : [public_6ae2580]
        call dword ptr ds : [public_6ada0f4]
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad24f0)
    }
}

#undef public_6ad2512
#undef public_6ad2528
#undef public_6ad254a
#undef public_6ad2580
#undef public_6ad258d
#undef public_6ad25ab
#undef public_6ad25cb
#undef public_6ad25d8
#undef public_6ad25de
#undef public_6ad25e4
#undef public_6ad2603
#undef public_6ad2626
#undef public_6ad2630
#undef public_6ad2632
#undef public_6ad2651
#undef public_6ad265b
#undef public_6ad2680
#undef public_6ad2686
#undef public_6ad2691
#undef public_6ad2695
