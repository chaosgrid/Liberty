#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68030f0);
CLANG_FORWARD_PROC_SYMBOL(public_68032f0);
CLANG_FORWARD_PROC_SYMBOL(public_6806610);

#define public_6803303 _public_6803303

PROC_DECLARE(0x68032f0, internal_68032f0, public_68032f0);
extern "C" NAKED register_t __cdecl internal_68032f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        sub esp, 0x114
        test eax, eax
        jne public_6803303
        mov eax, offset public_680d4f0
        public_6803303 : nop
        push esi
        mov esi, dword ptr ss : [esp+0x11C]
        push eax
        mov eax, dword ptr ss : [esp+0x124]
        push eax
        lea ecx, ss:[esp+0xC]
        push esi
        push ecx
        call public_6806610
        mov al, byte ptr ds : [esi]
        xor edx, edx
        cmp al, 0x1B
        sete dl
        lea eax, ss:[esp+0x14]
        push edx
        push eax
        call public_68030f0
        add esp, 0x18
        pop esi
        add esp, 0x114
        ret 
        UNREACHABLE_TRAP(0x68032f0)
    }
}

#undef public_6803303
