#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6345610);
CLANG_FORWARD_PROC_SYMBOL(public_6345690);
CLANG_FORWARD_PROC_SYMBOL(public_63457f0);
CLANG_FORWARD_PROC_SYMBOL(public_6356920);

PROC_DECLARE(0x6345610, internal_6345610, public_6345610);
extern "C" NAKED register_t __cdecl internal_6345610()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_63a5450
        mov eax, dword ptr ds : [edi+0x18]
        push eax
        call public_6345690
        push esi
        mov ecx, edi
        call public_63457f0
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        push eax
        call public_6356920
        add esp, 4
        mov dword ptr ds : [esi+0x14], eax
        pop edi
        mov eax, esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6345610)
    }
}
