#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806a20);
CLANG_FORWARD_PROC_SYMBOL(public_6807560);
CLANG_FORWARD_PROC_SYMBOL(public_6807710);
CLANG_FORWARD_PROC_SYMBOL(public_680a850);

#define public_680772d _public_680772d

PROC_DECLARE(0x6807710, internal_6807710, public_6807710);
extern "C" NAKED register_t __cdecl internal_6807710()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp dword ptr ds : [esi+4], 0x114
        push edi
        je public_680772d
/*FIXUP push offset public_680dc10 @0x680771f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680dc10
        push esi
        call public_680a850
        add esp, 8
        public_680772d : nop
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [esi+8]
        push eax
        push ecx
        call public_6807560
        push esi
        mov edi, eax
        call public_6806a20
        add esp, 0xC
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6807710)
    }
}

#undef public_680772d
