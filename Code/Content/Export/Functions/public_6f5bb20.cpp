#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f5bb20);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

PROC_DECLARE(0x6f5bb20, internal_6f5bb20, public_6f5bb20);
/* CHUNK of public_6f5b690 */
extern "C" NAKED register_t __cdecl internal_6f5bb20()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x50]
        push eax
        call public_6fa8fe0
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [esi+0x50], eax
        mov dword ptr ds : [esi+0x54], eax
        mov dword ptr ds : [esi+0x58], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f5bb20)
    }
}
