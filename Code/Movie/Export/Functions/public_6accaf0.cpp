#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6accaf0);
CLANG_FORWARD_PROC_SYMBOL(public_6ace800);
CLANG_FORWARD_PROC_SYMBOL(public_6ace860);
CLANG_FORWARD_PROC_SYMBOL(public_6ace96e);

#define public_6accb21 _public_6accb21
#define public_6accb40 _public_6accb40

PROC_DECLARE(0x6accaf0, internal_6accaf0, public_6accaf0);
extern "C" NAKED register_t __cdecl internal_6accaf0()
{
    __asm
    {
        cmp dword ptr ds : [public_6ae0e80], 0
        push esi
        mov esi, offset public_6ae0c38
        jne public_6accb21
        push 0
        push 1
        push 7
        push esi
        call public_6ace800
        push 0x50
/*FIXUP push offset public_6ae0ae0 @0x6accb0d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ae0ae0
        call public_6ace96e
        mov dword ptr ds : [public_6ae0e80], 1
        public_6accb21 : nop
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6accb40
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_6accb40
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_6accb40
        push eax
        push dword ptr ds : [ecx]
        push esi
        call public_6ace860
        public_6accb40 : nop
        push 1
        pop eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6accaf0)
    }
}

#undef public_6accb21
#undef public_6accb40
