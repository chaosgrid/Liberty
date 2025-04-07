#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d05110);
CLANG_FORWARD_PROC_SYMBOL(public_6d05ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6d160d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d58e50);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d05140 _public_6d05140
#define public_6d0515f _public_6d0515f
#define public_6d05178 _public_6d05178
#define public_6d05180 _public_6d05180
#define public_6d051a0 _public_6d051a0

PROC_DECLARE(0x6d05110, internal_6d05110, public_6d05110);
extern "C" NAKED register_t __cdecl internal_6d05110()
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
        je public_6d05178
        mov ecx, eax
        cmp eax, ecx
        jne public_6d05178
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6d0515f
        nop 
        lea esp, ss:[esp]
        public_6d05140 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6d05ff0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6d05140
        public_6d0515f : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_6d051a0
        public_6d05178 : nop
        cmp eax, edi
        je public_6d051a0
        lea esp, ss:[esp]
        public_6d05180 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6d160d0
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_6d58e50
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6d05180
        public_6d051a0 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6d5ffb0
        mov edx, dword ptr ds : [esi+8]
        push edx
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6d5ffb0
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6d05110)
    }
}

#undef public_6d05140
#undef public_6d0515f
#undef public_6d05178
#undef public_6d05180
#undef public_6d051a0
