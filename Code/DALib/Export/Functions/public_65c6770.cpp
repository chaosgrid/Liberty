#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c5d90);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a60);
CLANG_FORWARD_PROC_SYMBOL(public_65c6aef);

#define public_65c67a3 _public_65c67a3
#define public_65c67ab _public_65c67ab
#define public_65c67bf _public_65c67bf

PROC_DECLARE(0x65c6770, internal_65c6770, public_65c6770);
extern "C" NAKED register_t __cdecl internal_65c6770()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_65c67ab
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_65c5d90 @0x65c6781*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65c5d90
        lea edi, ds:[esi-4]
        push eax
        push 0xDC
        push esi
        call public_65c6aef
        test bl, 1
        je public_65c67a3
        push edi
        call public_65c6a60
        add esp, 4
        public_65c67a3 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_65c67ab : nop
        test bl, 1
        mov dword ptr ds : [esi], offset public_65c757c
        je public_65c67bf
        push esi
        call public_65c6a60
        add esp, 4
        public_65c67bf : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x65c6770)
    }
}

#undef public_65c67a3
#undef public_65c67ab
#undef public_65c67bf
