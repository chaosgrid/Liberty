#include "RP8-PCH.h"


#define public_6d15378 _public_6d15378
#define public_6d1537f _public_6d1537f
#define public_6d153a0 _public_6d153a0

PROC_DECLARE(0x6d1535d, internal_6d1535d, public_6d1535d);
extern "C" NAKED register_t __cdecl internal_6d1535d()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x3EC], 0
        je public_6d15378
        mov ecx, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [ecx+0x3F0], 0
        jne public_6d1537f
        public_6d15378 : nop
        mov eax, 0xFFFFFFFD
        jmp public_6d153a0
        public_6d1537f : nop
        mov dl, byte ptr ss : [ebp+0xC]
        and dl, 1
        shl dl, 1
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [eax+0x170]
        and cl, 0xFD
        or cl, dl
        mov edx, dword ptr ss : [ebp+8]
        mov byte ptr ds : [edx+0x170], cl
        xor eax, eax
        public_6d153a0 : nop
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d1535d)
    }
}

#undef public_6d15378
#undef public_6d1537f
#undef public_6d153a0
