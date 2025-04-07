#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f378d0);

PROC_DECLARE(0x6f378d0, internal_6f378d0, public_6f378d0);
extern "C" NAKED register_t __cdecl internal_6f378d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x70]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx]
        UNREACHABLE_TRAP(0x6f378d0)
    }
}
