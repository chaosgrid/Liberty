#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62958f0);
CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6295350 _public_6295350
#define public_6295358 _public_6295358
#define public_629536d _public_629536d

PROC_DECLARE(0x6295320, internal_6295320, public_6295320);
extern "C" NAKED register_t __cdecl internal_6295320()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6295358
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_62958f0 @0x6295331*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62958f0
        lea edi, ds:[esi-4]
        push eax
        push 0x50
        push esi
        call public_6391dfc
        test bl, 1
        je public_6295350
        push edi
        call public_6391d5a
        add esp, 4
        public_6295350 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6295358 : nop
        mov ecx, esi
        call public_62958f0
        test bl, 1
        je public_629536d
        push esi
        call public_62fd570
        add esp, 4
        public_629536d : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6295320)
    }
}

#undef public_6295350
#undef public_6295358
#undef public_629536d
