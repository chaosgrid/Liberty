#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d463d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d46463);

PROC_DECLARE(0x6d46463, internal_6d46463, public_6d46463);
extern "C" NAKED register_t __cdecl internal_6d46463()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x18C]
        and byte ptr ds : [eax+0x10], 0
        and byte ptr ds : [eax+0x11], 0
        mov dword ptr ds : [eax], offset _public_6d463d0
        mov byte ptr ds : [eax+0x14], 1
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [esi+0x190]
        push esi
        call dword ptr ds : [eax]
        and dword ptr ds : [esi+0x8C], 0
        pop ecx
        pop ecx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d46463)
    }
}
