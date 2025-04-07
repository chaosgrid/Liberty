#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635c250);

PROC_DECLARE(0x6360c40, internal_6360c40, public_6360c40);
extern "C" NAKED register_t __cdecl internal_6360c40()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi]
        push edi
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x90]
        mov edi, dword ptr ds : [edx+0x90]
        push esi
        call public_635c250
        push esi
        mov ecx, edi
        call public_635c250
        pop edi
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6360c40)
    }
}
