#include "Common-PCH.h"

PROC_DECLARE(0x6307810, internal_6307810, public_6307810);
extern "C" NAKED register_t __cdecl internal_6307810()
{
    __asm
    {
        sub esp, 0x3C
        push esi
        mov dword ptr ss : [esp+4], 0
        mov eax, dword ptr ss : [esp+4]
        push edi
        mov dword ptr ss : [esp+0xC], 0
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x10], 0
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, 0xC
        lea esi, ss:[esp+0x14]
        mov edi, eax
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x40], 0x3F800000
        mov dword ptr ss : [esp+0x30], 0x3F800000
        mov dword ptr ss : [esp+0x20], 0x3F800000
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x24], 0
        rep movsd
        pop edi
        pop esi
        add esp, 0x3C
        ret 
        UNREACHABLE_TRAP(0x6307810)
    }
}
