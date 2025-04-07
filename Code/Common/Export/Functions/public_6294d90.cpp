#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629f590);
CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6294dc3 _public_6294dc3
#define public_6294dcb _public_6294dcb
#define public_6294de0 _public_6294de0

PROC_DECLARE(0x6294d90, internal_6294d90, public_6294d90);
extern "C" NAKED register_t __cdecl internal_6294d90()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6294dcb
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_629f590 @0x6294da1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_629f590
        lea edi, ds:[esi-4]
        push eax
        push 0x840
        push esi
        call public_6391dfc
        test bl, 1
        je public_6294dc3
        push edi
        call public_6391d5a
        add esp, 4
        public_6294dc3 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6294dcb : nop
        mov ecx, esi
        call public_629f590
        test bl, 1
        je public_6294de0
        push esi
        call public_62fd570
        add esp, 4
        public_6294de0 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6294d90)
    }
}

#undef public_6294dc3
#undef public_6294dcb
#undef public_6294de0
