#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c5920);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a60);
CLANG_FORWARD_PROC_SYMBOL(public_65c6aef);

#define public_65c5d10 _public_65c5d10
#define public_65c5d18 _public_65c5d18
#define public_65c5d2d _public_65c5d2d

PROC_DECLARE(0x65c5ce0, internal_65c5ce0, public_65c5ce0);
extern "C" NAKED register_t __cdecl internal_65c5ce0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_65c5d18
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_65c5920 @0x65c5cf1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65c5920
        lea edi, ds:[esi-4]
        push eax
        push 0x28
        push esi
        call public_65c6aef
        test bl, 1
        je public_65c5d10
        push edi
        call public_65c6a60
        add esp, 4
        public_65c5d10 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_65c5d18 : nop
        mov ecx, esi
        call public_65c5920
        test bl, 1
        je public_65c5d2d
        push esi
        call public_65c6a60
        add esp, 4
        public_65c5d2d : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x65c5ce0)
    }
}

#undef public_65c5d10
#undef public_65c5d18
#undef public_65c5d2d
