#include "Content-PCH.h"


#define public_6f065c2 _public_6f065c2
#define public_6f065d0 _public_6f065d0

PROC_DECLARE(0x6f065a0, internal_6f065a0, public_6f065a0);
extern "C" NAKED register_t __cdecl internal_6f065a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], 0
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        mov dword ptr ds : [ecx], 0
        je public_6f065c2
        mov dword ptr ds : [eax], 0
        public_6f065c2 : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_6f065d0
        mov dword ptr ds : [eax], 0
        public_6f065d0 : nop
        ret 0x10
        UNREACHABLE_TRAP(0x6f065a0)
    }
}

#undef public_6f065c2
#undef public_6f065d0
