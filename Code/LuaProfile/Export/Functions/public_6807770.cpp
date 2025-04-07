#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6805a80);
CLANG_FORWARD_PROC_SYMBOL(public_68067d0);
CLANG_FORWARD_PROC_SYMBOL(public_68068d0);
CLANG_FORWARD_PROC_SYMBOL(public_6806a40);
CLANG_FORWARD_PROC_SYMBOL(public_6807230);
CLANG_FORWARD_PROC_SYMBOL(public_68072a0);
CLANG_FORWARD_PROC_SYMBOL(public_6807770);
CLANG_FORWARD_PROC_SYMBOL(public_6807810);
CLANG_FORWARD_PROC_SYMBOL(public_68078d0);
CLANG_FORWARD_PROC_SYMBOL(public_6808720);

#define public_68077cb _public_68077cb

PROC_DECLARE(0x6807770, internal_6807770, public_6807770);
extern "C" NAKED register_t __cdecl internal_6807770()
{
    __asm
    {
        sub esp, 0x444
        push esi
        mov esi, dword ptr ss : [esp+0x44C]
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+0x18]
        push edi
        push edx
        lea eax, ss:[esp+0xC]
        push eax
        push esi
        call public_68067d0
        mov ecx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x464]
        push 0x28
        push esi
        mov dword ptr ds : [ecx+0x14], edi
        call public_6807230
        mov eax, dword ptr ss : [esp+0x468]
        add esp, 0x14
        test eax, eax
        je public_68077cb
/*FIXUP push offset public_680dc20 @0x68077b7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680dc20
        call public_6805a80
        push eax
        push esi
        call public_6807810
        add esp, 0xC
        public_68077cb : nop
        push esi
        call public_6808720
        push 0x29
        push esi
        call public_6807230
        push esi
        call public_6806a40
        push edi
        push 0x109
        push 0x108
        push esi
        call public_68072a0
        push esi
        call public_68068d0
        lea edx, ss:[esp+0x2C]
        push edx
        push esi
        call public_68078d0
        add esp, 0x2C
        pop edi
        pop esi
        add esp, 0x444
        ret 
        UNREACHABLE_TRAP(0x6807770)
    }
}

#undef public_68077cb
