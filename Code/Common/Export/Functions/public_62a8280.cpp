#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a82f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_62a82b0 _public_62a82b0
#define public_62a82b8 _public_62a82b8
#define public_62a82cc _public_62a82cc

PROC_DECLARE(0x62a8280, internal_62a8280, public_62a8280);
extern "C" NAKED register_t __cdecl internal_62a8280()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_62a82b8
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_62a82f0 @0x62a8291*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62a82f0
        lea edi, ds:[esi-4]
        push eax
        push 8
        push esi
        call public_6391dfc
        test bl, 1
        je public_62a82b0
        push edi
        call public_6391d5a
        add esp, 4
        public_62a82b0 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_62a82b8 : nop
        test bl, 1
        mov dword ptr ds : [esi], offset public_639e004
        je public_62a82cc
        push esi
        call public_6391d5a
        add esp, 4
        public_62a82cc : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62a8280)
    }
}

#undef public_62a82b0
#undef public_62a82b8
#undef public_62a82cc
