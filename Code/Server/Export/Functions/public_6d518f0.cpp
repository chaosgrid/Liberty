#include "Server-PCH.h"


#define public_6d51925 _public_6d51925
#define public_6d5192f _public_6d5192f
#define public_6d5194d _public_6d5194d

PROC_DECLARE(0x6d518f0, internal_6d518f0, public_6d518f0);
extern "C" NAKED register_t __cdecl internal_6d518f0()
{
    __asm
    {
        sub esp, 0x104
        push esi
        mov esi, dword ptr ds : [public_6d647e8]
        call esi
        test al, al
        je public_6d5194d
        lea eax, ss:[esp+4]
        push eax
        call dword ptr ds : [public_6d64874]
        add esp, 4
        call esi
        test al, al
        push 0
        je public_6d51925
/*FIXUP push offset public_6d8d308 @0x6d51919*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8d308
        lea ecx, ss:[esp+0xC]
        push ecx
        jmp public_6d5192f
/*FIXUP public_6d51925 : nop
        push offset public_6d8d200 @0x6d51925*/
  FIXUP public_6d51925 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8d200
        lea edx, ss:[esp+0xC]
        push edx
        public_6d5192f : nop
        push 0
/*FIXUP push offset public_6d90158 @0x6d51931*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d90158
        call dword ptr ds : [public_6d64bc0]
        add esp, 0x14
/*FIXUP push offset public_6d90158 @0x6d5193f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d90158
        call dword ptr ds : [public_6d6497c]
        add esp, 4
        public_6d5194d : nop
        pop esi
        add esp, 0x104
        ret 
        UNREACHABLE_TRAP(0x6d518f0)
    }
}

#undef public_6d51925
#undef public_6d5192f
#undef public_6d5194d
