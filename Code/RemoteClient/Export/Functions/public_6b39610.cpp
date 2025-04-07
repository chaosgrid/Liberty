#include "RemoteClient-PCH.h"


#define public_6b39627 _public_6b39627

PROC_DECLARE(0x6b39610, internal_6b39610, public_6b39610);
extern "C" NAKED register_t __cdecl internal_6b39610()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        jbe public_6b39627
        cmp eax, 0x80
        ja public_6b39627
        mov dword ptr ds : [ecx+eax*4+0xC], 0
        public_6b39627 : nop
        ret 4
        UNREACHABLE_TRAP(0x6b39610)
    }
}

#undef public_6b39627
