#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4ddea);
CLANG_FORWARD_PROC_SYMBOL(public_6d4e588);

PROC_DECLARE(0x6d4e588, internal_6d4e588, public_6d4e588);
extern "C" NAKED register_t __cdecl internal_6d4e588()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [edi+0x1A4]
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [edi+0x74], eax
        push dword ptr ds : [esi+0x14]
        call public_6d4ddea
        pop ecx
        pop edi
        mov byte ptr ds : [esi+0x1C], 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d4e588)
    }
}
