#include "FLMaterials-PCH.h"


#define public_66f2d71 _public_66f2d71

PROC_DECLARE(0x66f2d60, internal_66f2d60, public_66f2d60);
extern "C" NAKED register_t __cdecl internal_66f2d60()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x68]
        test al, al
        mov eax, offset public_6701090
        jne public_66f2d71
        mov eax, offset public_67010a4
        public_66f2d71 : nop
        ret 
        UNREACHABLE_TRAP(0x66f2d60)
    }
}

#undef public_66f2d71
