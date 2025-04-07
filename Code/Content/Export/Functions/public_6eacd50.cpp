#include "Content-PCH.h"


#define public_6eacd63 _public_6eacd63

PROC_DECLARE(0x6eacd50, internal_6eacd50, public_6eacd50);
extern "C" NAKED register_t __cdecl internal_6eacd50()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        dec eax
        push esi
        mov dword ptr ds : [ecx+4], eax
        mov esi, eax
        jne public_6eacd63
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+8]
        public_6eacd63 : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6eacd50)
    }
}

#undef public_6eacd63
