#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634cc80);
CLANG_FORWARD_PROC_SYMBOL(public_63605a0);
CLANG_FORWARD_PROC_SYMBOL(public_6360a40);

PROC_DECLARE(0x634cc80, internal_634cc80, public_634cc80);
extern "C" NAKED register_t __cdecl internal_634cc80()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0xFC]
        mov eax, dword ptr ds : [esi+0xF8]
        mov dword ptr ss : [esp+8], ecx
        fld dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+4], eax
        fadd dword ptr ss : [esp+4]
        push ecx
        mov ecx, dword ptr ds : [esi+0x8C]
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp]
        call public_63605a0
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+4]
        push edx
        push esi
        call public_6360a40
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x634cc80)
    }
}
