#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c2f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4d4d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4dfe0);

PROC_DECLARE(0x6f4dfe0, internal_6f4dfe0, public_6f4dfe0);
extern "C" NAKED register_t __cdecl internal_6f4dfe0()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+4]
        push eax
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax]
        sub ecx, dword ptr ds : [eax+4]
        sar ecx, 4
        sub ecx, esi
        push ecx
        push esi
        call public_6f4d4d0
        push esi
        call public_6f4c2f0
        mov edx, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax]
        add esp, 0x10
        add ecx, 0x10
        mov dword ptr ds : [eax], ecx
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f4dfe0)
    }
}
