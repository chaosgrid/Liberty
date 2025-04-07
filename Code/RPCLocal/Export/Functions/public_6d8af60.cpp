#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d88d20);
CLANG_FORWARD_PROC_SYMBOL(public_6d96300);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d8afa0 _public_6d8afa0
#define public_6d8afbc _public_6d8afbc
#define public_6d8afc7 _public_6d8afc7
#define public_6d8afcf _public_6d8afcf
#define public_6d8b00c _public_6d8b00c

PROC_DECLARE(0x6d8af60, internal_6d8af60, public_6d8af60);
extern "C" NAKED register_t __cdecl internal_6d8af60()
{
    __asm
    {
        sub esp, 8
        lea eax, ss:[esp]
        push eax
        push 0x45
        mov dword ptr ss : [esp+0xC], ecx
        mov ecx, dword ptr ds : [ecx+8]
        push 2
        call public_6d96300
        test eax, eax
        jne public_6d8b00c
        mov ecx, dword ptr ss : [esp]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        mov esi, dword ptr ss : [ebp]
        test esi, esi
        push edi
        lea ebx, ds:[ecx+0x20]
        mov edi, 6
        je public_6d8afcf
        nop 
        lea esp, ss:[esp]
        public_6d8afa0 : nop
        movzx eax, word ptr ds : [esi+8]
        cmp eax, 0x21
        je public_6d8afbc
        xor edx, edx
        cmp eax, 0x4E
        sete dl
        dec edx
        and edx, 0xFFFFFFF0
        add edx, 0x17
        mov eax, edx
        jmp public_6d8afc7
        public_6d8afbc : nop
        mov ecx, dword ptr ds : [esi+4]
        call public_6d88d20
        add eax, 3
        public_6d8afc7 : nop
        mov esi, dword ptr ds : [esi]
        add edi, eax
        test esi, esi
        jne public_6d8afa0
        public_6d8afcf : nop
        push edi
        mov dword ptr ds : [ebx], edi
        call public_6db1f8a
        mov ecx, dword ptr ds : [ebx]
        add esp, 4
        push ecx
        push eax
        mov ecx, ebp
        mov dword ptr ds : [ebx+4], eax
        call dword ptr ds : [public_6db30dc]
        mov edx, dword ptr ss : [ebp+0x18]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+0x28], edx
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x24]
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6d8b00c : nop
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6d8af60)
    }
}

#undef public_6d8afa0
#undef public_6d8afbc
#undef public_6d8afc7
#undef public_6d8afcf
#undef public_6d8b00c
