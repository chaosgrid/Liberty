#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bd400);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_62bd6c0 _public_62bd6c0
#define public_62bd6c8 _public_62bd6c8
#define public_62bd6dd _public_62bd6dd

PROC_DECLARE(0x62bd690, internal_62bd690, public_62bd690);
extern "C" NAKED register_t __cdecl internal_62bd690()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_62bd6c8
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_62bd400 @0x62bd6a1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62bd400
        lea edi, ds:[esi-4]
        push eax
        push 0x24
        push esi
        call public_6391dfc
        test bl, 1
        je public_62bd6c0
        push edi
        call public_6391d5a
        add esp, 4
        public_62bd6c0 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_62bd6c8 : nop
        mov ecx, esi
        call public_62bd400
        test bl, 1
        je public_62bd6dd
        push esi
        call public_6391d5a
        add esp, 4
        public_62bd6dd : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62bd690)
    }
}

#undef public_62bd6c0
#undef public_62bd6c8
#undef public_62bd6dd
