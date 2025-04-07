#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f85550);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

PROC_DECLARE(0x6f85550, internal_6f85550, public_6f85550);
extern "C" NAKED register_t __cdecl internal_6f85550()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_6fbc700
        mov eax, dword ptr ds : [esi+0x24]
        push eax
        call public_6fa8fe0
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ds : [esi+0x28], eax
        mov dword ptr ds : [esi+0x2C], eax
        lea ecx, ds:[esi+4]
        pop esi
        jmp dword ptr ds : [public_6fb3034]
        UNREACHABLE_TRAP(0x6f85550)
    }
}
