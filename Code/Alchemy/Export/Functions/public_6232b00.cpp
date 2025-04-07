#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62323a0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6249b6b);

#define public_6232b63 _public_6232b63
#define public_6232b65 _public_6232b65
#define public_6232b85 _public_6232b85
#define public_6232b92 _public_6232b92

PROC_DECLARE(0x6232b00, internal_6232b00, public_6232b00);
extern "C" NAKED register_t __cdecl internal_6232b00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6249b6b @0x6232b02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6249b6b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x88
        mov edi, ecx
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_6232b63
        push ebx
        lea ebx, ds:[esi+4]
        mov ecx, ebx
        mov dword ptr ds : [esi], offset public_624ba48
        call public_62323a0
        mov dword ptr ds : [ebx], offset public_624eb10
        mov dword ptr ds : [esi], offset public_624eab0
        mov dword ptr ds : [esi+0x84], 1
        pop ebx
        jmp public_6232b65
        public_6232b63 : nop
        xor esi, esi
        public_6232b65 : nop
        mov eax, dword ptr ds : [edi+0x7C]
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        cmp eax, esi
        je public_6232b92
        test eax, eax
        je public_6232b85
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x7C], 0
        public_6232b85 : nop
        test esi, esi
        mov dword ptr ds : [edi+0x7C], esi
        je public_6232b92
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+4]
        public_6232b92 : nop
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0xC]
        lea eax, ds:[esi+4]
        mov dword ptr ds : [edi+0xF0], esi
        mov dword ptr ds : [edi+0xA8], eax
        mov dword ptr ds : [edi+0x80], eax
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6232b00)
    }
}

#undef public_6232b63
#undef public_6232b65
#undef public_6232b85
#undef public_6232b92
