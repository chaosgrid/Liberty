#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a3ac0);
CLANG_FORWARD_PROC_SYMBOL(public_62a7500);
CLANG_FORWARD_PROC_SYMBOL(public_62a7c50);
CLANG_FORWARD_PROC_SYMBOL(public_62a81d0);
CLANG_FORWARD_PROC_SYMBOL(public_6312630);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62a3ad0 _public_62a3ad0
#define public_62a3b00 _public_62a3b00
#define public_62a3b28 _public_62a3b28
#define public_62a3b4d _public_62a3b4d
#define public_62a3b51 _public_62a3b51
#define public_62a3b71 _public_62a3b71

PROC_DECLARE(0x62a3ac0, internal_62a3ac0, public_62a3ac0);
extern "C" NAKED register_t __cdecl internal_62a3ac0()
{
    __asm
    {
        mov ecx, offset public_63fc294
        jmp public_62a3ad0
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_62a3ad0 : nop
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
        je public_62a3b4d
        mov ecx, eax
        cmp eax, ecx
        jne public_62a3b4d
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_62a3b28
        nop 
        lea esp, ss:[esp]
        public_62a3b00 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_62a7c50
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_62a81d0
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_62a3b00
        public_62a3b28 : nop
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
        jmp public_62a3b71
        public_62a3b4d : nop
        cmp eax, edi
        je public_62a3b71
        public_62a3b51 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6312630
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_62a7500
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_62a3b51
        public_62a3b71 : nop
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
        UNREACHABLE_TRAP(0x62a3ac0)
    }
}

#undef public_62a3ad0
#undef public_62a3b00
#undef public_62a3b28
#undef public_62a3b4d
#undef public_62a3b51
#undef public_62a3b71
