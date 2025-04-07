#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_445a60);

#define public_445a7e _public_445a7e

PROC_DECLARE(0x445a60, internal_445a60, public_445a60);
extern "C" NAKED register_t __cdecl internal_445a60()
{
    __asm
    {
        cmp dword ptr ds : [ecx+0x1B0], 0xFFFFFFFF
        jne public_445a7e
        mov eax, dword ptr ds : [ecx+0x300]
        test eax, eax
        jne public_445a7e
        mov eax, dword ptr ds : [ecx+0x2F4]
        mov byte ptr ds : [eax+0xC], 0
        ret 
        public_445a7e : nop
        mov ecx, dword ptr ds : [ecx+0x2F4]
        mov byte ptr ds : [ecx+0xC], 1
        ret 
        UNREACHABLE_TRAP(0x445a60)
    }
}

#undef public_445a7e
