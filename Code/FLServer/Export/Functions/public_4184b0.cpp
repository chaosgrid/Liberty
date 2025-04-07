#include "FLServer-PCH.h"


#define public_4184c5 _public_4184c5
#define public_4184ef _public_4184ef
#define public_4184f1 _public_4184f1

PROC_DECLARE(0x4184b0, internal_4184b0, public_4184b0);
extern "C" NAKED register_t __cdecl internal_4184b0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        test edx, edx
        je public_4184f1
        mov cl, byte ptr ds : [edx]
        test cl, cl
        not eax
        je public_4184ef
        push ebx
        public_4184c5 : nop
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
        jne public_4184c5
        pop ebx
        public_4184ef : nop
        not eax
        public_4184f1 : nop
        ret 
        UNREACHABLE_TRAP(0x4184b0)
    }
}

#undef public_4184c5
#undef public_4184ef
#undef public_4184f1
