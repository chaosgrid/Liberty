#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c4d70);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a60);
CLANG_FORWARD_PROC_SYMBOL(public_65c6aef);

#define public_65c3f03 _public_65c3f03
#define public_65c3f0b _public_65c3f0b
#define public_65c3f20 _public_65c3f20

PROC_DECLARE(0x65c3ed0, internal_65c3ed0, public_65c3ed0);
extern "C" NAKED register_t __cdecl internal_65c3ed0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_65c3f0b
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_65c4d70 @0x65c3ee1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65c4d70
        lea edi, ds:[esi-4]
        push eax
        push 0x99C
        push esi
        call public_65c6aef
        test bl, 1
        je public_65c3f03
        push edi
        call public_65c6a60
        add esp, 4
        public_65c3f03 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_65c3f0b : nop
        mov ecx, esi
        call public_65c4d70
        test bl, 1
        je public_65c3f20
        push esi
        call public_65c6a60
        add esp, 4
        public_65c3f20 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x65c3ed0)
    }
}

#undef public_65c3f03
#undef public_65c3f0b
#undef public_65c3f20
