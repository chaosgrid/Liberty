#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6327c90);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_63250c0 _public_63250c0
#define public_63250c8 _public_63250c8
#define public_63250dd _public_63250dd

PROC_DECLARE(0x6325090, internal_6325090, public_6325090);
extern "C" NAKED register_t __cdecl internal_6325090()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_63250c8
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6327c90 @0x63250a1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6327c90
        lea edi, ds:[esi-4]
        push eax
        push 0x3C
        push esi
        call public_6391dfc
        test bl, 1
        je public_63250c0
        push edi
        call public_6391d5a
        add esp, 4
        public_63250c0 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_63250c8 : nop
        mov ecx, esi
        call public_6327c90
        test bl, 1
        je public_63250dd
        push esi
        call public_6391d5a
        add esp, 4
        public_63250dd : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6325090)
    }
}

#undef public_63250c0
#undef public_63250c8
#undef public_63250dd
