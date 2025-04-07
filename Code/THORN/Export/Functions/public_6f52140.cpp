#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f510);
CLANG_FORWARD_PROC_SYMBOL(public_6f51170);
CLANG_FORWARD_PROC_SYMBOL(public_6f52140);

#define public_6f52176 _public_6f52176
#define public_6f5218c _public_6f5218c
#define public_6f521ac _public_6f521ac
#define public_6f521b5 _public_6f521b5

PROC_DECLARE(0x6f52140, internal_6f52140, public_6f52140);
extern "C" NAKED register_t __cdecl internal_6f52140()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
/*FIXUP push offset public_6f60ea0 @0x6f52145*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60ea0
        push esi
        call public_6f4f510
        add esp, 8
        test eax, eax
        jge public_6f521b5
        mov eax, dword ptr ds : [public_6f5a0c0]
        cmp dword ptr ds : [eax], 1
        jle public_6f52176
        xor ecx, ecx
        mov cl, byte ptr ds : [esi]
        push 0x103
        push ecx
        call dword ptr ds : [public_6f5a0c4]
        add esp, 8
        jmp public_6f5218c
        public_6f52176 : nop
        mov eax, dword ptr ds : [public_6f5a0bc]
        mov ecx, dword ptr ds : [eax]
        xor edx, edx
        mov dl, byte ptr ds : [esi]
        xor eax, eax
        mov ax, word ptr ds : [ecx+edx*2]
        and eax, 0x103
        public_6f5218c : nop
        test eax, eax
        jne public_6f521ac
        cmp byte ptr ds : [esi], 0x5F
        je public_6f521ac
        mov edx, dword ptr ss : [esp+8]
        push esi
/*FIXUP push offset public_6f610b8 @0x6f5219a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f610b8
        push edx
        call public_6f51170
        add esp, 0xC
        xor eax, eax
        pop esi
        ret 
        public_6f521ac : nop
        push esi
        call public_6f4f4f0
        add esp, 4
        public_6f521b5 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f52140)
    }
}

#undef public_6f52176
#undef public_6f5218c
#undef public_6f521ac
#undef public_6f521b5
