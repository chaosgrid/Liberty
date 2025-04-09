#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d9c70);

#define public_4d9c78 _public_4d9c78

PROC_DECLARE(0x4d9c70, internal_4d9c70, public_4d9c70);
extern "C" NAKED register_t __cdecl internal_4d9c70()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_4d9c78
        ret 
        public_4d9c78 : nop
        mov ecx, dword ptr ds : [ecx+8]
        sub ecx, eax
        mov eax, 0x63E7063F
        imul ecx
        sar edx, 7
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x4d9c70)
    }
}

#undef public_4d9c78
