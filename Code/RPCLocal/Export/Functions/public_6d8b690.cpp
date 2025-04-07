#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d88d20);
CLANG_FORWARD_PROC_SYMBOL(public_6d96300);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d8b6d0 _public_6d8b6d0
#define public_6d8b6ec _public_6d8b6ec
#define public_6d8b6f7 _public_6d8b6f7
#define public_6d8b6ff _public_6d8b6ff
#define public_6d8b731 _public_6d8b731
#define public_6d8b74d _public_6d8b74d
#define public_6d8b758 _public_6d8b758
#define public_6d8b760 _public_6d8b760
#define public_6d8b79a _public_6d8b79a

PROC_DECLARE(0x6d8b690, internal_6d8b690, public_6d8b690);
extern "C" NAKED register_t __cdecl internal_6d8b690()
{
    __asm
    {
        sub esp, 8
        lea eax, ss:[esp]
        push eax
        push 0x1B
        mov dword ptr ss : [esp+0xC], ecx
        mov ecx, dword ptr ds : [ecx+8]
        push 1
        call public_6d96300
        test eax, eax
        jne public_6d8b79a
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
        je public_6d8b6ff
        nop 
        lea esp, ss:[esp]
        public_6d8b6d0 : nop
        movzx eax, word ptr ds : [esi+8]
        cmp eax, 0x21
        je public_6d8b6ec
        xor edx, edx
        cmp eax, 0x4E
        sete dl
        dec edx
        and edx, 0xFFFFFFF0
        add edx, 0x17
        mov eax, edx
        jmp public_6d8b6f7
        public_6d8b6ec : nop
        mov ecx, dword ptr ds : [esi+4]
        call public_6d88d20
        add eax, 3
        public_6d8b6f7 : nop
        mov esi, dword ptr ds : [esi]
        add edi, eax
        test esi, esi
        jne public_6d8b6d0
        public_6d8b6ff : nop
        push edi
        mov dword ptr ds : [ebx], edi
        call public_6db1f8a
        mov ecx, dword ptr ds : [ebx]
        add esp, 4
        push ecx
        mov ecx, ebp
        mov ebp, dword ptr ds : [public_6db30dc]
        push eax
        mov dword ptr ds : [ebx+4], eax
        call ebp
        mov eax, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ds : [eax]
        test esi, esi
        mov edx, dword ptr ss : [esp+0x10]
        lea ebx, ds:[edx+0x28]
        mov edi, 6
        je public_6d8b760
        public_6d8b731 : nop
        movzx eax, word ptr ds : [esi+8]
        cmp eax, 0x21
        je public_6d8b74d
        xor ecx, ecx
        cmp eax, 0x4E
        sete cl
        dec ecx
        and ecx, 0xFFFFFFF0
        add ecx, 0x17
        mov eax, ecx
        jmp public_6d8b758
        public_6d8b74d : nop
        mov ecx, dword ptr ds : [esi+4]
        call public_6d88d20
        add eax, 3
        public_6d8b758 : nop
        mov esi, dword ptr ds : [esi]
        add edi, eax
        test esi, esi
        jne public_6d8b731
        public_6d8b760 : nop
        push edi
        mov dword ptr ds : [ebx], edi
        call public_6db1f8a
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 4
        push edx
        push eax
        mov dword ptr ds : [ebx+4], eax
        call ebp
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax+0x30], ecx
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        call dword ptr ds : [edx+0x24]
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6d8b79a : nop
        add esp, 8
        ret 0x10
        UNREACHABLE_TRAP(0x6d8b690)
    }
}

#undef public_6d8b6d0
#undef public_6d8b6ec
#undef public_6d8b6f7
#undef public_6d8b6ff
#undef public_6d8b731
#undef public_6d8b74d
#undef public_6d8b758
#undef public_6d8b760
#undef public_6d8b79a
