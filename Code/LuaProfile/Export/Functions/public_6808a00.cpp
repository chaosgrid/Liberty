#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68074b0);
CLANG_FORWARD_PROC_SYMBOL(public_6808a00);

#define public_6808a21 _public_6808a21

PROC_DECLARE(0x6808a00, internal_6808a00, public_6808a00);
extern "C" NAKED register_t __cdecl internal_6808a00()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp dword ptr ds : [esi], 2
        jne public_6808a21
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+8]
        push eax
        push ecx
        call public_68074b0
        add esp, 8
        mov dword ptr ds : [esi], 3
        public_6808a21 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6808a00)
    }
}

#undef public_6808a21
