#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59f590);

#define public_59f598 _public_59f598

PROC_DECLARE(0x59f590, internal_59f590, public_59f590);
extern "C" NAKED register_t __cdecl internal_59f590()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_59f598
        ret 
        public_59f598 : nop
        mov ecx, dword ptr ds : [ecx+8]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x59f590)
    }
}

#undef public_59f598
