#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6297070);
CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6296f13 _public_6296f13
#define public_6296f1b _public_6296f1b
#define public_6296f30 _public_6296f30

PROC_DECLARE(0x6296ee0, internal_6296ee0, public_6296ee0);
extern "C" NAKED register_t __cdecl internal_6296ee0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6296f1b
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6297070 @0x6296ef1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6297070
        lea edi, ds:[esi-4]
        push eax
        push 0x270
        push esi
        call public_6391dfc
        test bl, 1
        je public_6296f13
        push edi
        call public_6391d5a
        add esp, 4
        public_6296f13 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6296f1b : nop
        mov ecx, esi
        call public_6297070
        test bl, 1
        je public_6296f30
        push esi
        call public_62fd570
        add esp, 4
        public_6296f30 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6296ee0)
    }
}

#undef public_6296f13
#undef public_6296f1b
#undef public_6296f30
