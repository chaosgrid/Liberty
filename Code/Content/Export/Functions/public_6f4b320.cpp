#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f03670);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b320);
CLANG_FORWARD_PROC_SYMBOL(public_6f4db40);
CLANG_FORWARD_PROC_SYMBOL(public_6f4df20);
CLANG_FORWARD_PROC_SYMBOL(public_6f4eb50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f4b350 _public_6f4b350
#define public_6f4b378 _public_6f4b378
#define public_6f4b39d _public_6f4b39d
#define public_6f4b3a1 _public_6f4b3a1
#define public_6f4b3c1 _public_6f4b3c1

PROC_DECLARE(0x6f4b320, internal_6f4b320, public_6f4b320);
extern "C" NAKED register_t __cdecl internal_6f4b320()
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
        je public_6f4b39d
        mov ecx, eax
        cmp eax, ecx
        jne public_6f4b39d
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f4b378
        nop 
        lea esp, ss:[esp]
        public_6f4b350 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6f4df20
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_6f4eb50
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f4b350
        public_6f4b378 : nop
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
        jmp public_6f4b3c1
        public_6f4b39d : nop
        cmp eax, edi
        je public_6f4b3c1
        public_6f4b3a1 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6f03670
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6f4db40
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6f4b3a1
        public_6f4b3c1 : nop
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
        UNREACHABLE_TRAP(0x6f4b320)
    }
}

#undef public_6f4b350
#undef public_6f4b378
#undef public_6f4b39d
#undef public_6f4b3a1
#undef public_6f4b3c1
