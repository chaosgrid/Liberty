#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_415c60);
CLANG_FORWARD_PROC_SYMBOL(public_418a92);

PROC_DECLARE(0x415c60, internal_415c60, public_415c60);
extern "C" NAKED register_t __cdecl internal_415c60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        push 0xA0
        mov esi, ecx
        call public_418a92
        mov dword ptr ds : [esi], offset public_41e628
        mov dword ptr ds : [esi+0x60], 0
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x415c60)
    }
}
