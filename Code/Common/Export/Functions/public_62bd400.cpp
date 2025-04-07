#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bd400);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

PROC_DECLARE(0x62bd400, internal_62bd400, public_62bd400);
extern "C" NAKED register_t __cdecl internal_62bd400()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_639ef0c
        mov eax, dword ptr ds : [esi+0x18]
        push eax
        call public_6391d5a
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi+0x20], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62bd400)
    }
}
