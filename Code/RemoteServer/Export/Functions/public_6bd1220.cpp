#include "RemoteServer-PCH.h"


#define public_6bd1232 _public_6bd1232

PROC_DECLARE(0x6bd1220, internal_6bd1220, public_6bd1220);
extern "C" NAKED register_t __cdecl internal_6bd1220()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0b128]
        test eax, eax
        je public_6bd1232
        add eax, 4
        mov dword ptr ds : [public_6c138a8], eax
        ret 
        public_6bd1232 : nop
        mov dword ptr ds : [public_6c138a8], 0
        ret 
        UNREACHABLE_TRAP(0x6bd1220)
    }
}

#undef public_6bd1232
