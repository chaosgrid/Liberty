#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343f80);
CLANG_FORWARD_PROC_SYMBOL(public_63525f0);

PROC_DECLARE(0x63525f0, internal_63525f0, public_63525f0);
extern "C" NAKED register_t __cdecl internal_63525f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        lea ecx, ds:[eax-1]
        mov dword ptr ds : [esi+4], ecx
        xor ecx, ecx
        push 0xC
        push eax
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+0x10], ecx
        call public_6343f80
        mov dword ptr ds : [esi+0xC], eax
        add esp, 8
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x63525f0)
    }
}
