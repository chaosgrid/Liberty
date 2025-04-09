#include "FreeLancer-PCH.h"


#define public_4b50cc _public_4b50cc

PROC_DECLARE(0x4b50c0, internal_4b50c0, public_4b50c0);
extern "C" NAKED register_t __cdecl internal_4b50c0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_4b50cc
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0x4C]
        public_4b50cc : nop
        xor al, al
        ret 4
        UNREACHABLE_TRAP(0x4b50c0)
    }
}

#undef public_4b50cc
