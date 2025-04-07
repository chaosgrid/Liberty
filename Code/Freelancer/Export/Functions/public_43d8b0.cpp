#include "Freelancer-PCH.h"


#define public_43d8c0 _public_43d8c0
#define public_43d8cd _public_43d8cd

PROC_DECLARE(0x43d8b0, internal_43d8b0, public_43d8b0);
extern "C" NAKED register_t __cdecl internal_43d8b0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [esp+4]
        cmp ecx, eax
        jne public_43d8c0
        mov al, 1
        ret 4
        public_43d8c0 : nop
        test ecx, ecx
        je public_43d8cd
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [edx+0xC]
        public_43d8cd : nop
        xor al, al
        ret 4
        UNREACHABLE_TRAP(0x43d8b0)
    }
}

#undef public_43d8c0
#undef public_43d8cd
