#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68068a0);
CLANG_FORWARD_PROC_SYMBOL(public_68073b0);

PROC_DECLARE(0x68073b0, internal_68073b0, public_68073b0);
extern "C" NAKED register_t __cdecl internal_68073b0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+8]
        push edi
        mov edi, dword ptr ds : [eax+8]
        push 2
        push eax
        call public_68068a0
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax+8]
        add ecx, 2
        add esp, 8
        mov dword ptr ds : [eax+8], ecx
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x68073b0)
    }
}
