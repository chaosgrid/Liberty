#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef6330);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

PROC_DECLARE(0x6ef6330, internal_6ef6330, public_6ef6330);
extern "C" NAKED register_t __cdecl internal_6ef6330()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x28]
        push edi
        push eax
        call public_6fa8fe0
        xor edi, edi
        mov dword ptr ds : [esi+0x28], edi
        mov dword ptr ds : [esi+0x2C], edi
        mov dword ptr ds : [esi+0x30], edi
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        add esp, 8
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0xC], edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ef6330)
    }
}
