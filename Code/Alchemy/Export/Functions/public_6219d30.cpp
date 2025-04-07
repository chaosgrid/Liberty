#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6219a30);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_624863b);

#define public_6219d8d _public_6219d8d
#define public_6219d8f _public_6219d8f
#define public_6219da6 _public_6219da6
#define public_6219da8 _public_6219da8
#define public_6219dcc _public_6219dcc
#define public_6219dd9 _public_6219dd9

PROC_DECLARE(0x6219d30, internal_6219d30, public_6219d30);
extern "C" NAKED register_t __cdecl internal_6219d30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_624863b @0x6219d32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624863b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x60
        mov edi, ecx
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_6219d8d
        push ebx
        lea ebx, ds:[esi+4]
        mov ecx, ebx
        mov dword ptr ds : [esi], offset public_624ba48
        call public_6219a30
        mov dword ptr ds : [ebx], offset public_624cf48
        mov dword ptr ds : [esi], offset public_624cee8
        mov dword ptr ds : [esi+0x5C], 1
        pop ebx
        jmp public_6219d8f
        public_6219d8d : nop
        xor esi, esi
        public_6219d8f : nop
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        mov dword ptr ds : [edi+0x9C], esi
        je public_6219da6
        lea eax, ds:[esi+4]
        jmp public_6219da8
        public_6219da6 : nop
        xor eax, eax
        public_6219da8 : nop
        mov dword ptr ds : [edi+0x98], eax
        mov dword ptr ds : [edi+0x80], eax
        mov eax, dword ptr ds : [edi+0x7C]
        cmp eax, esi
        je public_6219dd9
        test eax, eax
        je public_6219dcc
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x7C], 0
        public_6219dcc : nop
        test esi, esi
        mov dword ptr ds : [edi+0x7C], esi
        je public_6219dd9
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+4]
        public_6219dd9 : nop
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6219d30)
    }
}

#undef public_6219d8d
#undef public_6219d8f
#undef public_6219da6
#undef public_6219da8
#undef public_6219dcc
#undef public_6219dd9
