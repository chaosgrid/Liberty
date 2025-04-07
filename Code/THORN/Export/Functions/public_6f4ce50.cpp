#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4ce50);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f270);

#define public_6f4ce67 _public_6f4ce67

PROC_DECLARE(0x6f4ce50, internal_6f4ce50, public_6f4ce50);
extern "C" NAKED register_t __cdecl internal_6f4ce50()
{
    __asm
    {
        sub esp, 0x20
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        cmp dword ptr ds : [esi], 0xFFFFFFFF
        je public_6f4ce67
        mov eax, 1
        pop esi
        add esp, 0x20
        ret 
        public_6f4ce67 : nop
        fld qword ptr ds : [esi+8]
        sub esp, 8
        fstp qword ptr ss : [esp]
        lea eax, ss:[esp+0xC]
/*FIXUP push offset public_6f6059c @0x6f4ce74*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f6059c
        push eax
        call dword ptr ds : [public_6f5a06c]
        lea ecx, ss:[esp+0x14]
        push ecx
        call public_6f4f270
        add esp, 0x14
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi], 0xFFFFFFFE
        xor eax, eax
        pop esi
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6f4ce50)
    }
}

#undef public_6f4ce67
