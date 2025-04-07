#include "EngBase-PCH.h"


#define public_662248d _public_662248d
#define public_6622493 _public_6622493
#define public_662249a _public_662249a
#define public_66224a3 _public_66224a3

PROC_DECLARE(0x6622480, internal_6622480, public_6622480);
extern "C" NAKED register_t __cdecl internal_6622480()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xFFFFFFFF
        je public_662248d
        test eax, eax
        jne public_6622493
        public_662248d : nop
        or eax, 0xFFFFFFFF
        ret 8
        public_6622493 : nop
        mov ecx, dword ptr ds : [eax+0x10]
        test ecx, ecx
        je public_66224a3
        public_662249a : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+0x10]
        test ecx, ecx
        jne public_662249a
        public_66224a3 : nop
        ret 8
        UNREACHABLE_TRAP(0x6622480)
    }
}

#undef public_662248d
#undef public_6622493
#undef public_662249a
#undef public_66224a3
