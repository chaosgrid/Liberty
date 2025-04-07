#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed2760);

#define public_6ed2768 _public_6ed2768

PROC_DECLARE(0x6ed2760, internal_6ed2760, public_6ed2760);
extern "C" NAKED register_t __cdecl internal_6ed2760()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6ed2768
        ret 
        public_6ed2768 : nop
        mov ecx, dword ptr ds : [ecx+8]
        sub ecx, eax
        mov eax, 0x88888889
        imul ecx
        add edx, ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x6ed2760)
    }
}

#undef public_6ed2768
