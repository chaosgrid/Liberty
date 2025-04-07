#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636e920);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636ec70);

#define public_636ecb6 _public_636ecb6

PROC_DECLARE(0x636ec70, internal_636ec70, public_636ec70);
extern "C" NAKED register_t __cdecl internal_636ec70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        call public_636e920
        mov esi, eax
        push esi
/*FIXUP push offset public_658b990 @0x636ec7e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b990
        call public_636e1b0
        mov eax, dword ptr ds : [public_658b998]
        add esp, 0xC
        cmp eax, 5
        jl public_636ecb6
        mov ecx, dword ptr ds : [public_658b990]
        push ecx
        call public_636ec10
        mov edx, dword ptr ds : [esi]
        add esp, 4
        push eax
        push edx
        push esi
/*FIXUP push offset public_63eeadc @0x636eca9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63eeadc
        call public_6356960
        add esp, 0x10
        public_636ecb6 : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x636ec70)
    }
}

#undef public_636ecb6
