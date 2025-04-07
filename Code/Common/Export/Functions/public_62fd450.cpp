#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fd540);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_62fd480 _public_62fd480
#define public_62fd488 _public_62fd488
#define public_62fd49c _public_62fd49c
#define public_62fd4ab _public_62fd4ab

PROC_DECLARE(0x62fd450, internal_62fd450, public_62fd450);
extern "C" NAKED register_t __cdecl internal_62fd450()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_62fd488
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_62fd540 @0x62fd461*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62fd540
        lea edi, ds:[esi-4]
        push eax
        push 0xC
        push esi
        call public_6391dfc
        test bl, 1
        je public_62fd480
        push edi
        call public_6391d5a
        add esp, 4
        public_62fd480 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_62fd488 : nop
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        mov dword ptr ds : [esi], offset public_63a2268
        je public_62fd49c
        push eax
        call dword ptr ds : [public_639913c]
        public_62fd49c : nop
        test bl, 1
        je public_62fd4ab
        push esi
        call dword ptr ds : [public_639932c]
        add esp, 4
        public_62fd4ab : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62fd450)
    }
}

#undef public_62fd480
#undef public_62fd488
#undef public_62fd49c
#undef public_62fd4ab
