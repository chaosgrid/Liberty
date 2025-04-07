#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d75c0);

PROC_DECLARE(0x62d75c0, internal_62d75c0, public_62d75c0);
extern "C" NAKED register_t __cdecl internal_62d75c0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov dword ptr ds : [ecx+0xA0], 4
        lea edi, ds:[ecx+0x34]
        mov ecx, 9
        rep movsd
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62d75c0)
    }
}
