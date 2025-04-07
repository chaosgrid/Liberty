#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62951d0);
CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6295130 _public_6295130
#define public_6295138 _public_6295138
#define public_629514d _public_629514d

PROC_DECLARE(0x6295100, internal_6295100, public_6295100);
extern "C" NAKED register_t __cdecl internal_6295100()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6295138
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_62951d0 @0x6295111*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62951d0
        lea edi, ds:[esi-4]
        push eax
        push 0x20
        push esi
        call public_6391dfc
        test bl, 1
        je public_6295130
        push edi
        call public_6391d5a
        add esp, 4
        public_6295130 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6295138 : nop
        mov ecx, esi
        call public_62951d0
        test bl, 1
        je public_629514d
        push esi
        call public_62fd570
        add esp, 4
        public_629514d : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6295100)
    }
}

#undef public_6295130
#undef public_6295138
#undef public_629514d
