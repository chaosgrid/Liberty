#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d46396);
CLANG_FORWARD_PROC_SYMBOL(public_6d463d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d46463);
CLANG_FORWARD_PROC_SYMBOL(public_6d4649a);
CLANG_FORWARD_PROC_SYMBOL(public_6d464ab);

PROC_DECLARE(0x6d464ab, internal_6d464ab, public_6d464ab);
extern "C" NAKED register_t __cdecl internal_6d464ab()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+4]
        push 0x18
        push 0
        push esi
        call dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x18C], eax
        and byte ptr ds : [eax+0x10], 0
        and byte ptr ds : [eax+0x11], 0
        add esp, 0xC
        mov dword ptr ds : [eax], offset _public_6d463d0
        mov dword ptr ds : [eax+4], offset _public_6d46463
        mov dword ptr ds : [eax+8], offset _public_6d46396
        mov dword ptr ds : [eax+0xC], offset _public_6d4649a
        mov byte ptr ds : [eax+0x14], 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d464ab)
    }
}
