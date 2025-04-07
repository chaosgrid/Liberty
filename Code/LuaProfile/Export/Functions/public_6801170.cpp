#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68026d0);
CLANG_FORWARD_PROC_SYMBOL(public_6803020);

#define public_680117e _public_680117e

PROC_DECLARE(0x6801170, internal_6801170, public_6801170);
extern "C" NAKED register_t __cdecl internal_6801170()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_680117e
        or eax, 0xFFFFFFFF
        ret 0xC
        public_680117e : nop
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+8]
        push esi
        push ecx
        call public_68026d0
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        mov esi, eax
        call public_6803020
        push esi
        call public_68026d0
        add esp, 0xC
        xor eax, eax
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6801170)
    }
}

#undef public_680117e
