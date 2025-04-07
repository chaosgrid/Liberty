#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626d230);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_626d283 _public_626d283
#define public_626d28b _public_626d28b
#define public_626d2a0 _public_626d2a0

PROC_DECLARE(0x626d250, internal_626d250, public_626d250);
extern "C" NAKED register_t __cdecl internal_626d250()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_626d28b
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_626d230 @0x626d261*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_626d230
        lea edi, ds:[esi-4]
        push eax
        push 0xAC
        push esi
        call public_6391dfc
        test bl, 1
        je public_626d283
        push edi
        call public_6391d5a
        add esp, 4
        public_626d283 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_626d28b : nop
        mov ecx, esi
        call public_626d230
        test bl, 1
        je public_626d2a0
        push esi
        call public_6391d5a
        add esp, 4
        public_626d2a0 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x626d250)
    }
}

#undef public_626d283
#undef public_626d28b
#undef public_626d2a0
