#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebb830);

#define public_6ebb842 _public_6ebb842

PROC_DECLARE(0x6ebb830, internal_6ebb830, public_6ebb830);
extern "C" NAKED register_t __cdecl internal_6ebb830()
{
    __asm
    {
        mov dword ptr ds : [ecx], 0
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6ebb842
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0xC]
        public_6ebb842 : nop
        ret 
        UNREACHABLE_TRAP(0x6ebb830)
    }
}

#undef public_6ebb842
