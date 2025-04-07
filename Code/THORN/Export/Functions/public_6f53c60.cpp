#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52920);
CLANG_FORWARD_PROC_SYMBOL(public_6f53bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f53c60);
CLANG_FORWARD_PROC_SYMBOL(public_6f53cb0);

#define public_6f53c6a _public_6f53c6a
#define public_6f53c79 _public_6f53c79
#define public_6f53c96 _public_6f53c96

PROC_DECLARE(0x6f53c60, internal_6f53c60, public_6f53c60);
extern "C" NAKED register_t __cdecl internal_6f53c60()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        public_6f53c6a : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, 0x10D
        je public_6f53c79
        cmp eax, 0x2D
        jne public_6f53c96
        public_6f53c79 : nop
        xor ecx, ecx
        cmp eax, 0x10D
        setne cl
        push ecx
        push edi
        push esi
        call public_6f53bd0
        push esi
        call public_6f52920
        add esp, 0x10
        jmp public_6f53c6a
        public_6f53c96 : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edi
        push edx
        push esi
        call public_6f53cb0
        add esp, 0xC
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f53c60)
    }
}

#undef public_6f53c6a
#undef public_6f53c79
#undef public_6f53c96
