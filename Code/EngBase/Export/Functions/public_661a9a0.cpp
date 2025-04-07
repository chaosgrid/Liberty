#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661a9a0);

PROC_DECLARE(0x661a9a0, internal_661a9a0, public_661a9a0);
extern "C" NAKED register_t __cdecl internal_661a9a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x50]
        mov dword ptr ss : [esp+4], eax
        mov ecx, dword ptr ds : [eax]
        jmp dword ptr ds : [ecx+8]
        UNREACHABLE_TRAP(0x661a9a0)
    }
}
