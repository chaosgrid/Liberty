#include "FLServer-PCH.h"


#define public_41846b _public_41846b
#define public_418475 _public_418475
#define public_41849f _public_41849f

PROC_DECLARE(0x418460, internal_418460, public_418460);
extern "C" NAKED register_t __cdecl internal_418460()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        test edx, edx
        jne public_41846b
        xor eax, eax
        ret 
        public_41846b : nop
        mov cl, byte ptr ds : [edx]
        or eax, 0xFFFFFFFF
        test cl, cl
        je public_41849f
        push ebx
        public_418475 : nop
        movsx ecx, cl
        xor ebx, ebx
        mov bl, byte ptr ds : [ecx+public_425dd8]
        mov ecx, eax
        and ecx, 0xFF
        xor ebx, ecx
        shr eax, 8
        mov ecx, dword ptr ds : [ebx*4+public_4259d8]
        xor eax, ecx
        mov cl, byte ptr ds : [edx+1]
        inc edx
        test cl, cl
        jne public_418475
        pop ebx
        public_41849f : nop
        not eax
        ret 
        UNREACHABLE_TRAP(0x418460)
    }
}

#undef public_41846b
#undef public_418475
#undef public_41849f
