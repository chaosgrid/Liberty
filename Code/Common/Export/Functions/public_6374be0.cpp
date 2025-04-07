#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_6374700);
CLANG_FORWARD_PROC_SYMBOL(public_6374910);
CLANG_FORWARD_PROC_SYMBOL(public_6374be0);

#define public_6374bfd _public_6374bfd

PROC_DECLARE(0x6374be0, internal_6374be0, public_6374be0);
extern "C" NAKED register_t __cdecl internal_6374be0()
{
    __asm
    {
        cmp dword ptr ds : [public_658b078], 1
        jl public_6374bfd
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63f1268 @0x6374bee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f1268
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 8
        public_6374bfd : nop
        mov ecx, dword ptr ss : [esp+4]
        push edi
        push ecx
        mov dword ptr ds : [public_658b8ac], 1
        call public_6374910
        add esp, 4
        call public_6374700
        call public_62a8920
        mov ecx, 0x254
        xor eax, eax
        mov edi, offset public_658b010
        rep stosd
        mov dword ptr ds : [public_658b8ac], 1
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6374be0)
    }
}

#undef public_6374bfd
