#include "FLServer-PCH.h"


#define public_418430 _public_418430
#define public_418454 _public_418454

PROC_DECLARE(0x418420, internal_418420, public_418420);
extern "C" NAKED register_t __cdecl internal_418420()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        or eax, 0xFFFFFFFF
        cmp ecx, edx
        push ebx
        je public_418454
        public_418430 : nop
        movsx edx, byte ptr ds : [ecx]
        xor ebx, ebx
        mov bl, byte ptr ds : [edx+public_425dd8]
        mov edx, eax
        and edx, 0xFF
        xor ebx, edx
        shr eax, 8
        mov edx, dword ptr ds : [ebx*4+public_4259d8]
        xor eax, edx
        inc ecx
        jmp public_418430
        public_418454 : nop
        xor eax, eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x418420)
    }
}

#undef public_418430
#undef public_418454
