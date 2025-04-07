#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eab740);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

PROC_DECLARE(0x6eab740, internal_6eab740, public_6eab740);
extern "C" NAKED register_t __cdecl internal_6eab740()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x18]
        push edi
        push eax
        call public_6fa8fe0
        xor edi, edi
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x1C], edi
        mov dword ptr ds : [esi+0x20], edi
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        call public_6fa8fe0
        add esp, 8
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0xC], edi
        mov dword ptr ds : [esi+0x10], edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6eab740)
    }
}
