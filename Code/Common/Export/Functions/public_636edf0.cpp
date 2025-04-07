#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636edf0);

#define public_636ee34 _public_636ee34

PROC_DECLARE(0x636edf0, internal_636edf0, public_636edf0);
extern "C" NAKED register_t __cdecl internal_636edf0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
/*FIXUP push offset public_658b990 @0x636edf6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b990
        call public_636e1b0
        mov eax, dword ptr ds : [public_658b998]
        add esp, 8
        cmp eax, 5
        jl public_636ee34
        push esi
        call public_636ec10
        add esp, 4
        push eax
        mov eax, dword ptr ds : [public_658b990]
        push esi
        push eax
        call public_636ec10
        add esp, 4
        push eax
/*FIXUP push offset public_63eec04 @0x636ee27*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63eec04
        call public_6356960
        add esp, 0x10
        public_636ee34 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x636edf0)
    }
}

#undef public_636ee34
