#include "Common-PCH.h"


#define public_6285b2e _public_6285b2e

PROC_DECLARE(0x6285b00, internal_6285b00, public_6285b00);
extern "C" NAKED register_t __cdecl internal_6285b00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x60]
        test eax, eax
        je public_6285b2e
        mov edx, dword ptr ds : [eax+0xD0]
        lea ecx, ds:[eax+0xD0]
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        call dword ptr ds : [edx+4]
        public_6285b2e : nop
        ret 
        UNREACHABLE_TRAP(0x6285b00)
    }
}

#undef public_6285b2e
