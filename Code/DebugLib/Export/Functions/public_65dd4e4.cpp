#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dd40c);
CLANG_FORWARD_PROC_SYMBOL(public_65dd4e4);
CLANG_FORWARD_PROC_SYMBOL(public_65de817);
CLANG_FORWARD_PROC_SYMBOL(public_65de88a);
CLANG_FORWARD_PROC_SYMBOL(public_65de893);

#define public_65dd4fd _public_65dd4fd
#define public_65dd504 _public_65dd504
#define public_65dd534 _public_65dd534
#define public_65dd554 _public_65dd554
#define public_65dd55a _public_65dd55a
#define public_65dd579 _public_65dd579
#define public_65dd58e _public_65dd58e
#define public_65dd5ca _public_65dd5ca
#define public_65dd5cc _public_65dd5cc
#define public_65dd5f8 _public_65dd5f8
#define public_65dd603 _public_65dd603
#define public_65dd625 _public_65dd625
#define public_65dd630 _public_65dd630
#define public_65dd639 _public_65dd639
#define public_65dd63e _public_65dd63e
#define public_65dd653 _public_65dd653
#define public_65dd667 _public_65dd667
#define public_65dd66a _public_65dd66a

PROC_DECLARE(0x65dd4e4, internal_65dd4e4, public_65dd4e4);
extern "C" NAKED register_t __cdecl internal_65dd4e4()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x414
        push ebx
        push esi
        push edi
        xor edi, edi
        cmp dword ptr ss : [ebp+0x10], edi
        mov dword ptr ss : [ebp-8], edi
        mov dword ptr ss : [ebp-0x10], edi
        jne public_65dd504
        public_65dd4fd : nop
        xor eax, eax
        jmp public_65dd66a
        public_65dd504 : nop
        mov eax, dword ptr ss : [ebp+8]
        sar eax, 5
        lea ebx, ds : [eax*4+public_65e7940]
        mov eax, dword ptr ss : [ebp+8]
        and eax, 0x1F
        lea esi, ds:[eax+eax*8]
        mov eax, dword ptr ds : [ebx]
        shl esi, 2
        test byte ptr ds : [eax+esi+4], 0x20
        je public_65dd534
        push 2
        push edi
        push dword ptr ss : [ebp+8]
        call public_65dd40c
        add esp, 0xC
        public_65dd534 : nop
        mov eax, dword ptr ds : [ebx]
        add eax, esi
        test byte ptr ds : [eax+4], 0x80
        je public_65dd603
        mov eax, dword ptr ss : [ebp+0xC]
        cmp dword ptr ss : [ebp+0x10], edi
        mov dword ptr ss : [ebp-4], eax
        mov dword ptr ss : [ebp+8], edi
        jbe public_65dd63e
        public_65dd554 : nop
        lea eax, ss:[ebp-0x414]
        public_65dd55a : nop
        mov ecx, dword ptr ss : [ebp-4]
        sub ecx, dword ptr ss : [ebp+0xC]
        cmp ecx, dword ptr ss : [ebp+0x10]
        jae public_65dd58e
        mov ecx, dword ptr ss : [ebp-4]
        inc dword ptr ss : [ebp-4]
        mov cl, byte ptr ds : [ecx]
        cmp cl, 0xA
        jne public_65dd579
        inc dword ptr ss : [ebp-0x10]
        mov byte ptr ds : [eax], 0xD
        inc eax
        public_65dd579 : nop
        mov byte ptr ds : [eax], cl
        inc eax
        mov ecx, eax
        lea edx, ss:[ebp-0x414]
        sub ecx, edx
        cmp ecx, 0x400
        jl public_65dd55a
        public_65dd58e : nop
        mov edi, eax
        lea eax, ss:[ebp-0x414]
        sub edi, eax
        lea eax, ss:[ebp-0xC]
        push 0
        push eax
        lea eax, ss:[ebp-0x414]
        push edi
        push eax
        mov eax, dword ptr ds : [ebx]
        push dword ptr ds : [eax+esi]
        call dword ptr ds : [public_65e10d0]
        test eax, eax
        je public_65dd5f8
        mov eax, dword ptr ss : [ebp-0xC]
        add dword ptr ss : [ebp-8], eax
        cmp eax, edi
        jl public_65dd5ca
        mov eax, dword ptr ss : [ebp-4]
        sub eax, dword ptr ss : [ebp+0xC]
        cmp eax, dword ptr ss : [ebp+0x10]
        jb public_65dd554
        public_65dd5ca : nop
        xor edi, edi
        public_65dd5cc : nop
        mov eax, dword ptr ss : [ebp-8]
        cmp eax, edi
        jne public_65dd667
        cmp dword ptr ss : [ebp+8], edi
        je public_65dd63e
        push 5
        pop esi
        cmp dword ptr ss : [ebp+8], esi
        jne public_65dd630
        call public_65de88a
        mov dword ptr ds : [eax], 9
        call public_65de893
        mov dword ptr ds : [eax], esi
        jmp public_65dd639
        public_65dd5f8 : nop
        call dword ptr ds : [public_65e107c]
        mov dword ptr ss : [ebp+8], eax
        jmp public_65dd5ca
        public_65dd603 : nop
        lea ecx, ss:[ebp-0xC]
        push edi
        push ecx
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ds : [eax]
        call dword ptr ds : [public_65e10d0]
        test eax, eax
        je public_65dd625
        mov eax, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp-8], eax
        jmp public_65dd5cc
        public_65dd625 : nop
        call dword ptr ds : [public_65e107c]
        mov dword ptr ss : [ebp+8], eax
        jmp public_65dd5cc
        public_65dd630 : nop
        push dword ptr ss : [ebp+8]
        call public_65de817
        pop ecx
        public_65dd639 : nop
        or eax, 0xFFFFFFFF
        jmp public_65dd66a
        public_65dd63e : nop
        mov eax, dword ptr ds : [ebx]
        test byte ptr ds : [eax+esi+4], 0x40
        je public_65dd653
        mov eax, dword ptr ss : [ebp+0xC]
        cmp byte ptr ds : [eax], 0x1A
        je public_65dd4fd
        public_65dd653 : nop
        call public_65de88a
        mov dword ptr ds : [eax], 0x1C
        call public_65de893
        mov dword ptr ds : [eax], edi
        jmp public_65dd639
        public_65dd667 : nop
        sub eax, dword ptr ss : [ebp-0x10]
        public_65dd66a : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x65dd4e4)
    }
}

#undef public_65dd4fd
#undef public_65dd504
#undef public_65dd534
#undef public_65dd554
#undef public_65dd55a
#undef public_65dd579
#undef public_65dd58e
#undef public_65dd5ca
#undef public_65dd5cc
#undef public_65dd5f8
#undef public_65dd603
#undef public_65dd625
#undef public_65dd630
#undef public_65dd639
#undef public_65dd63e
#undef public_65dd653
#undef public_65dd667
#undef public_65dd66a
