#include "Alchemy-PCH.h"


#define public_623ee70 _public_623ee70
#define public_623ee94 _public_623ee94

PROC_DECLARE(0x623ee60, internal_623ee60, public_623ee60);
extern "C" NAKED register_t __cdecl internal_623ee60()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        or eax, 0xFFFFFFFF
        cmp ecx, edx
        push ebx
        je public_623ee94
        public_623ee70 : nop
        movsx edx, byte ptr ds : [ecx]
        xor ebx, ebx
        mov bl, byte ptr ds : [edx+public_6257168]
        mov edx, eax
        and edx, 0xFF
        xor ebx, edx
        shr eax, 8
        mov edx, dword ptr ds : [ebx*4+public_6256d68]
        xor eax, edx
        inc ecx
        jmp public_623ee70
        public_623ee94 : nop
        xor eax, eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x623ee60)
    }
}

#undef public_623ee70
#undef public_623ee94
