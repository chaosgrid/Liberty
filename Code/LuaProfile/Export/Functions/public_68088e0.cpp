#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806a20);
CLANG_FORWARD_PROC_SYMBOL(public_6808690);
CLANG_FORWARD_PROC_SYMBOL(public_68088e0);

#define public_6808901 _public_6808901

PROC_DECLARE(0x68088e0, internal_68088e0, public_68088e0);
extern "C" NAKED register_t __cdecl internal_68088e0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp dword ptr ds : [esi+4], 0x3D
        jne public_6808901
        push esi
        call public_6806a20
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push esi
        call public_6808690
        add esp, 0xC
        pop esi
        ret 
        public_6808901 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x68088e0)
    }
}

#undef public_6808901
