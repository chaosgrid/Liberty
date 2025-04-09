#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4750);

#define public_4c4764 _public_4c4764
#define public_4c476c _public_4c476c
#define public_4c4773 _public_4c4773

PROC_DECLARE(0x4c4750, internal_4c4750, public_4c4750);
extern "C" NAKED register_t __cdecl internal_4c4750()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_673374]
        xor eax, eax
        test ecx, ecx
        jle public_4c4773
        push esi
        mov edx, offset public_67298c
        mov esi, ecx
        public_4c4764 : nop
        mov ecx, dword ptr ds : [edx]
        cmp ecx, eax
        jle public_4c476c
        mov eax, ecx
        public_4c476c : nop
        add edx, 0x18
        dec esi
        jne public_4c4764
        pop esi
        public_4c4773 : nop
        ret 
        UNREACHABLE_TRAP(0x4c4750)
    }
}

#undef public_4c4764
#undef public_4c476c
#undef public_4c4773
