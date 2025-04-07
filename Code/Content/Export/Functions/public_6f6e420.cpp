#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6e420);

#define public_6f6e448 _public_6f6e448
#define public_6f6e454 _public_6f6e454
#define public_6f6e470 _public_6f6e470
#define public_6f6e47b _public_6f6e47b
#define public_6f6e47d _public_6f6e47d
#define public_6f6e48c _public_6f6e48c
#define public_6f6e4a2 _public_6f6e4a2
#define public_6f6e4ad _public_6f6e4ad
#define public_6f6e4af _public_6f6e4af
#define public_6f6e4ba _public_6f6e4ba
#define public_6f6e4c6 _public_6f6e4c6
#define public_6f6e4d1 _public_6f6e4d1
#define public_6f6e4d3 _public_6f6e4d3
#define public_6f6e4de _public_6f6e4de
#define public_6f6e4f0 _public_6f6e4f0
#define public_6f6e4fb _public_6f6e4fb
#define public_6f6e4fd _public_6f6e4fd
#define public_6f6e508 _public_6f6e508
#define public_6f6e514 _public_6f6e514
#define public_6f6e51f _public_6f6e51f
#define public_6f6e521 _public_6f6e521

PROC_DECLARE(0x6f6e420, internal_6f6e420, public_6f6e420);
extern "C" NAKED register_t __cdecl internal_6f6e420()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        push esi
        lea eax, ss:[esp+8]
        push eax
        push edx
        call dword ptr ds : [public_6fb33a0]
        mov eax, dword ptr ss : [esp+0x10]
        add esp, 8
        test eax, 0x840
        je public_6f6e448
        mov eax, 7
        pop esi
        ret 
        public_6f6e448 : nop
        test ah, 4
        je public_6f6e454
        mov eax, 8
        pop esi
        ret 
        public_6f6e454 : nop
        test al, 0x20
        je public_6f6e48c
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        je public_6f6e47b
        mov edx, dword ptr ds : [public_6fd1cd8]
        lea esp, ss:[esp]
        public_6f6e470 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f6e47d
        add eax, 4
        cmp eax, ecx
        jne public_6f6e470
        public_6f6e47b : nop
        mov eax, ecx
        public_6f6e47d : nop
        xor edx, edx
        cmp eax, ecx
        sete dl
        pop esi
        dec edx
        and edx, 6
        mov eax, edx
        ret 
        public_6f6e48c : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov ecx, esi
        cmp ecx, eax
        je public_6f6e4ad
        mov edx, dword ptr ds : [public_6fd1cd8]
        public_6f6e4a2 : nop
        cmp dword ptr ds : [ecx], edx
        je public_6f6e4af
        add ecx, 4
        cmp ecx, eax
        jne public_6f6e4a2
        public_6f6e4ad : nop
        mov ecx, eax
        public_6f6e4af : nop
        cmp ecx, eax
        je public_6f6e4ba
        mov eax, 1
        pop esi
        ret 
        public_6f6e4ba : nop
        mov ecx, esi
        cmp ecx, eax
        je public_6f6e4d1
        mov edx, dword ptr ds : [public_6fd1cd4]
        public_6f6e4c6 : nop
        cmp dword ptr ds : [ecx], edx
        je public_6f6e4d3
        add ecx, 4
        cmp ecx, eax
        jne public_6f6e4c6
        public_6f6e4d1 : nop
        mov ecx, eax
        public_6f6e4d3 : nop
        cmp ecx, eax
        je public_6f6e4de
        mov eax, 3
        pop esi
        ret 
        public_6f6e4de : nop
        mov ecx, esi
        cmp ecx, eax
        je public_6f6e4fb
        mov edx, dword ptr ds : [public_6fd1cd0]
        lea ebx, ds:[ebx]
        public_6f6e4f0 : nop
        cmp dword ptr ds : [ecx], edx
        je public_6f6e4fd
        add ecx, 4
        cmp ecx, eax
        jne public_6f6e4f0
        public_6f6e4fb : nop
        mov ecx, eax
        public_6f6e4fd : nop
        cmp ecx, eax
        je public_6f6e508
        mov eax, 4
        pop esi
        ret 
        public_6f6e508 : nop
        mov ecx, esi
        cmp ecx, eax
        je public_6f6e51f
        mov edx, dword ptr ds : [public_6fd1ccc]
        public_6f6e514 : nop
        cmp dword ptr ds : [ecx], edx
        je public_6f6e521
        add ecx, 4
        cmp ecx, eax
        jne public_6f6e514
        public_6f6e51f : nop
        mov ecx, eax
        public_6f6e521 : nop
        xor edx, edx
        cmp ecx, eax
        sete dl
        pop esi
        dec edx
        and edx, 5
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x6f6e420)
    }
}

#undef public_6f6e448
#undef public_6f6e454
#undef public_6f6e470
#undef public_6f6e47b
#undef public_6f6e47d
#undef public_6f6e48c
#undef public_6f6e4a2
#undef public_6f6e4ad
#undef public_6f6e4af
#undef public_6f6e4ba
#undef public_6f6e4c6
#undef public_6f6e4d1
#undef public_6f6e4d3
#undef public_6f6e4de
#undef public_6f6e4f0
#undef public_6f6e4fb
#undef public_6f6e4fd
#undef public_6f6e508
#undef public_6f6e514
#undef public_6f6e51f
#undef public_6f6e521
