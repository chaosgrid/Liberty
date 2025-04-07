#include "Common-PCH.h"


#define public_62ac753 _public_62ac753

PROC_DECLARE(0x62ac740, internal_62ac740, public_62ac740);
extern "C" NAKED register_t __cdecl internal_62ac740()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xE8]
        test eax, eax
        jne public_62ac753
        mov eax, dword ptr ds : [ecx+0xEC]
        mov eax, dword ptr ds : [eax+0x14]
        public_62ac753 : nop
        ret 
        UNREACHABLE_TRAP(0x62ac740)
    }
}

#undef public_62ac753
