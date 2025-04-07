#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62398b0);

PROC_DECLARE(0x62398b0, internal_62398b0, public_62398b0);
extern "C" NAKED register_t __cdecl internal_62398b0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp], 0
        mov dword ptr ds : [eax], ecx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62398b0)
    }
}
