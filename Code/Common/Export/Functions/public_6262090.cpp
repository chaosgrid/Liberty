#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6262090);
CLANG_FORWARD_PROC_SYMBOL(public_626adc0);
CLANG_FORWARD_PROC_SYMBOL(public_626b230);
CLANG_FORWARD_PROC_SYMBOL(public_626bac0);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62620c0 _public_62620c0
#define public_62620df _public_62620df
#define public_6262104 _public_6262104
#define public_6262108 _public_6262108
#define public_6262128 _public_6262128

PROC_DECLARE(0x6262090, internal_6262090, public_6262090);
extern "C" NAKED register_t __cdecl internal_6262090()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_6262104
        mov ecx, eax
        cmp eax, ecx
        jne public_6262104
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_62620df
        nop 
        lea esp, ss:[esp]
        public_62620c0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_626b230
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_62620c0
        public_62620df : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_632c410
        jmp public_6262128
        public_6262104 : nop
        cmp eax, edi
        je public_6262128
        public_6262108 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_626bac0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_626adc0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6262108
        public_6262128 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6391d5a
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6262090)
    }
}

#undef public_62620c0
#undef public_62620df
#undef public_6262104
#undef public_6262108
#undef public_6262128
