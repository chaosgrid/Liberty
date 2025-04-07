#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f99890);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

PROC_DECLARE(0x6f99890, internal_6f99890, public_6f99890);
extern "C" NAKED register_t __cdecl internal_6f99890()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+4], offset public_6fbc700
        mov eax, dword ptr ds : [esi+0x28]
        push eax
        call public_6fa8fe0
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [esi+0x28], eax
        mov dword ptr ds : [esi+0x2C], eax
        mov dword ptr ds : [esi+0x30], eax
        lea ecx, ds:[esi+8]
        pop esi
        jmp dword ptr ds : [public_6fb3034]
        UNREACHABLE_TRAP(0x6f99890)
    }
}
