#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f90b10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

PROC_DECLARE(0x6f90b10, internal_6f90b10, public_6f90b10);
extern "C" NAKED register_t __cdecl internal_6f90b10()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push esi
        mov esi, ecx
        push 0xC
        mov byte ptr ds : [esi+4], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], 0
        add esp, 4
        mov dword ptr ds : [esi], offset public_6fbc7cc
        mov eax, esi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f90b10)
    }
}
