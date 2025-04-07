#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209fa0);

PROC_DECLARE(0x6209fa0, internal_6209fa0, public_6209fa0);
extern "C" NAKED register_t __cdecl internal_6209fa0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        add eax, 0xFFFFFFF8
        mov dword ptr ds : [ecx], eax
        mov ecx, eax
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 4
        UNREACHABLE_TRAP(0x6209fa0)
    }
}
