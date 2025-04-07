#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6203400);

PROC_DECLARE(0x6203400, internal_6203400, public_6203400);
extern "C" NAKED register_t __cdecl internal_6203400()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+8]
        inc ecx
        mov dword ptr ds : [eax+8], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6203400)
    }
}
