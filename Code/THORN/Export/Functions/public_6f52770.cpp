#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52770);
CLANG_FORWARD_PROC_SYMBOL(public_6f527a0);

PROC_DECLARE(0x6f52770, internal_6f52770, public_6f52770);
extern "C" NAKED register_t __cdecl internal_6f52770()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 1
        push esi
        call public_6f527a0
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ss : [esp+0x14]
        mov byte ptr ds : [ecx+edx], al
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        inc eax
        mov dword ptr ds : [esi+8], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f52770)
    }
}
