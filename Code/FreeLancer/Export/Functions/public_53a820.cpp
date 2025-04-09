#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_53a820);

#define public_53a853 _public_53a853
#define public_53a867 _public_53a867

PROC_DECLARE(0x53a820, internal_53a820, public_53a820);
extern "C" NAKED register_t __cdecl internal_53a820()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub eax, 0
        je public_53a867
        dec eax
        je public_53a853
/*FIXUP push offset public_5dec00 @0x53a82c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dec00
        push 0x2A4
/*FIXUP push offset public_5debc4 @0x53a836*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5debc4
        mov eax, 0x100001
/*FIXUP push offset public_5c747c @0x53a840*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c747c
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        ret 4
        public_53a853 : nop
        or byte ptr ds : [ecx+0x44], 4
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+4], 0
        jmp dword ptr ds : [edx+0x1B0]
        public_53a867 : nop
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+4], 1
        jmp dword ptr ds : [eax+0x15C]
        UNREACHABLE_TRAP(0x53a820)
    }
}

#undef public_53a853
#undef public_53a867
