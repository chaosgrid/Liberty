#include "Shading-PCH.h"


#define public_6ec3025 _public_6ec3025
#define public_6ec303f _public_6ec303f

PROC_DECLARE(0x6ec3000, internal_6ec3000, public_6ec3000);
extern "C" NAKED register_t __cdecl internal_6ec3000()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        or eax, 0xFFFFFFFF
        test ecx, ecx
        mov dword ptr ds : [esi], 0
        je public_6ec303f
        mov eax, dword ptr ds : [ecx+0x14]
        test eax, eax
        jne public_6ec3025
        xor edx, edx
        mov dword ptr ds : [esi], edx
        pop esi
        ret 0xC
        public_6ec3025 : nop
        mov ecx, dword ptr ds : [ecx+0x18]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ds : [esi], edx
        xor eax, eax
        public_6ec303f : nop
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6ec3000)
    }
}

#undef public_6ec3025
#undef public_6ec303f
