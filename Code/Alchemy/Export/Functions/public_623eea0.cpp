#include "Alchemy-PCH.h"


#define public_623eeab _public_623eeab
#define public_623eeb5 _public_623eeb5
#define public_623eedf _public_623eedf

PROC_DECLARE(0x623eea0, internal_623eea0, public_623eea0);
extern "C" NAKED register_t __cdecl internal_623eea0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        test edx, edx
        jne public_623eeab
        xor eax, eax
        ret 
        public_623eeab : nop
        mov cl, byte ptr ds : [edx]
        or eax, 0xFFFFFFFF
        test cl, cl
        je public_623eedf
        push ebx
        public_623eeb5 : nop
        movsx ecx, cl
        xor ebx, ebx
        mov bl, byte ptr ds : [ecx+public_6257168]
        mov ecx, eax
        and ecx, 0xFF
        xor ebx, ecx
        shr eax, 8
        mov ecx, dword ptr ds : [ebx*4+public_6256d68]
        xor eax, ecx
        mov cl, byte ptr ds : [edx+1]
        inc edx
        test cl, cl
        jne public_623eeb5
        pop ebx
        public_623eedf : nop
        not eax
        ret 
        UNREACHABLE_TRAP(0x623eea0)
    }
}

#undef public_623eeab
#undef public_623eeb5
#undef public_623eedf
