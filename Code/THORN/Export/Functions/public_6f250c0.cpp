#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f250c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4bc00);

PROC_DECLARE(0x6f250c0, internal_6f250c0, public_6f250c0);
extern "C" NAKED register_t __cdecl internal_6f250c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        push eax
        mov dword ptr ds : [esi], offset public_6f5a1ec
        call public_6f4bc00
        add esp, 4
        mov dword ptr ds : [esi], offset public_6f5a204
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f250c0)
    }
}
