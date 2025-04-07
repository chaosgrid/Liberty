#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6329710);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6325e60 _public_6325e60
#define public_6325e68 _public_6325e68
#define public_6325e7d _public_6325e7d

PROC_DECLARE(0x6325e30, internal_6325e30, public_6325e30);
extern "C" NAKED register_t __cdecl internal_6325e30()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6325e68
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6329710 @0x6325e41*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6329710
        lea edi, ds:[esi-4]
        push eax
        push 8
        push esi
        call public_6391dfc
        test bl, 1
        je public_6325e60
        push edi
        call public_6391d5a
        add esp, 4
        public_6325e60 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6325e68 : nop
        mov ecx, esi
        call public_6329710
        test bl, 1
        je public_6325e7d
        push esi
        call public_6391d5a
        add esp, 4
        public_6325e7d : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6325e30)
    }
}

#undef public_6325e60
#undef public_6325e68
#undef public_6325e7d
