#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420800);
CLANG_FORWARD_PROC_SYMBOL(public_420be0);
CLANG_FORWARD_PROC_SYMBOL(public_420c40);
CLANG_FORWARD_PROC_SYMBOL(public_420c90);
CLANG_FORWARD_PROC_SYMBOL(public_4a2c70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4a2ca0 _public_4a2ca0
#define public_4a2cc8 _public_4a2cc8
#define public_4a2ce1 _public_4a2ce1
#define public_4a2ce5 _public_4a2ce5
#define public_4a2d05 _public_4a2d05

PROC_DECLARE(0x4a2c70, internal_4a2c70, public_4a2c70);
extern "C" NAKED register_t __cdecl internal_4a2c70()
{
    __asm
    {
        sub esp, 8
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
        je public_4a2ce1
        mov ecx, eax
        cmp eax, ecx
        jne public_4a2ce1
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_4a2cc8
        nop 
        lea esp, ss:[esp]
        public_4a2ca0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_420be0
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_420c90
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_4a2ca0
        public_4a2cc8 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_4a2d05
        public_4a2ce1 : nop
        cmp eax, edi
        je public_4a2d05
        public_4a2ce5 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_420c40
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_420800
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_4a2ce5
        public_4a2d05 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_5b7e1d
        mov edx, dword ptr ds : [esi+8]
        push edx
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_5b7e1d
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x4a2c70)
    }
}

#undef public_4a2ca0
#undef public_4a2cc8
#undef public_4a2ce1
#undef public_4a2ce5
#undef public_4a2d05
