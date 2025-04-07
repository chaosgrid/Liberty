#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f03670);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f30b60);
CLANG_FORWARD_PROC_SYMBOL(public_6f56f30);
CLANG_FORWARD_PROC_SYMBOL(public_6f583f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f58a80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f58400 _public_6f58400
#define public_6f58430 _public_6f58430
#define public_6f58458 _public_6f58458
#define public_6f5847d _public_6f5847d
#define public_6f58481 _public_6f58481
#define public_6f584a1 _public_6f584a1

PROC_DECLARE(0x6f583f0, internal_6f583f0, public_6f583f0);
extern "C" NAKED register_t __cdecl internal_6f583f0()
{
    __asm
    {
        mov ecx, offset public_6fd0dc8
        jmp public_6f58400
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_6f58400 : nop
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
        je public_6f5847d
        mov ecx, eax
        cmp eax, ecx
        jne public_6f5847d
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f58458
        nop 
        lea esp, ss:[esp]
        public_6f58430 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6f58a80
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
        jne public_6f58430
        public_6f58458 : nop
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
        jmp public_6f584a1
        public_6f5847d : nop
        cmp eax, edi
        je public_6f584a1
        public_6f58481 : nop
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
        jne public_6f58481
        public_6f584a1 : nop
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
        UNREACHABLE_TRAP(0x6f583f0)
    }
}

#undef public_6f58400
#undef public_6f58430
#undef public_6f58458
#undef public_6f5847d
#undef public_6f58481
#undef public_6f584a1
