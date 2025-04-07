#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_586510);

#define public_58651e _public_58651e
#define public_586529 _public_586529
#define public_586540 _public_586540
#define public_58654c _public_58654c
#define public_586552 _public_586552

PROC_DECLARE(0x586510, internal_586510, public_586510);
extern "C" NAKED register_t __cdecl internal_586510()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x550]
        test edx, edx
        jne public_58651e
        xor eax, eax
        jmp public_586529
        public_58651e : nop
        mov eax, dword ptr ds : [ecx+0x554]
        sub eax, edx
        sar eax, 2
        public_586529 : nop
        push esi
        xor edx, edx
        test eax, eax
        jle public_58654c
        mov ecx, dword ptr ds : [ecx+0x550]
        mov esi, dword ptr ss : [esp+8]
        lea ebx, ds:[ebx]
        public_586540 : nop
        cmp dword ptr ds : [ecx], esi
        je public_586552
        inc edx
        add ecx, 4
        cmp edx, eax
        jl public_586540
        public_58654c : nop
        xor al, al
        pop esi
        ret 4
        public_586552 : nop
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x586510)
    }
}

#undef public_58651e
#undef public_586529
#undef public_586540
#undef public_58654c
#undef public_586552
