#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6344d30);
CLANG_FORWARD_PROC_SYMBOL(public_6346bb0);

PROC_DECLARE(0x62841c0, internal_62841c0, public_62841c0);
extern "C" NAKED register_t __cdecl internal_62841c0()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+0x54]
        mov eax, dword ptr ds : [ecx+0x98]
        add eax, 0x14
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+8], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0xC], edx
        mov eax, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, edx
        push eax
        mov dword ptr ss : [esp+0x14], edx
        call public_6344d30
        mov edx, dword ptr ds : [esi+0x54]
        lea ecx, ss:[esp+4]
        push ecx
        mov ecx, dword ptr ds : [edx+0x98]
        call public_6346bb0
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62841c0)
    }
}
