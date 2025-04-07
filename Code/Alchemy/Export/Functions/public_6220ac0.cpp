#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6220ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6220ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6221250);
CLANG_FORWARD_PROC_SYMBOL(public_6221280);
CLANG_FORWARD_PROC_SYMBOL(public_6221c00);
CLANG_FORWARD_PROC_SYMBOL(public_6222940);
CLANG_FORWARD_PROC_SYMBOL(public_6222990);
CLANG_FORWARD_PROC_SYMBOL(public_6222af0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_6220aff _public_6220aff
#define public_6220b04 _public_6220b04
#define public_6220b0c _public_6220b0c
#define public_6220b11 _public_6220b11
#define public_6220b1d _public_6220b1d
#define public_6220b36 _public_6220b36
#define public_6220b4a _public_6220b4a
#define public_6220ba9 _public_6220ba9
#define public_6220bf1 _public_6220bf1
#define public_6220c1c _public_6220c1c
#define public_6220c22 _public_6220c22

PROC_DECLARE(0x6220ac0, internal_6220ac0, public_6220ac0);
extern "C" NAKED register_t __cdecl internal_6220ac0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+4]
        mov ebx, edi
        sub ecx, eax
        sub ebx, edx
        sar ecx, 4
        sar ebx, 4
        cmp ecx, 1
        mov dword ptr ss : [esp+0x14], ebx
        jae public_6220ba9
        test edx, edx
        je public_6220aff
        mov ecx, eax
        sub ecx, edx
        sar ecx, 4
        cmp ecx, 1
        ja public_6220b04
        public_6220aff : nop
        mov ecx, 1
        public_6220b04 : nop
        test edx, edx
        jne public_6220b0c
        xor eax, eax
        jmp public_6220b11
        public_6220b0c : nop
        sub eax, edx
        sar eax, 4
        public_6220b11 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_6220b1d
        xor eax, eax
        public_6220b1d : nop
        shl eax, 4
        push eax
        call public_624612c
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x10], eax
        mov ebp, eax
        je public_6220b4a
        public_6220b36 : nop
        push ebx
        push ebp
        call public_6222af0
        add ebx, 0x10
        add esp, 8
        add ebp, 0x10
        cmp ebx, edi
        jne public_6220b36
        public_6220b4a : nop
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push ebp
        call public_6222af0
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        add ebp, 0x10
        mov ecx, esi
        push ebp
        push eax
        push edi
        call public_6221280
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_6221250
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_62460e0
        mov eax, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x14]
        shl eax, 4
        add eax, edi
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_6220ed0
        mov ebx, dword ptr ss : [esp+0x14]
        inc eax
        shl eax, 4
        add eax, edi
        mov dword ptr ds : [esi+4], edi
        jmp public_6220c22
        public_6220ba9 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 4
        cmp ecx, 1
        mov ecx, esi
        jae public_6220bf1
        lea edx, ds:[edi+0x10]
        push edx
        push eax
        push edi
        call public_6221280
        mov eax, dword ptr ds : [esi+8]
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, eax
        mov edx, 1
        sub ecx, edi
        push ebp
        sar ecx, 4
        sub edx, ecx
        mov ecx, esi
        push edx
        push eax
        call public_6221c00
        mov eax, dword ptr ds : [esi+8]
        push ebp
        push eax
        push edi
        call public_6222940
        add esp, 0xC
        jmp public_6220c1c
        public_6220bf1 : nop
        push eax
        push eax
        add eax, 0xFFFFFFF0
        push eax
        call public_6221280
        mov eax, dword ptr ds : [esi+8]
        push eax
        add eax, 0xFFFFFFF0
        push eax
        push edi
        call public_6222990
        mov ecx, dword ptr ss : [esp+0x2C]
        lea edx, ds:[edi+0x10]
        push ecx
        push edx
        push edi
        call public_6222940
        add esp, 0x18
        public_6220c1c : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x10
        public_6220c22 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], eax
        mov eax, ebx
        pop edi
        shl eax, 4
        pop esi
        pop ebp
        add eax, ecx
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6220ac0)
    }
}

#undef public_6220aff
#undef public_6220b04
#undef public_6220b0c
#undef public_6220b11
#undef public_6220b1d
#undef public_6220b36
#undef public_6220b4a
#undef public_6220ba9
#undef public_6220bf1
#undef public_6220c1c
#undef public_6220c22
