#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6347e60);
CLANG_FORWARD_PROC_SYMBOL(public_6349510);
CLANG_FORWARD_PROC_SYMBOL(public_634cb20);

PROC_DECLARE(0x634cb20, internal_634cb20, public_634cb20);
extern "C" NAKED register_t __cdecl internal_634cb20()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        fld dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi+8]
        fld dword ptr ds : [edi]
        mov esi, ecx
        mov ecx, eax
        fstp dword ptr ds : [esi+0xB4]
        mov dword ptr ds : [esi+0xBC], ecx
        mov ecx, edi
        fstp dword ptr ds : [esi+0xB8]
        mov dword ptr ss : [esp+0xC], eax
        call public_6347e60
        fstp dword ptr ds : [esi+0xC4]
        mov ecx, dword ptr ds : [esi]
        push edi
        call public_6349510
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x634cb20)
    }
}
