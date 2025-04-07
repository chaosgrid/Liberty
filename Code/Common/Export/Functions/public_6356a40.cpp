#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343f80);
CLANG_FORWARD_PROC_SYMBOL(public_6356a40);

PROC_DECLARE(0x6356a40, internal_6356a40, public_6356a40);
extern "C" NAKED register_t __cdecl internal_6356a40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push eax
        push 4
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi], ecx
        mov dword ptr ds : [esi+8], edx
        call public_6343f80
        mov dword ptr ds : [esi+0xC], eax
        add esp, 8
        mov eax, esi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6356a40)
    }
}
