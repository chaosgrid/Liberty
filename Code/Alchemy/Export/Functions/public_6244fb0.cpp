#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_624aa9b);

#define public_6245013 _public_6245013
#define public_6245015 _public_6245015
#define public_6245026 _public_6245026
#define public_6245028 _public_6245028
#define public_624504c _public_624504c
#define public_6245059 _public_6245059

PROC_DECLARE(0x6244fb0, internal_6244fb0, public_6244fb0);
extern "C" NAKED register_t __cdecl internal_6244fb0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_624aa9b @0x6244fb2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624aa9b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x54
        mov edi, ecx
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_6245013
        push ebx
        lea ebx, ds:[esi+4]
        mov ecx, ebx
        mov dword ptr ds : [esi], offset public_624ba48
        call public_623f7b0
        mov dword ptr ds : [ebx], offset public_624fda8
        mov dword ptr ds : [ebx], offset public_624fd50
        mov dword ptr ds : [esi], offset public_624fcf0
        mov dword ptr ds : [esi+0x50], 1
        pop ebx
        jmp public_6245015
        public_6245013 : nop
        xor esi, esi
        public_6245015 : nop
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        je public_6245026
        lea eax, ds:[esi+4]
        jmp public_6245028
        public_6245026 : nop
        xor eax, eax
        public_6245028 : nop
        mov dword ptr ds : [edi+0x98], eax
        mov dword ptr ds : [edi+0x80], eax
        mov eax, dword ptr ds : [edi+0x7C]
        cmp eax, esi
        je public_6245059
        test eax, eax
        je public_624504c
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x7C], 0
        public_624504c : nop
        test esi, esi
        mov dword ptr ds : [edi+0x7C], esi
        je public_6245059
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+4]
        public_6245059 : nop
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6244fb0)
    }
}

#undef public_6245013
#undef public_6245015
#undef public_6245026
#undef public_6245028
#undef public_624504c
#undef public_6245059
