#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eccc20);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

PROC_DECLARE(0x6eccc20, internal_6eccc20, public_6eccc20);
extern "C" NAKED register_t __cdecl internal_6eccc20()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        push eax
        call public_6fa8fe0
        xor eax, eax
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x1C], eax
        add esp, 4
        mov dword ptr ds : [esi], offset public_6fb5a90
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6eccc20)
    }
}
