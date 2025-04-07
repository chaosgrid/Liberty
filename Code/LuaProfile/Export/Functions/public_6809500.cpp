#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801d10);
CLANG_FORWARD_PROC_SYMBOL(public_6801f90);
CLANG_FORWARD_PROC_SYMBOL(public_68020d0);
CLANG_FORWARD_PROC_SYMBOL(public_68022b0);
CLANG_FORWARD_PROC_SYMBOL(public_6805df0);

#define public_680954d _public_680954d

PROC_DECLARE(0x6809500, internal_6809500, public_6809500);
extern "C" NAKED register_t __cdecl internal_6809500()
{
    __asm
    {
        sub esp, 0x258
        push esi
/*FIXUP push offset public_680e210 @0x6809507*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e210
        call public_6801f90
        mov esi, eax
        push esi
        call public_68020d0
        add esp, 8
        test eax, eax
        je public_680954d
        push 0
        push 1
        call public_6805df0
        push eax
        lea eax, ss:[esp+0x10]
/*FIXUP push offset public_680e218 @0x680952e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e218
        push eax
        call dword ptr ds : [public_680c060]
        lea ecx, ss:[esp+0x18]
        push ecx
        call public_68022b0
        push esi
        call public_6801d10
        add esp, 0x1C
        public_680954d : nop
        pop esi
        add esp, 0x258
        ret 
        UNREACHABLE_TRAP(0x6809500)
    }
}

#undef public_680954d
