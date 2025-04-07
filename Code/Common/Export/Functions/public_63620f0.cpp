#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6361f00);
CLANG_FORWARD_PROC_SYMBOL(public_63620f0);

PROC_DECLARE(0x63620f0, internal_63620f0, public_63620f0);
extern "C" NAKED register_t __cdecl internal_63620f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        push eax
        call public_6361f00
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x20], offset public_63a5820
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ds : [esi], offset public_63a5814
        mov dword ptr ds : [esi+0x20], offset public_63a5810
        mov eax, esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x63620f0)
    }
}
