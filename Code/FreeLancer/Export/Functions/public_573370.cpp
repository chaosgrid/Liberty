#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_573370);
CLANG_FORWARD_PROC_SYMBOL(public_579890);

PROC_DECLARE(0x573370, internal_573370, public_573370);
extern "C" NAKED register_t __cdecl internal_573370()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0xE0]
        push edi
        call public_579890
        mov ecx, dword ptr ds : [esi+0xE4]
        push edi
        call public_579890
        mov ecx, dword ptr ds : [esi+0xE8]
        push edi
        call public_579890
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x573370)
    }
}
