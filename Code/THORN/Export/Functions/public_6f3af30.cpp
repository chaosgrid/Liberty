#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3af30);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

PROC_DECLARE(0x6f3af30, internal_6f3af30, public_6f3af30);
extern "C" NAKED register_t __cdecl internal_6f3af30()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        push eax
        call public_6f57e26
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f3af30)
    }
}
