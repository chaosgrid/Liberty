#include "Common-PCH.h"


#define public_62ce3f1 _public_62ce3f1

PROC_DECLARE(0x62ce3e0, internal_62ce3e0, public_62ce3e0);
extern "C" NAKED register_t __cdecl internal_62ce3e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x14]
        test eax, eax
        mov eax, 3
        je public_62ce3f1
        mov eax, 1
        public_62ce3f1 : nop
        mov dword ptr ds : [ecx+0x10], eax
        ret 
        UNREACHABLE_TRAP(0x62ce3e0)
    }
}

#undef public_62ce3f1
