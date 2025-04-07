#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6f25070);
CLANG_FORWARD_PROC_SYMBOL(public_6f4bc00);

PROC_DECLARE(0x6f25070, internal_6f25070, public_6f25070);
extern "C" NAKED register_t __cdecl internal_6f25070()
{
    __asm
    {
        xor eax, eax
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi], offset public_6f5a1ec
        mov eax, dword ptr ds : [public_6f61dfc]
        push eax
        call public_6f4bc00
        add esp, 4
        mov dword ptr ds : [esi+0x10], eax
        call public_6f24ce0
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f25070)
    }
}
