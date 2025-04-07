#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4e430);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f270);
CLANG_FORWARD_PROC_SYMBOL(public_6f50550);
CLANG_FORWARD_PROC_SYMBOL(public_6f505a0);

#define public_6f5058f _public_6f5058f

PROC_DECLARE(0x6f50550, internal_6f50550, public_6f50550);
extern "C" NAKED register_t __cdecl internal_6f50550()
{
    __asm
    {
        sub esp, 0x10
        push esi
/*FIXUP push offset public_6f605a4 @0x6f50554*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f605a4
        mov dword ptr ss : [esp+8], 0xFFFFFFFE
        call public_6f4f270
        mov esi, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+8]
        push eax
        push esi
        call public_6f4e430
        mov ecx, dword ptr ds : [eax+0x10]
        add eax, 0x10
        add esp, 0xC
        cmp ecx, 0xFFFFFFFF
        jne public_6f5058f
        fld qword ptr ds : [eax+8]
        pop esi
        add esp, 0x10
        ret 
        public_6f5058f : nop
        push esi
        call public_6f505a0
        add esp, 4
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f50550)
    }
}

#undef public_6f5058f
