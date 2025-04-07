#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ed0d0);

#define public_62ed0d8 _public_62ed0d8

PROC_DECLARE(0x62ed0d0, internal_62ed0d0, public_62ed0d0);
extern "C" NAKED register_t __cdecl internal_62ed0d0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_62ed0d8
        ret 
        public_62ed0d8 : nop
        mov ecx, dword ptr ds : [ecx+8]
        sub ecx, eax
        mov eax, 0x78787879
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x62ed0d0)
    }
}

#undef public_62ed0d8
