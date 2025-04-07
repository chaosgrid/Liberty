#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5fcfc);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d6001e);

#define public_6ce3013 _public_6ce3013
#define public_6ce301b _public_6ce301b
#define public_6ce3030 _public_6ce3030

PROC_DECLARE(0x6ce2fe0, internal_6ce2fe0, public_6ce2fe0);
extern "C" NAKED register_t __cdecl internal_6ce2fe0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6ce301b
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6d5fcfc @0x6ce2ff1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d5fcfc
        lea edi, ds:[esi-4]
        push eax
        push 0x2E8
        push esi
        call public_6d6001e
        test bl, 1
        je public_6ce3013
        push edi
        call public_6d5ffb0
        add esp, 4
        public_6ce3013 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6ce301b : nop
        mov ecx, esi
        call public_6d5fcfc
        test bl, 1
        je public_6ce3030
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6ce3030 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ce2fe0)
    }
}

#undef public_6ce3013
#undef public_6ce301b
#undef public_6ce3030
