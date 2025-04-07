#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6329710);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6325510 _public_6325510
#define public_6325518 _public_6325518
#define public_632552d _public_632552d

PROC_DECLARE(0x63254e0, internal_63254e0, public_63254e0);
extern "C" NAKED register_t __cdecl internal_63254e0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6325518
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6329710 @0x63254f1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6329710
        lea edi, ds:[esi-4]
        push eax
        push 0x14
        push esi
        call public_6391dfc
        test bl, 1
        je public_6325510
        push edi
        call public_6391d5a
        add esp, 4
        public_6325510 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6325518 : nop
        mov ecx, esi
        call public_6329710
        test bl, 1
        je public_632552d
        push esi
        call public_6391d5a
        add esp, 4
        public_632552d : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x63254e0)
    }
}

#undef public_6325510
#undef public_6325518
#undef public_632552d
