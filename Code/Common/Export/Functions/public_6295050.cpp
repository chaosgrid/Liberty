#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629fda0);
CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6295080 _public_6295080
#define public_6295088 _public_6295088
#define public_629509d _public_629509d

PROC_DECLARE(0x6295050, internal_6295050, public_6295050);
extern "C" NAKED register_t __cdecl internal_6295050()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6295088
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_629fda0 @0x6295061*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_629fda0
        lea edi, ds:[esi-4]
        push eax
        push 0x24
        push esi
        call public_6391dfc
        test bl, 1
        je public_6295080
        push edi
        call public_6391d5a
        add esp, 4
        public_6295080 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6295088 : nop
        mov ecx, esi
        call public_629fda0
        test bl, 1
        je public_629509d
        push esi
        call public_62fd570
        add esp, 4
        public_629509d : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6295050)
    }
}

#undef public_6295080
#undef public_6295088
#undef public_629509d
