#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecc850);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

PROC_DECLARE(0x6ecc850, internal_6ecc850, public_6ecc850);
extern "C" NAKED register_t __cdecl internal_6ecc850()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push eax
        call public_6ed0c50
        mov dword ptr ds : [esi], 0
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        call public_6ed0c50
        add esp, 8
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        mov dword ptr ds : [esi+0x10], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ecc850)
    }
}
