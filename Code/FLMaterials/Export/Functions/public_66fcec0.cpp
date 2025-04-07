#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66fcec0);
CLANG_FORWARD_PROC_SYMBOL(public_66fd700);

#define public_66fced2 _public_66fced2
#define public_66fcefe _public_66fcefe
#define public_66fcf06 _public_66fcf06
#define public_66fcf12 _public_66fcf12

PROC_DECLARE(0x66fcec0, internal_66fcec0, public_66fcec0);
extern "C" NAKED register_t __cdecl internal_66fcec0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 8
        cmp eax, 0xFFFFFFFF
        jne public_66fced2
        xor al, al
        add esp, 8
        ret 
        public_66fced2 : nop
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, offset public_67045f4
        call public_66fd700
        mov ecx, dword ptr ds : [public_67045f8]
        cmp eax, ecx
        mov dword ptr ss : [esp], eax
        je public_66fcefe
        mov edx, dword ptr ss : [esp+0xC]
        cmp edx, dword ptr ds : [eax+0xC]
        jl public_66fcefe
        lea eax, ss:[esp]
        jmp public_66fcf06
        public_66fcefe : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_66fcf06 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_66fcf12
        xor al, al
        add esp, 8
        ret 
        public_66fcf12 : nop
        mov eax, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], eax
        mov al, 1
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x66fcec0)
    }
}

#undef public_66fced2
#undef public_66fcefe
#undef public_66fcf06
#undef public_66fcf12
