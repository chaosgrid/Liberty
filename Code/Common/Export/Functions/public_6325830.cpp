#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63289f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6325860 _public_6325860
#define public_6325868 _public_6325868
#define public_632587d _public_632587d

PROC_DECLARE(0x6325830, internal_6325830, public_6325830);
extern "C" NAKED register_t __cdecl internal_6325830()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6325868
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_63289f0 @0x6325841*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_63289f0
        lea edi, ds:[esi-4]
        push eax
        push 0x14
        push esi
        call public_6391dfc
        test bl, 1
        je public_6325860
        push edi
        call public_6391d5a
        add esp, 4
        public_6325860 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6325868 : nop
        mov ecx, esi
        call public_63289f0
        test bl, 1
        je public_632587d
        push esi
        call public_6391d5a
        add esp, 4
        public_632587d : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6325830)
    }
}

#undef public_6325860
#undef public_6325868
#undef public_632587d
