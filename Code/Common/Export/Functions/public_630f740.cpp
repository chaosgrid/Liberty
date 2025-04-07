#include "Common-PCH.h"


#define public_630f75b _public_630f75b
#define public_630f766 _public_630f766

PROC_DECLARE(0x630f740, internal_630f740, public_630f740);
extern "C" NAKED register_t __cdecl internal_630f740()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x1564]
        test al, al
        je public_630f75b
        mov eax, dword ptr ds : [ecx+0x1440]
        test eax, eax
        je public_630f766
        mov eax, dword ptr ds : [ecx+0x1448]
        ret 
        public_630f75b : nop
        mov eax, dword ptr ds : [ecx+0x18]
        test eax, eax
        je public_630f766
        mov eax, dword ptr ds : [ecx+0x20]
        ret 
        public_630f766 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x630f740)
    }
}

#undef public_630f75b
#undef public_630f766
