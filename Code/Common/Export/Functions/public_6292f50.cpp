#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6292f30);
CLANG_FORWARD_PROC_SYMBOL(public_62adc40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6292f83 _public_6292f83
#define public_6292f8b _public_6292f8b
#define public_6292fa5 _public_6292fa5

PROC_DECLARE(0x6292f50, internal_6292f50, public_6292f50);
extern "C" NAKED register_t __cdecl internal_6292f50()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6292f8b
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6292f30 @0x6292f61*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6292f30
        lea edi, ds:[esi-4]
        push eax
        push 0x9C
        push esi
        call public_6391dfc
        test bl, 1
        je public_6292f83
        push edi
        call public_6391d5a
        add esp, 4
        public_6292f83 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6292f8b : nop
        mov ecx, esi
        call public_6292f30
        test bl, 1
        je public_6292fa5
        push 0x9C
        push esi
        call public_62adc40
        add esp, 8
        public_6292fa5 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6292f50)
    }
}

#undef public_6292f83
#undef public_6292f8b
#undef public_6292fa5
