#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629f3b0);
CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6294b10 _public_6294b10
#define public_6294b18 _public_6294b18
#define public_6294b2d _public_6294b2d

PROC_DECLARE(0x6294ae0, internal_6294ae0, public_6294ae0);
extern "C" NAKED register_t __cdecl internal_6294ae0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6294b18
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_629f3b0 @0x6294af1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_629f3b0
        lea edi, ds:[esi-4]
        push eax
        push 0x20
        push esi
        call public_6391dfc
        test bl, 1
        je public_6294b10
        push edi
        call public_6391d5a
        add esp, 4
        public_6294b10 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6294b18 : nop
        mov ecx, esi
        call public_629f3b0
        test bl, 1
        je public_6294b2d
        push esi
        call public_62fd570
        add esp, 4
        public_6294b2d : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6294ae0)
    }
}

#undef public_6294b10
#undef public_6294b18
#undef public_6294b2d
