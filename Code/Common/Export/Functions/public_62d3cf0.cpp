#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d3690);
CLANG_FORWARD_PROC_SYMBOL(public_62e92d0);

PROC_DECLARE(0x62d3cf0, internal_62d3cf0, public_62d3cf0);
extern "C" NAKED register_t __cdecl internal_62d3cf0()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push eax
        add ecx, 0x18
        call public_62e92d0
        lea ecx, ss:[esp+4]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        call public_62d3690
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x62d3cf0)
    }
}
