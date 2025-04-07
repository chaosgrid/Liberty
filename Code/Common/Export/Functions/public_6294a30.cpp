#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629f2f0);
CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6294a60 _public_6294a60
#define public_6294a68 _public_6294a68
#define public_6294a7d _public_6294a7d

PROC_DECLARE(0x6294a30, internal_6294a30, public_6294a30);
extern "C" NAKED register_t __cdecl internal_6294a30()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6294a68
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_629f2f0 @0x6294a41*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_629f2f0
        lea edi, ds:[esi-4]
        push eax
        push 0x20
        push esi
        call public_6391dfc
        test bl, 1
        je public_6294a60
        push edi
        call public_6391d5a
        add esp, 4
        public_6294a60 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6294a68 : nop
        mov ecx, esi
        call public_629f2f0
        test bl, 1
        je public_6294a7d
        push esi
        call public_62fd570
        add esp, 4
        public_6294a7d : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6294a30)
    }
}

#undef public_6294a60
#undef public_6294a68
#undef public_6294a7d
