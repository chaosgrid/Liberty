#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623fb80);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_62471ab);

#define public_6201dc3 _public_6201dc3
#define public_6201dc5 _public_6201dc5

PROC_DECLARE(0x6201d60, internal_6201d60, public_6201d60);
extern "C" NAKED register_t __cdecl internal_6201d60()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_62471ab @0x6201d62*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62471ab
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push 0xA0
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+4], esi
        test esi, esi
        mov dword ptr ss : [esp+0x10], 0
        je public_6201dc3
        push edi
        lea edi, ds:[esi+4]
        mov ecx, edi
        mov dword ptr ds : [esi], offset public_624b280
        call public_623fb80
        mov dword ptr ds : [edi], offset public_624b230
        mov dword ptr ds : [esi+0x1C], esi
        mov dword ptr ds : [esi], offset public_624b190
        mov dword ptr ds : [esi+0x9C], 1
        pop edi
        jmp public_6201dc5
        public_6201dc3 : nop
        xor esi, esi
        public_6201dc5 : nop
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ds:[esi+4]
        push 0
        push eax
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        call dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        push esi
        call dword ptr ds : [edx+0x7C]
        xor eax, eax
        pop esi
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6201d60)
    }
}

#undef public_6201dc3
#undef public_6201dc5
