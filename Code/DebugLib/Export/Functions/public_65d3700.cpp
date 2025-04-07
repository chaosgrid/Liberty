#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d3700);
CLANG_FORWARD_PROC_SYMBOL(public_65d3cf0);
CLANG_FORWARD_PROC_SYMBOL(public_65d3d00);
CLANG_FORWARD_PROC_SYMBOL(public_65d3f30);
CLANG_FORWARD_PROC_SYMBOL(public_65d4310);
CLANG_FORWARD_PROC_SYMBOL(public_65d5000);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);

#define public_65d372d _public_65d372d
#define public_65d3755 _public_65d3755
#define public_65d377a _public_65d377a
#define public_65d377e _public_65d377e
#define public_65d379e _public_65d379e

PROC_DECLARE(0x65d3700, internal_65d3700, public_65d3700);
extern "C" NAKED register_t __cdecl internal_65d3700()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        xor ebp, ebp
        mov edi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0x10]
        cmp ecx, ebp
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], eax
        je public_65d377a
        mov ecx, eax
        cmp eax, ecx
        jne public_65d377a
        mov ebx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [esi+8]
        cmp ebx, eax
        mov edi, ebx
        je public_65d3755
        public_65d372d : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, esi
        push eax
        call public_65d4310
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_65d5000
        push ebx
        call public_65d6cb8
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_65d372d
        public_65d3755 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov ecx, esi
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x14]
        push eax
        call public_65d3cf0
        jmp public_65d379e
        public_65d377a : nop
        cmp eax, edi
        je public_65d379e
        public_65d377e : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_65d3d00
        lea ecx, ss:[esp+0x18]
        push ebx
        push ecx
        mov ecx, esi
        call public_65d3f30
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_65d377e
        public_65d379e : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_65d6cb8
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], ebp
        push eax
        mov dword ptr ds : [esi+0x10], ebp
        call public_65d6cb8
        add esp, 8
        mov dword ptr ds : [esi+8], ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x65d3700)
    }
}

#undef public_65d372d
#undef public_65d3755
#undef public_65d377a
#undef public_65d377e
#undef public_65d379e
