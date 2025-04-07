#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f02b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_62f00f0 _public_62f00f0
#define public_62f00f8 _public_62f00f8
#define public_62f010d _public_62f010d

PROC_DECLARE(0x62f00c0, internal_62f00c0, public_62f00c0);
extern "C" NAKED register_t __cdecl internal_62f00c0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_62f00f8
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_62f02b0 @0x62f00d1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62f02b0
        lea edi, ds:[esi-4]
        push eax
        push 0x5C
        push esi
        call public_6391dfc
        test bl, 1
        je public_62f00f0
        push edi
        call public_6391d5a
        add esp, 4
        public_62f00f0 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_62f00f8 : nop
        mov ecx, esi
        call public_62f02b0
        test bl, 1
        je public_62f010d
        push esi
        call public_6391d5a
        add esp, 4
        public_62f010d : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62f00c0)
    }
}

#undef public_62f00f0
#undef public_62f00f8
#undef public_62f010d
