#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c21c0);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a60);
CLANG_FORWARD_PROC_SYMBOL(public_65c6aef);

#define public_65c3213 _public_65c3213
#define public_65c321b _public_65c321b
#define public_65c3230 _public_65c3230

PROC_DECLARE(0x65c31e0, internal_65c31e0, public_65c31e0);
extern "C" NAKED register_t __cdecl internal_65c31e0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_65c321b
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_65c21c0 @0x65c31f1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65c21c0
        lea edi, ds:[esi-4]
        push eax
        push 0x90
        push esi
        call public_65c6aef
        test bl, 1
        je public_65c3213
        push edi
        call public_65c6a60
        add esp, 4
        public_65c3213 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_65c321b : nop
        mov ecx, esi
        call public_65c21c0
        test bl, 1
        je public_65c3230
        push esi
        call public_65c6a60
        add esp, 4
        public_65c3230 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x65c31e0)
    }
}

#undef public_65c3213
#undef public_65c321b
#undef public_65c3230
