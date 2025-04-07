#include "Server-PCH.h"


#define public_6d5198f _public_6d5198f
#define public_6d51999 _public_6d51999

PROC_DECLARE(0x6d51960, internal_6d51960, public_6d51960);
extern "C" NAKED register_t __cdecl internal_6d51960()
{
    __asm
    {
        lea eax, ss:[esp-0x104]
        sub esp, 0x104
        push eax
        call dword ptr ds : [public_6d64874]
        add esp, 4
        call dword ptr ds : [public_6d647e8]
        test al, al
        push 0
        je public_6d5198f
/*FIXUP push offset public_6d8d308 @0x6d51983*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8d308
        lea ecx, ss:[esp+8]
        push ecx
        jmp public_6d51999
/*FIXUP public_6d5198f : nop
        push offset public_6d8d200 @0x6d5198f*/
  FIXUP public_6d5198f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8d200
        lea edx, ss:[esp+8]
        push edx
        public_6d51999 : nop
        push 0
/*FIXUP push offset public_6d90158 @0x6d5199b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d90158
        call dword ptr ds : [public_6d64bc0]
        mov eax, dword ptr ss : [esp+0x120]
        mov ecx, dword ptr ss : [esp+0x11C]
        add esp, 0x14
        push eax
/*FIXUP push offset public_6d90158 @0x6d519b8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d90158
/*FIXUP push offset public_6d6b89c @0x6d519bd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b89c
        push ecx
        call dword ptr ds : [public_6d64c74]
        mov al, 1
        add esp, 0x114
        ret 8
        UNREACHABLE_TRAP(0x6d51960)
    }
}

#undef public_6d5198f
#undef public_6d51999
