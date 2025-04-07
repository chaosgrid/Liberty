#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6294ef0);
CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6294fc0 _public_6294fc0
#define public_6294fc8 _public_6294fc8
#define public_6294fdd _public_6294fdd

PROC_DECLARE(0x6294f90, internal_6294f90, public_6294f90);
extern "C" NAKED register_t __cdecl internal_6294f90()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6294fc8
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6294ef0 @0x6294fa1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6294ef0
        lea edi, ds:[esi-4]
        push eax
        push 0x20
        push esi
        call public_6391dfc
        test bl, 1
        je public_6294fc0
        push edi
        call public_6391d5a
        add esp, 4
        public_6294fc0 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6294fc8 : nop
        mov ecx, esi
        call public_6294ef0
        test bl, 1
        je public_6294fdd
        push esi
        call public_62fd570
        add esp, 4
        public_6294fdd : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6294f90)
    }
}

#undef public_6294fc0
#undef public_6294fc8
#undef public_6294fdd
