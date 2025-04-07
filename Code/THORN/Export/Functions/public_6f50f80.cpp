#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4e7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e820);
CLANG_FORWARD_PROC_SYMBOL(public_6f50f80);

PROC_DECLARE(0x6f50f80, internal_6f50f80, public_6f50f80);
extern "C" NAKED register_t __cdecl internal_6f50f80()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        push edi
        push esi
        call public_6f4e820
        mov ecx, dword ptr ds : [eax]
        mov ebx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x14], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x18], edx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x1C], ecx
        mov edx, dword ptr ds : [eax+0xC]
        push ebx
        push esi
        mov dword ptr ss : [esp+0x28], edx
        call public_6f4e820
        push eax
        push edi
        push esi
        call public_6f4e7f0
        lea eax, ss:[esp+0x28]
        push eax
        push ebx
        push esi
        call public_6f4e7f0
        add esp, 0x28
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f50f80)
    }
}
