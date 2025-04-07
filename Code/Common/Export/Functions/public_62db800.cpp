#include "Common-PCH.h"

PROC_DECLARE(0x62db800, internal_62db800, public_62db800);
extern "C" NAKED register_t __cdecl internal_62db800()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov byte ptr ds : [ecx+8], 1
        lea edi, ds:[ecx+0xC]
        mov ecx, 0x16
        rep movsd
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62db800)
    }
}
