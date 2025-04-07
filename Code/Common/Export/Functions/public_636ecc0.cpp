#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636e740);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_636ed80);
CLANG_FORWARD_PROC_SYMBOL(public_636edf0);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);

#define public_636ed1e _public_636ed1e
#define public_636ed28 _public_636ed28

PROC_DECLARE(0x636ecc0, internal_636ecc0, public_636ecc0);
extern "C" NAKED register_t __cdecl internal_636ecc0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        cmp dword ptr ds : [edi], 0
        je public_636ed28
        push esi
        call public_636ed80
        mov esi, eax
        cmp esi, dword ptr ds : [edi]
        je public_636ed1e
        push esi
        call public_636edf0
        push esi
        call public_636ec10
        add esp, 8
        push eax
        mov eax, dword ptr ds : [public_658b990]
        push esi
        push eax
        call public_636ec10
        mov ecx, dword ptr ds : [edi]
        add esp, 4
        inc eax
        push eax
        push ecx
        call public_636ec10
        mov edx, dword ptr ds : [edi]
        add esp, 4
        push eax
        push edx
/*FIXUP push offset public_63eeb10 @0x636ed06*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63eeb10
        call public_6356960
        push 0
        push 0
        push 5
        call public_6378600
        add esp, 0x24
        public_636ed1e : nop
        push edi
        call public_636e740
        add esp, 4
        pop esi
        public_636ed28 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x636ecc0)
    }
}

#undef public_636ed1e
#undef public_636ed28
