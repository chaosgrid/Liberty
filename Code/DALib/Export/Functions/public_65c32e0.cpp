#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c41e0);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a60);
CLANG_FORWARD_PROC_SYMBOL(public_65c6aef);

#define public_65c3310 _public_65c3310
#define public_65c3318 _public_65c3318
#define public_65c332d _public_65c332d

PROC_DECLARE(0x65c32e0, internal_65c32e0, public_65c32e0);
extern "C" NAKED register_t __cdecl internal_65c32e0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_65c3318
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_65c41e0 @0x65c32f1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65c41e0
        lea edi, ds:[esi-4]
        push eax
        push 0x20
        push esi
        call public_65c6aef
        test bl, 1
        je public_65c3310
        push edi
        call public_65c6a60
        add esp, 4
        public_65c3310 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_65c3318 : nop
        mov ecx, esi
        call public_65c41e0
        test bl, 1
        je public_65c332d
        push esi
        call public_65c6a60
        add esp, 4
        public_65c332d : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x65c32e0)
    }
}

#undef public_65c3310
#undef public_65c3318
#undef public_65c332d
