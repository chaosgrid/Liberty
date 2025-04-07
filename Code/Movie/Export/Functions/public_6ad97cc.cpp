#include "Movie-PCH.h"


#define public_6ad97d8 _public_6ad97d8

PROC_DECLARE(0x6ad97cc, internal_6ad97cc, public_6ad97cc);
extern "C" NAKED register_t __cdecl internal_6ad97cc()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        jne public_6ad97d8
        mov eax, offset public_6ada238
        public_6ad97d8 : nop
        ret 
        UNREACHABLE_TRAP(0x6ad97cc)
    }
}

#undef public_6ad97d8
