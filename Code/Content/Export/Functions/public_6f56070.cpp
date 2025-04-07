#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f03670);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f30b60);
CLANG_FORWARD_PROC_SYMBOL(public_6f56070);
CLANG_FORWARD_PROC_SYMBOL(public_6f568c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f56f30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f56080 _public_6f56080
#define public_6f560b0 _public_6f560b0
#define public_6f560d8 _public_6f560d8
#define public_6f560fd _public_6f560fd
#define public_6f56101 _public_6f56101
#define public_6f56121 _public_6f56121

PROC_DECLARE(0x6f56070, internal_6f56070, public_6f56070);
extern "C" NAKED register_t __cdecl internal_6f56070()
{
    __asm
    {
        mov ecx, offset public_6fd0d2c
        jmp public_6f56080
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_6f56080 : nop
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
        je public_6f560fd
        mov ecx, eax
        cmp eax, ecx
        jne public_6f560fd
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f560d8
        nop 
        lea esp, ss:[esp]
        public_6f560b0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6f568c0
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_6f56f30
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f560b0
        public_6f560d8 : nop
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
        call public_6f1df30
        jmp public_6f56121
        public_6f560fd : nop
        cmp eax, edi
        je public_6f56121
        public_6f56101 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6f03670
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6f30b60
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6f56101
        public_6f56121 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6fa8fe0
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f56070)
    }
}

#undef public_6f56080
#undef public_6f560b0
#undef public_6f560d8
#undef public_6f560fd
#undef public_6f56101
#undef public_6f56121
