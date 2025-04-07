#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d160d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d56fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d58e50);
CLANG_FORWARD_PROC_SYMBOL(public_6d59320);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d57000 _public_6d57000
#define public_6d5701f _public_6d5701f
#define public_6d57038 _public_6d57038
#define public_6d57040 _public_6d57040
#define public_6d57060 _public_6d57060

PROC_DECLARE(0x6d56fd0, internal_6d56fd0, public_6d56fd0);
extern "C" NAKED register_t __cdecl internal_6d56fd0()
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
        je public_6d57038
        mov ecx, eax
        cmp eax, ecx
        jne public_6d57038
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6d5701f
        nop 
        lea esp, ss:[esp]
        public_6d57000 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6d59320
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6d57000
        public_6d5701f : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_6d57060
        public_6d57038 : nop
        cmp eax, edi
        je public_6d57060
        lea esp, ss:[esp]
        public_6d57040 : nop
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
        jne public_6d57040
        public_6d57060 : nop
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
        UNREACHABLE_TRAP(0x6d56fd0)
    }
}

#undef public_6d57000
#undef public_6d5701f
#undef public_6d57038
#undef public_6d57040
#undef public_6d57060
