#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6287870);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_62879d0 _public_62879d0
#define public_62879d8 _public_62879d8
#define public_62879ed _public_62879ed

PROC_DECLARE(0x62879a0, internal_62879a0, public_62879a0);
extern "C" NAKED register_t __cdecl internal_62879a0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_62879d8
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6287870 @0x62879b1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6287870
        lea edi, ds:[esi-4]
        push eax
        push 0x28
        push esi
        call public_6391dfc
        test bl, 1
        je public_62879d0
        push edi
        call public_6391d5a
        add esp, 4
        public_62879d0 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_62879d8 : nop
        mov ecx, esi
        call public_6287870
        test bl, 1
        je public_62879ed
        push esi
        call public_6391d5a
        add esp, 4
        public_62879ed : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62879a0)
    }
}

#undef public_62879d0
#undef public_62879d8
#undef public_62879ed
