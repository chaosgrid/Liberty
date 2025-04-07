#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f990);
CLANG_FORWARD_PROC_SYMBOL(public_6f4fc10);
CLANG_FORWARD_PROC_SYMBOL(public_6f4fe10);

PROC_DECLARE(0x6f4fc10, internal_6f4fc10, public_6f4fc10);
extern "C" NAKED register_t __cdecl internal_6f4fc10()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        lea eax, ds:[edi+2]
        shl eax, 4
        push eax
        push 0
        call public_6f4fe10
        mov ecx, dword ptr ds : [public_6f61e28]
        mov esi, eax
        add ecx, 0x48
        push esi
        push ecx
        call public_6f4f990
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax+0x78]
        add esp, 0x10
        inc ecx
        mov dword ptr ds : [eax+0x78], ecx
        mov dword ptr ds : [esi+8], edi
        pop edi
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4fc10)
    }
}
