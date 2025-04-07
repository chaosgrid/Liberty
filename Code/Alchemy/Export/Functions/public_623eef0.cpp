#include "Alchemy-PCH.h"


#define public_623ef05 _public_623ef05
#define public_623ef2f _public_623ef2f
#define public_623ef31 _public_623ef31

PROC_DECLARE(0x623eef0, internal_623eef0, public_623eef0);
extern "C" NAKED register_t __cdecl internal_623eef0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        test edx, edx
        je public_623ef31
        mov cl, byte ptr ds : [edx]
        test cl, cl
        not eax
        je public_623ef2f
        push ebx
        public_623ef05 : nop
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
        jne public_623ef05
        pop ebx
        public_623ef2f : nop
        not eax
        public_623ef31 : nop
        ret 
        UNREACHABLE_TRAP(0x623eef0)
    }
}

#undef public_623ef05
#undef public_623ef2f
#undef public_623ef31
