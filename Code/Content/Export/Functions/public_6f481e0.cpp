#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f481e0);

#define public_6f481eb _public_6f481eb

PROC_DECLARE(0x6f481e0, internal_6f481e0, public_6f481e0);
extern "C" NAKED register_t __cdecl internal_6f481e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6f481eb
        mov eax, dword ptr ds : [eax+4]
        ret 
        public_6f481eb : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6f481e0)
    }
}

#undef public_6f481eb
