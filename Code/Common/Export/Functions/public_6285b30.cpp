#include "Common-PCH.h"


#define public_6285b4a _public_6285b4a

PROC_DECLARE(0x6285b30, internal_6285b30, public_6285b30);
extern "C" NAKED register_t __cdecl internal_6285b30()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi+0x60]
        test ecx, ecx
        je public_6285b4a
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x18]
        mov dword ptr ds : [esi+0x60], 0
        public_6285b4a : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6285b30)
    }
}

#undef public_6285b4a
