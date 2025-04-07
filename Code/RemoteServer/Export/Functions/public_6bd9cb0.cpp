#include "RemoteServer-PCH.h"


#define public_6bd9cbf _public_6bd9cbf

PROC_DECLARE(0x6bd9cb0, internal_6bd9cb0, public_6bd9cb0);
extern "C" NAKED register_t __cdecl internal_6bd9cb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        jne public_6bd9cbf
        mov byte ptr ds : [ecx+0x28], 1
        ret 4
        public_6bd9cbf : nop
        mov byte ptr ds : [ecx+0x28], 0
        ret 4
        UNREACHABLE_TRAP(0x6bd9cb0)
    }
}

#undef public_6bd9cbf
