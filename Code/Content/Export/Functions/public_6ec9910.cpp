#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec9910);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

PROC_DECLARE(0x6ec9910, internal_6ec9910, public_6ec9910);
extern "C" NAKED register_t __cdecl internal_6ec9910()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x58]
        push eax
        call public_6fa8fe0
        xor eax, eax
        mov dword ptr ds : [esi+0x58], eax
        mov dword ptr ds : [esi+0x5C], eax
        mov dword ptr ds : [esi+0x60], eax
        add esp, 4
        mov dword ptr ds : [esi], offset public_6fb5a90
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ec9910)
    }
}
