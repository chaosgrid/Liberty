#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb1b50);

#define public_6eb1b58 _public_6eb1b58

PROC_DECLARE(0x6eb1b50, internal_6eb1b50, public_6eb1b50);
extern "C" NAKED register_t __cdecl internal_6eb1b50()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6eb1b58
        ret 
        public_6eb1b58 : nop
        mov ecx, dword ptr ds : [ecx+8]
        sub ecx, eax
        mov eax, 0x2E8BA2E9
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x6eb1b50)
    }
}

#undef public_6eb1b58
