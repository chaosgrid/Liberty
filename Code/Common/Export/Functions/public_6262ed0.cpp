#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6262ed0);

#define public_6262ee1 _public_6262ee1
#define public_6262eea _public_6262eea

PROC_DECLARE(0x6262ed0, internal_6262ed0, public_6262ed0);
extern "C" NAKED register_t __cdecl internal_6262ed0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x404]
        mov al, byte ptr ds : [edx+ecx]
        cmp al, 0x20
        je public_6262ee1
        cmp al, 9
        jne public_6262eea
        public_6262ee1 : nop
        inc edx
        mov dword ptr ds : [ecx+0x404], edx
        jmp public_6262ed0
        public_6262eea : nop
        ret 
        UNREACHABLE_TRAP(0x6262ed0)
    }
}

#undef public_6262ee1
#undef public_6262eea
