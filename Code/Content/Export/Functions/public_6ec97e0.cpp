#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15710);
CLANG_FORWARD_PROC_SYMBOL(public_6f15b90);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6ec981a _public_6ec981a
#define public_6ec9824 _public_6ec9824
#define public_6ec986d _public_6ec986d
#define public_6ec9871 _public_6ec9871
#define public_6ec988b _public_6ec988b
#define public_6ec98a6 _public_6ec98a6

PROC_DECLARE(0x6ec97e0, internal_6ec97e0, public_6ec97e0);
extern "C" NAKED register_t __cdecl internal_6ec97e0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+4]
        push edi
        lea ebx, ss:[ebp+0xC]
        push ebx
        call public_6f15b90
        test eax, 0x3FFFFFFF
        mov ecx, dword ptr ss : [ebp+0x74]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x10], ecx
        jne public_6ec9824
        mov edi, offset public_6fb4708
        lea esi, ss:[ebp+0x10]
        mov ecx, 7
        xor edx, edx
        repe cmpsb
        je public_6ec9824
        public_6ec981a : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0xC
        ret 
        public_6ec9824 : nop
        test dword ptr ss : [esp+0x10], 0x3FFFFFFF
        je public_6ec981a
        mov edi, offset public_6fb4708
        lea esi, ss:[ebp+0x10]
        mov ecx, 7
        xor edx, edx
        repe cmpsb
        jne public_6ec9871
        mov eax, dword ptr ss : [ebp+4]
        add eax, 0xC
        push eax
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ec986d
        mov edx, dword ptr ss : [ebp+4]
        lea ecx, ss:[esp+0x14]
        push ecx
        add edx, 0xC
        push edx
        call dword ptr ds : [public_6fb3618]
        add esp, 8
        mov esi, eax
        jmp public_6ec988b
        public_6ec986d : nop
        mov eax, dword ptr ss : [esp+0x18]
        public_6ec9871 : nop
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        call dword ptr ds : [public_6fb364c]
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 8
        push ebx
        mov esi, eax
        call public_6f15710
        public_6ec988b : nop
        test esi, esi
        jne public_6ec98a6
        mov edx, dword ptr ss : [ebp+0x78]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        call dword ptr ds : [public_6fb3620]
        add esp, 0xC
        public_6ec98a6 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6ec97e0)
    }
}

#undef public_6ec981a
#undef public_6ec9824
#undef public_6ec986d
#undef public_6ec9871
#undef public_6ec988b
#undef public_6ec98a6
