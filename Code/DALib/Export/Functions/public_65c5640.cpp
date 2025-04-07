#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c5640);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a66);

PROC_DECLARE(0x65c5640, internal_65c5640, public_65c5640);
extern "C" NAKED register_t __cdecl internal_65c5640()
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
        mov dword ptr ds : [esi], offset public_65c7544
        call dword ptr ds : [public_65c7018]
        mov eax, esi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x65c5640)
    }
}
