#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626d000);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_626d123 _public_626d123
#define public_626d12b _public_626d12b
#define public_626d140 _public_626d140

PROC_DECLARE(0x626d0f0, internal_626d0f0, public_626d0f0);
extern "C" NAKED register_t __cdecl internal_626d0f0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_626d12b
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_626d000 @0x626d101*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_626d000
        lea edi, ds:[esi-4]
        push eax
        push 0x148
        push esi
        call public_6391dfc
        test bl, 1
        je public_626d123
        push edi
        call public_6391d5a
        add esp, 4
        public_626d123 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_626d12b : nop
        mov ecx, esi
        call public_626d000
        test bl, 1
        je public_626d140
        push esi
        call public_6391d5a
        add esp, 4
        public_626d140 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x626d0f0)
    }
}

#undef public_626d123
#undef public_626d12b
#undef public_626d140
