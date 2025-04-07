#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6327440);

PROC_DECLARE(0x6327440, internal_6327440, public_6327440);
extern "C" NAKED register_t __cdecl internal_6327440()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x1C], edx
        mov edx, dword ptr ds : [eax+0xC]
        push esi
        mov esi, dword ptr ds : [eax+8]
        add eax, 0x10
        mov dword ptr ds : [ecx+0x2C], esi
        mov dword ptr ds : [ecx+0x30], edx
        mov edx, dword ptr ds : [ecx]
        pop esi
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [edx+0x20]
        UNREACHABLE_TRAP(0x6327440)
    }
}
