#include "Content-PCH.h"


#define public_6f1b89d _public_6f1b89d

PROC_DECLARE(0x6f1b890, internal_6f1b890, public_6f1b890);
extern "C" NAKED register_t __cdecl internal_6f1b890()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x40]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        je public_6f1b89d
        mov eax, dword ptr ds : [ecx+0x10]
        ret 
        public_6f1b89d : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6f1b890)
    }
}

#undef public_6f1b89d
