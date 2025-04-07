#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620e9c0);

PROC_DECLARE(0x620e9c0, internal_620e9c0, public_620e9c0);
extern "C" NAKED register_t __cdecl internal_620e9c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ss : [esp+8]
        push eax
        call dword ptr ds : [edx+0x44]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x620e9c0)
    }
}
