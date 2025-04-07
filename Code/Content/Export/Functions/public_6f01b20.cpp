#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f01b20);
CLANG_FORWARD_PROC_SYMBOL(public_6f02b60);
CLANG_FORWARD_PROC_SYMBOL(public_6f02f40);
CLANG_FORWARD_PROC_SYMBOL(public_6f03670);
CLANG_FORWARD_PROC_SYMBOL(public_6f03b60);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f01b30 _public_6f01b30
#define public_6f01b60 _public_6f01b60
#define public_6f01b88 _public_6f01b88
#define public_6f01bad _public_6f01bad
#define public_6f01bb1 _public_6f01bb1
#define public_6f01bd1 _public_6f01bd1

PROC_DECLARE(0x6f01b20, internal_6f01b20, public_6f01b20);
extern "C" NAKED register_t __cdecl internal_6f01b20()
{
    __asm
    {
        mov ecx, offset public_6fd04f8
        jmp public_6f01b30
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_6f01b30 : nop
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
        je public_6f01bad
        mov ecx, eax
        cmp eax, ecx
        jne public_6f01bad
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f01b88
        nop 
        lea esp, ss:[esp]
        public_6f01b60 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6f02f40
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_6f03b60
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f01b60
        public_6f01b88 : nop
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
        jmp public_6f01bd1
        public_6f01bad : nop
        cmp eax, edi
        je public_6f01bd1
        public_6f01bb1 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6f03670
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6f02b60
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6f01bb1
        public_6f01bd1 : nop
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
        UNREACHABLE_TRAP(0x6f01b20)
    }
}

#undef public_6f01b30
#undef public_6f01b60
#undef public_6f01b88
#undef public_6f01bad
#undef public_6f01bb1
#undef public_6f01bd1
