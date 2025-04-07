#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f225f0);

PROC_DECLARE(0x6f347c0, internal_6f347c0, public_6f347c0);
extern "C" NAKED register_t __cdecl internal_6f347c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0xC]
        call public_6f225f0
        ret 4
        UNREACHABLE_TRAP(0x6f347c0)
    }
}
