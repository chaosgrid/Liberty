#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f90);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

PROC_DECLARE(0x6ea9f90, internal_6ea9f90, public_6ea9f90);
extern "C" NAKED register_t __cdecl internal_6ea9f90()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x24]
        push edi
        push eax
        call public_6fa8fe0
        xor edi, edi
        mov dword ptr ds : [esi+0x24], edi
        mov dword ptr ds : [esi+0x28], edi
        mov dword ptr ds : [esi+0x2C], edi
        mov ecx, dword ptr ds : [esi+0x14]
        push ecx
        call public_6fa8fe0
        add esp, 8
        mov dword ptr ds : [esi+0x14], edi
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x1C], edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ea9f90)
    }
}
