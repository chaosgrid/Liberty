#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629f0b0);
CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6292980 _public_6292980
#define public_6292988 _public_6292988
#define public_629299d _public_629299d

PROC_DECLARE(0x6292950, internal_6292950, public_6292950);
extern "C" NAKED register_t __cdecl internal_6292950()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6292988
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_629f0b0 @0x6292961*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_629f0b0
        lea edi, ds:[esi-4]
        push eax
        push 0x28
        push esi
        call public_6391dfc
        test bl, 1
        je public_6292980
        push edi
        call public_6391d5a
        add esp, 4
        public_6292980 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6292988 : nop
        mov ecx, esi
        call public_629f0b0
        test bl, 1
        je public_629299d
        push esi
        call public_62fd570
        add esp, 4
        public_629299d : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6292950)
    }
}

#undef public_6292980
#undef public_6292988
#undef public_629299d
