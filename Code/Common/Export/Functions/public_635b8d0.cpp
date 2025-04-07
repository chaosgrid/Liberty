#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63480a0);
CLANG_FORWARD_PROC_SYMBOL(public_6348150);
CLANG_FORWARD_PROC_SYMBOL(public_635b8d0);

PROC_DECLARE(0x635b8d0, internal_635b8d0, public_635b8d0);
extern "C" NAKED register_t __cdecl internal_635b8d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, eax
        and ecx, 0xC
        push esi
        mov esi, dword ptr ds : [edx]
        push edi
        mov edi, dword ptr ds : [ecx+public_63ee4e0]
        mov edi, dword ptr ds : [edi+eax]
        mov ecx, dword ptr ds : [ecx+public_63ee4f0]
        mov ecx, dword ptr ds : [ecx+eax]
        mov eax, dword ptr ds : [eax]
        and edi, 0xFFFF
        and ecx, 0xFFFF
        shl edi, 4
        shl ecx, 4
        and eax, 0xFFFF
        add edi, esi
        add ecx, esi
        shl eax, 4
        add edi, edx
        push edi
        add ecx, edx
        add eax, esi
        mov esi, dword ptr ss : [esp+0x18]
        push ecx
        add eax, edx
        push eax
        mov ecx, esi
        call public_63480a0
        mov ecx, esi
        call public_6348150
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x635b8d0)
    }
}
