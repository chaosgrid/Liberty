#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b740);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b790);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f660);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f56b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);

#define public_6f56ac1 _public_6f56ac1
#define public_6f56acb _public_6f56acb
#define public_6f56ae4 _public_6f56ae4

PROC_DECLARE(0x6f56a60, internal_6f56a60, public_6f56a60);
extern "C" NAKED register_t __cdecl internal_6f56a60()
{
    __asm
    {
        push ecx
        push esi
        push edi
        lea eax, ss:[esp+8]
        push eax
        push 1
        call public_6f4f5e0
        mov ecx, dword ptr ss : [esp+0x10]
        add esp, 8
        push ecx
        push 2
        mov edi, eax
        call public_6f4f660
        add esp, 4
        call public_6f57f16
        push eax
        call public_6f56b00
        mov edx, dword ptr ss : [esp+0x10]
        add esp, 8
        push edx
        push 0xBFF00000
        push 0
        push 3
        mov esi, eax
        call public_6f4f6a0
        add esp, 0xC
        call public_6f57f16
        push eax
        call public_6f56b00
        add esp, 8
        cmp esi, 1
        jge public_6f56ac1
        mov esi, 1
        public_6f56ac1 : nop
        mov ecx, dword ptr ss : [esp+8]
        cmp eax, ecx
        jle public_6f56acb
        mov eax, ecx
        public_6f56acb : nop
        cmp esi, eax
        jg public_6f56ae4
        sub eax, esi
        inc eax
        push eax
        lea eax, ds:[esi+edi-1]
        push eax
        call public_6f4b740
        add esp, 8
        pop edi
        pop esi
        pop ecx
        ret 
/*FIXUP public_6f56ae4 : nop
        push offset public_6f61e0c @0x6f56ae4*/
  FIXUP public_6f56ae4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61e0c
        call public_6f4b790
        add esp, 4
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f56a60)
    }
}

#undef public_6f56ac1
#undef public_6f56acb
#undef public_6f56ae4
