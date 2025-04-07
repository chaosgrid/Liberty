#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209d30);

PROC_DECLARE(0x6209d30, internal_6209d30, public_6209d30);
extern "C" NAKED register_t __cdecl internal_6209d30()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        ret 4
        UNREACHABLE_TRAP(0x6209d30)
    }
}
