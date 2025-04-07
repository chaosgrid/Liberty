#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62adc40);
CLANG_FORWARD_PROC_SYMBOL(public_62b5980);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6281483 _public_6281483
#define public_628148b _public_628148b
#define public_62814a5 _public_62814a5

PROC_DECLARE(0x6281450, internal_6281450, public_6281450);
extern "C" NAKED register_t __cdecl internal_6281450()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_628148b
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_62b5980 @0x6281461*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62b5980
        lea edi, ds:[esi-4]
        push eax
        push 0xE4
        push esi
        call public_6391dfc
        test bl, 1
        je public_6281483
        push edi
        call public_6391d5a
        add esp, 4
        public_6281483 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_628148b : nop
        mov ecx, esi
        call public_62b5980
        test bl, 1
        je public_62814a5
        push 0xE4
        push esi
        call public_62adc40
        add esp, 8
        public_62814a5 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6281450)
    }
}

#undef public_6281483
#undef public_628148b
#undef public_62814a5
