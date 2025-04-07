#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6293160);
CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6292b40 _public_6292b40
#define public_6292b48 _public_6292b48
#define public_6292b5d _public_6292b5d

PROC_DECLARE(0x6292b10, internal_6292b10, public_6292b10);
extern "C" NAKED register_t __cdecl internal_6292b10()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6292b48
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6293160 @0x6292b21*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6293160
        lea edi, ds:[esi-4]
        push eax
        push 0x4C
        push esi
        call public_6391dfc
        test bl, 1
        je public_6292b40
        push edi
        call public_6391d5a
        add esp, 4
        public_6292b40 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6292b48 : nop
        mov ecx, esi
        call public_6293160
        test bl, 1
        je public_6292b5d
        push esi
        call public_62fd570
        add esp, 4
        public_6292b5d : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6292b10)
    }
}

#undef public_6292b40
#undef public_6292b48
#undef public_6292b5d
