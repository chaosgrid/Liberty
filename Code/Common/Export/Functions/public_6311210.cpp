#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6311270);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6311240 _public_6311240
#define public_6311248 _public_6311248
#define public_631125c _public_631125c

PROC_DECLARE(0x6311210, internal_6311210, public_6311210);
extern "C" NAKED register_t __cdecl internal_6311210()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6311248
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6311270 @0x6311221*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6311270
        lea edi, ds:[esi-4]
        push eax
        push 8
        push esi
        call public_6391dfc
        test bl, 1
        je public_6311240
        push edi
        call public_6391d5a
        add esp, 4
        public_6311240 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6311248 : nop
        test bl, 1
        mov dword ptr ds : [esi], offset public_63a3700
        je public_631125c
        push esi
        call public_6391d5a
        add esp, 4
        public_631125c : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6311210)
    }
}

#undef public_6311240
#undef public_6311248
#undef public_631125c
