#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f17d0);

PROC_DECLARE(0x65f17d0, internal_65f17d0, public_65f17d0);
extern "C" NAKED register_t __cdecl internal_65f17d0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        inc eax
        mov dword ptr ds : [ecx+0xC], eax
        ret 
        UNREACHABLE_TRAP(0x65f17d0)
    }
}
