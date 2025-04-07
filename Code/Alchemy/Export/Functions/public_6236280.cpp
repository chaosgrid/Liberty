#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6235f50);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6249e9b);

#define public_62362dd _public_62362dd
#define public_62362df _public_62362df
#define public_62362ff _public_62362ff
#define public_623630c _public_623630c

PROC_DECLARE(0x6236280, internal_6236280, public_6236280);
extern "C" NAKED register_t __cdecl internal_6236280()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6249e9b @0x6236282*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6249e9b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x64
        mov edi, ecx
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_62362dd
        push ebx
        lea ebx, ds:[esi+4]
        mov ecx, ebx
        mov dword ptr ds : [esi], offset public_624ba48
        call public_6235f50
        mov dword ptr ds : [ebx], offset public_624ec58
        mov dword ptr ds : [esi], offset public_624ebf8
        mov dword ptr ds : [esi+0x60], 1
        pop ebx
        jmp public_62362df
        public_62362dd : nop
        xor esi, esi
        public_62362df : nop
        mov eax, dword ptr ds : [edi+0x7C]
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        cmp eax, esi
        je public_623630c
        test eax, eax
        je public_62362ff
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x7C], 0
        public_62362ff : nop
        test esi, esi
        mov dword ptr ds : [edi+0x7C], esi
        je public_623630c
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+4]
        public_623630c : nop
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0xC]
        lea eax, ds:[esi+4]
        mov dword ptr ds : [edi+0x9C], esi
        mov dword ptr ds : [edi+0x98], eax
        mov dword ptr ds : [edi+0x80], eax
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6236280)
    }
}

#undef public_62362dd
#undef public_62362df
#undef public_62362ff
#undef public_623630c
