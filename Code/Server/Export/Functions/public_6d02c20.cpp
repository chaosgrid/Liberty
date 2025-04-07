#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d02c20);

PROC_DECLARE(0x6d02c20, internal_6d02c20, public_6d02c20);
extern "C" NAKED register_t __cdecl internal_6d02c20()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+0x10], ecx
        call dword ptr ds : [public_6d64614]
        push 1
        lea ecx, ds:[esi+0xC]
        call dword ptr ds : [public_6d64188]
        mov ecx, dword ptr ds : [esi+0x10]
        xor eax, eax
        test ecx, ecx
        setne al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d02c20)
    }
}
