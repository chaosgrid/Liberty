#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c57a0);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a66);

PROC_DECLARE(0x65c57a0, internal_65c57a0, public_65c57a0);
extern "C" NAKED register_t __cdecl internal_65c57a0()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push esi
        mov esi, ecx
        push 0xC
        mov byte ptr ds : [esi], al
        call public_65c6a66
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        add esp, 4
        mov dword ptr ds : [esi+8], 0
        mov eax, esi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x65c57a0)
    }
}
