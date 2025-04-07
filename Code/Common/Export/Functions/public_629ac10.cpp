#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62adc40);
CLANG_FORWARD_PROC_SYMBOL(public_62b7420);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_629ac43 _public_629ac43
#define public_629ac4b _public_629ac4b
#define public_629ac65 _public_629ac65

PROC_DECLARE(0x629ac10, internal_629ac10, public_629ac10);
extern "C" NAKED register_t __cdecl internal_629ac10()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_629ac4b
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_62b7420 @0x629ac21*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62b7420
        lea edi, ds:[esi-4]
        push eax
        push 0x1EC
        push esi
        call public_6391dfc
        test bl, 1
        je public_629ac43
        push edi
        call public_6391d5a
        add esp, 4
        public_629ac43 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_629ac4b : nop
        mov ecx, esi
        call public_62b7420
        test bl, 1
        je public_629ac65
        push 0x1EC
        push esi
        call public_62adc40
        add esp, 8
        public_629ac65 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x629ac10)
    }
}

#undef public_629ac43
#undef public_629ac4b
#undef public_629ac65
