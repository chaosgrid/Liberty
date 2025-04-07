#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c41f0);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a66);

PROC_DECLARE(0x65c41f0, internal_65c41f0, public_65c41f0);
extern "C" NAKED register_t __cdecl internal_65c41f0()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push esi
        mov esi, ecx
        push 0xC
        mov byte ptr ds : [esi+4], al
        call public_65c6a66
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        lea ecx, ds:[esi+0x10]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], 0
        push ecx
        mov dword ptr ds : [esi], offset public_65c74b4
        call dword ptr ds : [public_65c7018]
        push 0
        push 0
        push 1
        push 0
        call dword ptr ds : [public_65c7014]
        mov dword ptr ds : [esi+0x28], eax
        mov eax, esi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x65c41f0)
    }
}
