#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62adc40);
CLANG_FORWARD_PROC_SYMBOL(public_62af440);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_627d083 _public_627d083
#define public_627d08b _public_627d08b
#define public_627d0a5 _public_627d0a5

PROC_DECLARE(0x627d050, internal_627d050, public_627d050);
extern "C" NAKED register_t __cdecl internal_627d050()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_627d08b
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_62af440 @0x627d061*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62af440
        lea edi, ds:[esi-4]
        push eax
        push 0x9C
        push esi
        call public_6391dfc
        test bl, 1
        je public_627d083
        push edi
        call public_6391d5a
        add esp, 4
        public_627d083 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_627d08b : nop
        mov ecx, esi
        call public_62af440
        test bl, 1
        je public_627d0a5
        push 0x9C
        push esi
        call public_62adc40
        add esp, 8
        public_627d0a5 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x627d050)
    }
}

#undef public_627d083
#undef public_627d08b
#undef public_627d0a5
