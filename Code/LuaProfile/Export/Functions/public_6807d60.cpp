#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806a20);
CLANG_FORWARD_PROC_SYMBOL(public_6807cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6807d60);
CLANG_FORWARD_PROC_SYMBOL(public_6807db0);

#define public_6807d6a _public_6807d6a
#define public_6807d79 _public_6807d79
#define public_6807d96 _public_6807d96

PROC_DECLARE(0x6807d60, internal_6807d60, public_6807d60);
extern "C" NAKED register_t __cdecl internal_6807d60()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        public_6807d6a : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, 0x10D
        je public_6807d79
        cmp eax, 0x2D
        jne public_6807d96
        public_6807d79 : nop
        xor ecx, ecx
        cmp eax, 0x10D
        setne cl
        push ecx
        push edi
        push esi
        call public_6807cd0
        push esi
        call public_6806a20
        add esp, 0x10
        jmp public_6807d6a
        public_6807d96 : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edi
        push edx
        push esi
        call public_6807db0
        add esp, 0xC
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6807d60)
    }
}

#undef public_6807d6a
#undef public_6807d79
#undef public_6807d96
