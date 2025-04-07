#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee8580);

PROC_DECLARE(0x6ee8580, internal_6ee8580, public_6ee8580);
extern "C" NAKED register_t __cdecl internal_6ee8580()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x13C]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+4]
        UNREACHABLE_TRAP(0x6ee8580)
    }
}
