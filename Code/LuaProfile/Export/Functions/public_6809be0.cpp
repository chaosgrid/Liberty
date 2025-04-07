#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68051d0);
CLANG_FORWARD_PROC_SYMBOL(public_6805a80);
CLANG_FORWARD_PROC_SYMBOL(public_6809be0);
CLANG_FORWARD_PROC_SYMBOL(public_6809c30);

#define public_6809c1f _public_6809c1f

PROC_DECLARE(0x6809be0, internal_6809be0, public_6809be0);
extern "C" NAKED register_t __cdecl internal_6809be0()
{
    __asm
    {
        sub esp, 0x10
        push esi
/*FIXUP push offset public_680d520 @0x6809be4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d520
        mov dword ptr ss : [esp+8], 0xFFFFFFFE
        call public_6805a80
        mov esi, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+8]
        push eax
        push esi
        call public_68051d0
        mov ecx, dword ptr ds : [eax+0x10]
        add eax, 0x10
        add esp, 0xC
        cmp ecx, 0xFFFFFFFF
        jne public_6809c1f
        fld qword ptr ds : [eax+8]
        pop esi
        add esp, 0x10
        ret 
        public_6809c1f : nop
        push esi
        call public_6809c30
        add esp, 4
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6809be0)
    }
}

#undef public_6809c1f
