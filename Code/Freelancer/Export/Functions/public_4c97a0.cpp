#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4ced60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);

#define public_4c97d0 _public_4c97d0
#define public_4c97d8 _public_4c97d8
#define public_4c97ed _public_4c97ed

PROC_DECLARE(0x4c97a0, internal_4c97a0, public_4c97a0);
extern "C" NAKED register_t __cdecl internal_4c97a0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_4c97d8
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_4ced60 @0x4c97b1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4ced60
        lea edi, ds:[esi-4]
        push eax
        push 0x14
        push esi
        call public_5b7ec6
        test bl, 1
        je public_4c97d0
        push edi
        call public_5b7e1d
        add esp, 4
        public_4c97d0 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_4c97d8 : nop
        mov ecx, esi
        call public_4ced60
        test bl, 1
        je public_4c97ed
        push esi
        call public_5b7e1d
        add esp, 4
        public_4c97ed : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x4c97a0)
    }
}

#undef public_4c97d0
#undef public_4c97d8
#undef public_4c97ed
