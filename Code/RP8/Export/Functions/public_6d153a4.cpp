#include "RP8-PCH.h"


#define public_6d153bf _public_6d153bf
#define public_6d153c6 _public_6d153c6
#define public_6d153df _public_6d153df
#define public_6d153e2 _public_6d153e2

PROC_DECLARE(0x6d153a4, internal_6d153a4, public_6d153a4);
extern "C" NAKED register_t __cdecl internal_6d153a4()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x3EC], 0
        je public_6d153bf
        mov ecx, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [ecx+0x3F0], 0
        jne public_6d153c6
        public_6d153bf : nop
        mov eax, 0xFFFFFFFD
        jmp public_6d153e2
        public_6d153c6 : nop
        mov edx, dword ptr ss : [ebp+8]
        mov al, byte ptr ds : [edx+0x170]
        shr al, 1
        and al, 1
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        je public_6d153df
        xor eax, eax
        jmp public_6d153e2
        public_6d153df : nop
        or eax, 0xFFFFFFFF
        public_6d153e2 : nop
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d153a4)
    }
}

#undef public_6d153bf
#undef public_6d153c6
#undef public_6d153df
#undef public_6d153e2
