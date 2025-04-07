#include "Common-PCH.h"


#define public_62c5667 _public_62c5667

PROC_DECLARE(0x62c5650, internal_62c5650, public_62c5650);
extern "C" NAKED register_t __cdecl internal_62c5650()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x2F0]
        test ecx, ecx
        je public_62c5667
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+4], edx
        jmp dword ptr ds : [eax+0x34]
        public_62c5667 : nop
        ret 4
        UNREACHABLE_TRAP(0x62c5650)
    }
}

#undef public_62c5667
