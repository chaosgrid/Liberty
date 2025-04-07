#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209dc0);

PROC_DECLARE(0x6209dc0, internal_6209dc0, public_6209dc0);
extern "C" NAKED register_t __cdecl internal_6209dc0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        ret 4
        UNREACHABLE_TRAP(0x6209dc0)
    }
}
