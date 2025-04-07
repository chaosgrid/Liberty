#include "Common-PCH.h"


#define public_6310487 _public_6310487
#define public_6310498 _public_6310498
#define public_63104a9 _public_63104a9

PROC_DECLARE(0x6310460, internal_6310460, public_6310460);
extern "C" NAKED register_t __cdecl internal_6310460()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x1564]
        test al, al
        je public_6310498
        mov eax, dword ptr ds : [ecx+0x1440]
        test eax, eax
        je public_6310487
        mov eax, dword ptr ds : [ecx+0x1448]
        mov ecx, dword ptr ds : [ecx+0x144C]
        cmp eax, dword ptr ds : [ecx+8]
        sbb eax, eax
        inc eax
        ret 
        public_6310487 : nop
        mov ecx, dword ptr ds : [ecx+0x144C]
        mov edx, dword ptr ds : [ecx+8]
        xor eax, eax
        cmp eax, edx
        sbb eax, eax
        inc eax
        ret 
        public_6310498 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        test eax, eax
        je public_63104a9
        mov eax, dword ptr ds : [ecx+0x20]
        cmp eax, dword ptr ds : [ecx+0x1C]
        sbb eax, eax
        inc eax
        ret 
        public_63104a9 : nop
        mov edx, dword ptr ds : [ecx+0x1C]
        xor eax, eax
        cmp eax, edx
        sbb eax, eax
        inc eax
        ret 
        UNREACHABLE_TRAP(0x6310460)
    }
}

#undef public_6310487
#undef public_6310498
#undef public_63104a9
