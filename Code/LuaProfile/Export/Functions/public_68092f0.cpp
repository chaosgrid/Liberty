#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6808ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6809050);
CLANG_FORWARD_PROC_SYMBOL(public_6809110);
CLANG_FORWARD_PROC_SYMBOL(public_68092f0);

#define public_6809320 _public_6809320

PROC_DECLARE(0x68092f0, internal_68092f0, public_68092f0);
extern "C" NAKED register_t __cdecl internal_68092f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x108
        test eax, eax
        je public_6809320
        mov ecx, dword ptr ss : [esp+0x10C]
        push 8
        lea eax, ss:[esp+4]
        push eax
        push ecx
        call public_6809110
        fld qword ptr ss : [esp+0xC]
        add esp, 0xC
        add esp, 0x108
        ret 
        public_6809320 : nop
        push esi
        mov esi, dword ptr ss : [esp+0x110]
        push edi
        push esi
        call public_6809050
        mov edi, eax
        push edi
        lea edx, ss:[esp+0x18]
        push edx
        push esi
        call public_6809110
        mov eax, dword ptr ds : [esi+0x10]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        mov byte ptr ss : [esp+edi+0x28], 0
        call public_6808ed0
        add esp, 0x18
        pop edi
        pop esi
        add esp, 0x108
        ret 
        UNREACHABLE_TRAP(0x68092f0)
    }
}

#undef public_6809320
