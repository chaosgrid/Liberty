#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634a3f0);
CLANG_FORWARD_PROC_SYMBOL(public_634a4e0);

PROC_DECLARE(0x634a4e0, internal_634a4e0, public_634a4e0);
extern "C" NAKED register_t __cdecl internal_634a4e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax+0x20]
        add edx, eax
        push edx
        call public_634a3f0
        ret 4
        UNREACHABLE_TRAP(0x634a4e0)
    }
}
