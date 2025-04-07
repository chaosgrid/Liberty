#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6272a40);

#define public_6272a48 _public_6272a48

PROC_DECLARE(0x6272a40, internal_6272a40, public_6272a40);
extern "C" NAKED register_t __cdecl internal_6272a40()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6272a48
        ret 
        public_6272a48 : nop
        mov ecx, dword ptr ds : [ecx+8]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x6272a40)
    }
}

#undef public_6272a48
