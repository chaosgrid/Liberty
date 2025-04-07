#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633de40);

#define public_633de48 _public_633de48

PROC_DECLARE(0x633de40, internal_633de40, public_633de40);
extern "C" NAKED register_t __cdecl internal_633de40()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_633de48
        ret 
        public_633de48 : nop
        mov ecx, dword ptr ds : [ecx+8]
        sub ecx, eax
        mov eax, 0xEA0EA0EB
        imul ecx
        add edx, ecx
        sar edx, 8
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x633de40)
    }
}

#undef public_633de48
