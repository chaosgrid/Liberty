#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343f80);
CLANG_FORWARD_PROC_SYMBOL(public_63522a0);

PROC_DECLARE(0x63522a0, internal_63522a0, public_63522a0);
extern "C" NAKED register_t __cdecl internal_63522a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        lea ecx, ds:[eax-1]
        push 8
        push eax
        mov dword ptr ds : [esi], offset public_63a5648
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], 0
        call public_6343f80
        mov dword ptr ds : [esi+0xC], eax
        add esp, 8
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x63522a0)
    }
}
