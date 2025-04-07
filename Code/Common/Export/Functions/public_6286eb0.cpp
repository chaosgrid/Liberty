#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6287870);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6286ee0 _public_6286ee0
#define public_6286ee8 _public_6286ee8
#define public_6286efd _public_6286efd

PROC_DECLARE(0x6286eb0, internal_6286eb0, public_6286eb0);
extern "C" NAKED register_t __cdecl internal_6286eb0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6286ee8
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6287870 @0x6286ec1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6287870
        lea edi, ds:[esi-4]
        push eax
        push 0x14
        push esi
        call public_6391dfc
        test bl, 1
        je public_6286ee0
        push edi
        call public_6391d5a
        add esp, 4
        public_6286ee0 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6286ee8 : nop
        mov ecx, esi
        call public_6287870
        test bl, 1
        je public_6286efd
        push esi
        call public_6391d5a
        add esp, 4
        public_6286efd : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6286eb0)
    }
}

#undef public_6286ee0
#undef public_6286ee8
#undef public_6286efd
