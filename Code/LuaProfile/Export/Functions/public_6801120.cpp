#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801120);
CLANG_FORWARD_PROC_SYMBOL(public_6801cf0);
CLANG_FORWARD_PROC_SYMBOL(public_68020b0);
CLANG_FORWARD_PROC_SYMBOL(public_6802140);

#define public_680115f _public_680115f

PROC_DECLARE(0x6801120, internal_6801120, public_6801120);
extern "C" NAKED register_t __cdecl internal_6801120()
{
    __asm
    {
        push edi
        push 1
        call public_6801cf0
        mov edi, eax
        push edi
        call public_68020b0
        add esp, 8
        test eax, eax
        je public_680115f
        push esi
        push edi
        mov esi, 0x100001
        call public_6802140
        push eax
        mov eax, dword ptr ds : [public_680c004]
        push 0x167
/*FIXUP push offset public_680d220 @0x680114e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d220
/*FIXUP push offset public_680d204 @0x6801153*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d204
        push esi
        call dword ptr ds : [eax]
        add esp, 0x18
        pop esi
        public_680115f : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6801120)
    }
}

#undef public_680115f
