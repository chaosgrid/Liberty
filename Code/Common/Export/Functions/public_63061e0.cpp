#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6306280);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6306210 _public_6306210
#define public_6306218 _public_6306218
#define public_6306230 _public_6306230
#define public_6306240 _public_6306240
#define public_630624e _public_630624e

PROC_DECLARE(0x63061e0, internal_63061e0, public_63061e0);
extern "C" NAKED register_t __cdecl internal_63061e0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        push edi
        mov esi, ecx
        je public_6306218
        mov eax, dword ptr ds : [esi-4]
/*FIXUP push offset _public_6306280 @0x63061f1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6306280
        lea edi, ds:[esi-4]
        push eax
        push 0xC
        push esi
        call public_6391dfc
        test bl, 1
        je public_6306210
        push edi
        call public_6391d5a
        add esp, 4
        public_6306210 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6306218 : nop
        mov ecx, dword ptr ds : [esi+4]
        xor edi, edi
        cmp ecx, edi
        mov dword ptr ds : [esi], offset public_63a2ffc
        je public_6306230
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ds : [esi+4], edi
        public_6306230 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, edi
        je public_6306240
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ds : [esi+8], edi
        public_6306240 : nop
        test bl, 1
        je public_630624e
        push esi
        call public_6391d5a
        add esp, 4
        public_630624e : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x63061e0)
    }
}

#undef public_6306210
#undef public_6306218
#undef public_6306230
#undef public_6306240
#undef public_630624e
