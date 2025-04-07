#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62044a0);

PROC_DECLARE(0x62044a0, internal_62044a0, public_62044a0);
extern "C" NAKED register_t __cdecl internal_62044a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+4], eax
        mov ecx, dword ptr ds : [eax]
        jmp dword ptr ds : [ecx]
        UNREACHABLE_TRAP(0x62044a0)
    }
}
