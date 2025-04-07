#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621e120);
CLANG_FORWARD_JUMP_SYMBOL(public_62489f8);

#define public_621e140 _public_621e140
#define public_621e142 _public_621e142
#define public_621e168 _public_621e168
#define public_621e184 _public_621e184

PROC_DECLARE(0x621e120, internal_621e120, public_621e120);
extern "C" NAKED register_t __cdecl internal_621e120()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_62489f8 @0x621e122*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62489f8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        test ecx, ecx
        push esi
        je public_621e140
        lea esi, ds:[ecx+4]
        jmp public_621e142
        public_621e140 : nop
        xor esi, esi
        public_621e142 : nop
        mov dword ptr ss : [esp+4], esi
        mov eax, dword ptr ds : [esi+0x98]
        mov dword ptr ss : [esp+0x10], 0
        test eax, eax
        je public_621e168
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x98], 0
        public_621e168 : nop
        mov eax, dword ptr ds : [esi+0x7C]
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        test eax, eax
        je public_621e184
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x7C], 0
        public_621e184 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x621e120)
    }
}

#undef public_621e140
#undef public_621e142
#undef public_621e168
#undef public_621e184
