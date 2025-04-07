#include "Content-PCH.h"

PROC_DECLARE(0x6f1b8a0, internal_6f1b8a0, public_6f1b8a0);
extern "C" NAKED register_t __cdecl internal_6f1b8a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f1b8a0)
    }
}
