#include "Common-PCH.h"


#define public_62d3f0c _public_62d3f0c

PROC_DECLARE(0x62d3ef0, internal_62d3ef0, public_62d3ef0);
extern "C" NAKED register_t __cdecl internal_62d3ef0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        mov dword ptr ds : [esi+0x110], ecx
        je public_62d3f0c
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x24]
        mov dword ptr ds : [esi+0x114], eax
        public_62d3f0c : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62d3ef0)
    }
}

#undef public_62d3f0c
