#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6284e20);
CLANG_FORWARD_PROC_SYMBOL(public_63047d0);
CLANG_FORWARD_PROC_SYMBOL(public_6345530);

PROC_DECLARE(0x6284e20, internal_6284e20, public_6284e20);
extern "C" NAKED register_t __cdecl internal_6284e20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi+0x54]
        push eax
        add ecx, 0x84
        push 8
        push ecx
        call public_63047d0
        mov ecx, dword ptr ds : [esi+0x54]
        add esp, 0xC
        pop esi
        jmp public_6345530
        UNREACHABLE_TRAP(0x6284e20)
    }
}
