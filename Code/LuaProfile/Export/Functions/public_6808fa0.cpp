#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6805a80);
CLANG_FORWARD_PROC_SYMBOL(public_6806460);
CLANG_FORWARD_PROC_SYMBOL(public_6808fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6809000);
CLANG_FORWARD_PROC_SYMBOL(public_68090b0);
CLANG_FORWARD_PROC_SYMBOL(public_6809140);
CLANG_FORWARD_PROC_SYMBOL(public_6809180);
CLANG_FORWARD_PROC_SYMBOL(public_6809200);

#define public_6808fda _public_6808fda

PROC_DECLARE(0x6808fa0, internal_6808fa0, public_6808fa0);
extern "C" NAKED register_t __cdecl internal_6808fa0()
{
    __asm
    {
        push esi
        push edi
        call public_6806460
        mov edi, dword ptr ss : [esp+0xC]
/*FIXUP push offset public_680ddcc @0x6808fab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680ddcc
        push edi
        mov esi, eax
        call public_6809000
        push edi
        mov dword ptr ds : [esi+0x14], eax
        call public_6809140
        add esp, 0xC
        test eax, eax
        mov dword ptr ds : [esi+0x18], eax
        jne public_6808fda
        mov eax, dword ptr ds : [edi+0x10]
        push eax
        call public_6805a80
        add esp, 4
        mov dword ptr ds : [esi+0x18], eax
        public_6808fda : nop
        push edi
        call public_68090b0
        push edi
        push esi
        mov dword ptr ds : [esi+0x10], eax
        call public_6809180
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        push edi
        push esi
        call public_6809200
        add esp, 0x18
        pop edi
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6808fa0)
    }
}

#undef public_6808fda
