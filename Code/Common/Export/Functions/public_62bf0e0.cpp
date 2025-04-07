#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bf070);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_62bf113 _public_62bf113
#define public_62bf11b _public_62bf11b
#define public_62bf133 _public_62bf133

PROC_DECLARE(0x62bf0e0, internal_62bf0e0, public_62bf0e0);
extern "C" NAKED register_t __cdecl internal_62bf0e0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_62bf11b
        mov eax, dword ptr ds : [esi-0x10]
        push edi
        lea edi, ds:[esi-0x10]
/*FIXUP push offset _public_62bf070 @0x62bf0f4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62bf070
        push eax
        push 0x14
        add esi, 0xFFFFFFF4
        push esi
        call public_6391dfc
        test bl, 1
        je public_62bf113
        push edi
        call public_6391d5a
        add esp, 4
        public_62bf113 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_62bf11b : nop
        mov ecx, esi
        call public_62bf070
        test bl, 1
        je public_62bf133
        lea ecx, ds:[esi-0xC]
        push ecx
        call public_6391d5a
        add esp, 4
        public_62bf133 : nop
        lea eax, ds:[esi-0xC]
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62bf0e0)
    }
}

#undef public_62bf113
#undef public_62bf11b
#undef public_62bf133
