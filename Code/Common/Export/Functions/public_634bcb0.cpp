#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634bcb0);

PROC_DECLARE(0x634bcb0, internal_634bcb0, public_634bcb0);
extern "C" NAKED register_t __cdecl internal_634bcb0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], offset public_639c3fc
        mov dword ptr ds : [eax+4], ecx
        ret 4
        UNREACHABLE_TRAP(0x634bcb0)
    }
}
