#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d20f0);

PROC_DECLARE(0x62cd5e0, internal_62cd5e0, public_62cd5e0);
extern "C" NAKED register_t __cdecl internal_62cd5e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x2C]
        lea ecx, ds:[esi+0x2C]
        call dword ptr ds : [eax+0x10]
        mov ecx, esi
        pop esi
        jmp public_62d20f0
        UNREACHABLE_TRAP(0x62cd5e0)
    }
}
