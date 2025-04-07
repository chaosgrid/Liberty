#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e6950);

PROC_DECLARE(0x62d4400, internal_62d4400, public_62d4400);
extern "C" NAKED register_t __cdecl internal_62d4400()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, ecx
        push edi
        mov edi, dword ptr ds : [eax+8]
        add edi, 0x1584
        mov ecx, 0xF6
        rep movsd
        mov ecx, dword ptr ds : [eax+8]
        call public_62e6950
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62d4400)
    }
}
