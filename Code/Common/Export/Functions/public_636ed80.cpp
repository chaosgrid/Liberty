#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636e460);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636ed80);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);

#define public_636edab _public_636edab
#define public_636eddd _public_636eddd

PROC_DECLARE(0x636ed80, internal_636ed80, public_636ed80);
extern "C" NAKED register_t __cdecl internal_636ed80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658b990]
        push esi
        push eax
        call public_636e460
        mov esi, eax
        add esp, 4
        test esi, esi
        jne public_636edab
/*FIXUP push offset public_63eebbc @0x636ed95*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63eebbc
        call public_6356960
        push esi
        push esi
        push 5
        call public_6378600
        add esp, 0x10
        public_636edab : nop
        cmp dword ptr ds : [public_658b998], 5
        jl public_636eddd
        push esi
        call public_636ec10
        mov ecx, dword ptr ds : [public_658b990]
        add esp, 4
        push eax
        push esi
        push ecx
        call public_636ec10
        add esp, 4
        inc eax
        push eax
/*FIXUP push offset public_63eeb88 @0x636edd0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63eeb88
        call public_6356960
        add esp, 0x10
        public_636eddd : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x636ed80)
    }
}

#undef public_636edab
#undef public_636eddd
