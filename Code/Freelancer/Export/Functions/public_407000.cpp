#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_407000);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

PROC_DECLARE(0x407000, internal_407000, public_407000);
extern "C" NAKED register_t __cdecl internal_407000()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x18]
        push edi
        push eax
        call public_5b7e1d
        xor edi, edi
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x1C], edi
        mov dword ptr ds : [esi+0x20], edi
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        call public_5b7e1d
        add esp, 8
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0xC], edi
        mov dword ptr ds : [esi+0x10], edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x407000)
    }
}
