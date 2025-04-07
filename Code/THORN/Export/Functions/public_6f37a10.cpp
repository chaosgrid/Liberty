#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f37a10);

PROC_DECLARE(0x6f37a10, internal_6f37a10, public_6f37a10);
extern "C" NAKED register_t __cdecl internal_6f37a10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x70]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx]
        UNREACHABLE_TRAP(0x6f37a10)
    }
}
