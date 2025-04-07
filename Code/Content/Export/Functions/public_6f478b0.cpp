#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f478b0);

#define public_6f478b8 _public_6f478b8

PROC_DECLARE(0x6f478b0, internal_6f478b0, public_6f478b0);
extern "C" NAKED register_t __cdecl internal_6f478b0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x18]
        test eax, eax
        jne public_6f478b8
        ret 
        public_6f478b8 : nop
        mov eax, dword ptr ds : [eax+0x48]
        ret 
        UNREACHABLE_TRAP(0x6f478b0)
    }
}

#undef public_6f478b8
