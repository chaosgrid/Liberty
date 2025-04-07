#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52920);
CLANG_FORWARD_PROC_SYMBOL(public_6f54590);
CLANG_FORWARD_PROC_SYMBOL(public_6f547e0);

#define public_6f54801 _public_6f54801

PROC_DECLARE(0x6f547e0, internal_6f547e0, public_6f547e0);
extern "C" NAKED register_t __cdecl internal_6f547e0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp dword ptr ds : [esi+4], 0x3D
        jne public_6f54801
        push esi
        call public_6f52920
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push esi
        call public_6f54590
        add esp, 0xC
        pop esi
        ret 
        public_6f54801 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f547e0)
    }
}

#undef public_6f54801
