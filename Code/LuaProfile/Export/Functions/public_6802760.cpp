#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801d70);
CLANG_FORWARD_PROC_SYMBOL(public_6802760);
CLANG_FORWARD_PROC_SYMBOL(public_68027c0);
CLANG_FORWARD_PROC_SYMBOL(public_6805170);
CLANG_FORWARD_PROC_SYMBOL(public_6805cd0);

#define public_680279b _public_680279b
#define public_68027b8 _public_68027b8

PROC_DECLARE(0x6802760, internal_6802760, public_6802760);
extern "C" NAKED register_t __cdecl internal_6802760()
{
    __asm
    {
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax+4]
        shl ecx, 4
        lea ecx, ds:[edx+ecx-0x10]
        mov edx, dword ptr ds : [eax]
        push esi
        push ecx
        push edx
        call public_6801d70
/*FIXUP push offset _public_68027c0 @0x680277d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_68027c0
        call public_6805cd0
        mov esi, dword ptr ss : [esp+0x18]
        add esp, 0xC
        test eax, eax
        mov dword ptr ds : [esi], eax
        je public_680279b
        mov eax, offset public_680d468
        pop esi
        ret 
/*FIXUP public_680279b : nop
        push offset _public_68027c0 @0x680279b*/
  FIXUP public_680279b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_68027c0
        call public_6805170
        add esp, 4
        mov dword ptr ds : [esi], eax
        test eax, eax
        mov eax, offset public_680d45c
        jne public_68027b8
        mov eax, offset public_680e600
        public_68027b8 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6802760)
    }
}

#undef public_680279b
#undef public_68027b8
