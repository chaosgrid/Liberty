#include "Common-PCH.h"


#define public_62be253 _public_62be253

PROC_DECLARE(0x62be240, internal_62be240, public_62be240);
extern "C" NAKED register_t __cdecl internal_62be240()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x30]
        test eax, eax
        jne public_62be253
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+8], eax
        mov al, 1
        ret 4
        public_62be253 : nop
        xor al, al
        ret 4
        UNREACHABLE_TRAP(0x62be240)
    }
}

#undef public_62be253
