#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f527a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f52dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f52e20);
CLANG_FORWARD_PROC_SYMBOL(public_6f52eb0);

PROC_DECLARE(0x6f52dd0, internal_6f52dd0, public_6f52dd0);
extern "C" NAKED register_t __cdecl internal_6f52dd0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        push edi
        push ebx
        call public_6f52eb0
        mov esi, dword ptr ss : [esp+0x14]
        mov edi, eax
        mov eax, dword ptr ds : [esi+8]
        push edi
        push eax
        call public_6f527a0
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi+8]
        push ecx
        mov ecx, dword ptr ds : [eax+8]
        push ebx
        push edx
        push ecx
        push esi
        call public_6f52e20
        mov esi, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+8]
        add esp, 0x20
        add eax, edi
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f52dd0)
    }
}
