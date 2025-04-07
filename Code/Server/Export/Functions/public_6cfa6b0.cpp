#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6cfa6dd _public_6cfa6dd

PROC_DECLARE(0x6cfa6b0, internal_6cfa6b0, public_6cfa6b0);
extern "C" NAKED register_t __cdecl internal_6cfa6b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        push ecx
        call public_6d00670
        add esp, 4
        test eax, eax
        je public_6cfa6dd
        mov edx, dword ptr ds : [eax+4]
        push 0
        push 1
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ss : [esp+0x10]
/*FIXUP push offset public_6d66b04 @0x6cfa6d1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66b04
        push eax
        push 0
        call dword ptr ds : [edx+0x5C]
        ret 
        public_6cfa6dd : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6cfa6b0)
    }
}

#undef public_6cfa6dd
