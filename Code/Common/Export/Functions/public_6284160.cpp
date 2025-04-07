#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6291d50);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6284193 _public_6284193
#define public_628419b _public_628419b
#define public_62841b0 _public_62841b0

PROC_DECLARE(0x6284160, internal_6284160, public_6284160);
extern "C" NAKED register_t __cdecl internal_6284160()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_628419b
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6291d50 @0x6284171*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6291d50
        lea edi, ds:[esi-4]
        push eax
        push 0x2E8
        push esi
        call public_6391dfc
        test bl, 1
        je public_6284193
        push edi
        call public_6391d5a
        add esp, 4
        public_6284193 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_628419b : nop
        mov ecx, esi
        call public_6291d50
        test bl, 1
        je public_62841b0
        push esi
        call public_6391d5a
        add esp, 4
        public_62841b0 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6284160)
    }
}

#undef public_6284193
#undef public_628419b
#undef public_62841b0
