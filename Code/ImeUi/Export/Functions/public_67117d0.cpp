#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67117d0);
CLANG_FORWARD_PROC_SYMBOL(public_67121e0);
CLANG_FORWARD_PROC_SYMBOL(public_67122a0);

#define public_6711812 _public_6711812
#define public_67119ee _public_67119ee

PROC_DECLARE(0x67117d0, internal_67117d0, public_67117d0);
extern "C" NAKED register_t __cdecl internal_67117d0()
{
    __asm
    {
        mov al, byte ptr ds : [public_67193e4]
        test al, al
        jne public_67119ee
        push esi
        push edi
        mov ecx, 0xF
        xor eax, eax
        mov edi, offset public_67193a4
/*FIXUP push offset public_671902c @0x67117eb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671902c
        rep stosd
        mov byte ptr ds : [public_67193e4], 1
        call dword ptr ds : [public_6719364]
        mov esi, eax
        test esi, esi
        jne public_6711812
/*FIXUP push offset public_6719020 @0x6711805*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6719020
        call dword ptr ds : [public_67170a8]
        mov esi, eax
        public_6711812 : nop
        push 0
        push 0
        push 1
        push esi
        mov dword ptr ds : [public_67193b4], offset public_6719390
        call public_67122a0
        add esp, 8
        push eax
        call public_67121e0
        add esp, 0xC
        mov dword ptr ds : [public_67193a4], eax
        push 0
        push 0
        push 2
        push esi
        call public_67122a0
        add esp, 8
        push eax
        call public_67121e0
        add esp, 0xC
        mov dword ptr ds : [public_67193a8], eax
        push 0
        push 0
        push 3
        push esi
        call public_67122a0
        add esp, 8
        push eax
        call public_67121e0
        add esp, 0xC
        mov dword ptr ds : [public_67193ac], eax
        push 0
        push 0
        push 4
        push esi
        call public_67122a0
        add esp, 8
        push eax
        call public_67121e0
        add esp, 0xC
        mov byte ptr ds : [public_67193b0], al
        push 0
        push 0
        push 5
        push esi
        call public_67122a0
        add esp, 8
        push eax
        call public_67121e0
        add esp, 0xC
        mov byte ptr ds : [public_67193b2], al
        push 0
        push 0
        push 6
        push esi
        call public_67122a0
        add esp, 8
        push eax
        call public_67121e0
        add esp, 0xC
        mov byte ptr ds : [public_67193b1], al
        push 0
        push 0
        push 7
        push esi
        call public_67122a0
        add esp, 8
        push eax
        call public_67121e0
        add esp, 0xC
        mov dword ptr ds : [public_67193b8], eax
        push 0
        push 0
        push 8
        push esi
        call public_67122a0
        add esp, 8
        push eax
        call public_67121e0
        add esp, 0xC
        mov dword ptr ds : [public_67193bc], eax
        push 0
        push 0
        push 9
        push esi
        call public_67122a0
        add esp, 8
        push eax
        call public_67121e0
        add esp, 0xC
        mov dword ptr ds : [public_67193c0], eax
        push 0
        push 0
        push 0xA
        push esi
        call public_67122a0
        add esp, 8
        push eax
        call public_67121e0
        add esp, 0xC
        mov dword ptr ds : [public_67193c4], eax
        push 0
        push 0
        push 0xB
        push esi
        call public_67122a0
        add esp, 8
        push eax
        call public_67121e0
        add esp, 0xC
        mov dword ptr ds : [public_67193c8], eax
        push 0
        push 0
        push 0xC
        push esi
        call public_67122a0
        add esp, 8
        push eax
        call public_67121e0
        add esp, 0xC
        mov dword ptr ds : [public_67193cc], eax
        push 0
        push 0
        push 0xD
        push esi
        call public_67122a0
        add esp, 8
        push eax
        call public_67121e0
        add esp, 0xC
        mov dword ptr ds : [public_67193d0], eax
        push 0
        push 0
        push 0xE
        push esi
        call public_67122a0
        add esp, 8
        push eax
        call public_67121e0
        add esp, 0xC
        mov dword ptr ds : [public_67193d4], eax
        push 0
        push 0
        push 0xF
        push esi
        call public_67122a0
        add esp, 8
        push eax
        call public_67121e0
        add esp, 0xC
        mov byte ptr ds : [public_67193d8], al
        push 0
        push 0
        push 0x10
        push esi
        call public_67122a0
        add esp, 8
        push eax
        call public_67121e0
        add esp, 0xC
        mov dword ptr ds : [public_67193dc], eax
        pop edi
        pop esi
        public_67119ee : nop
        mov eax, offset public_67193a4
        ret 
        UNREACHABLE_TRAP(0x67117d0)
    }
}

#undef public_6711812
#undef public_67119ee
