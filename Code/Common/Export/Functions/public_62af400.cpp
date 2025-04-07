#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62af400);

PROC_DECLARE(0x62af400, internal_62af400, public_62af400);
extern "C" NAKED register_t __cdecl internal_62af400()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, ecx
        mov ecx, esi
        call dword ptr ds : [eax+0xC]
        mov dword ptr ds : [edi+0x88], esi
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62af400)
    }
}
