#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15660);
CLANG_FORWARD_PROC_SYMBOL(public_6d15eb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d160d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d58e50);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d15690 _public_6d15690
#define public_6d156af _public_6d156af
#define public_6d156c8 _public_6d156c8
#define public_6d156d0 _public_6d156d0
#define public_6d156f0 _public_6d156f0

PROC_DECLARE(0x6d15660, internal_6d15660, public_6d15660);
extern "C" NAKED register_t __cdecl internal_6d15660()
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
        je public_6d156c8
        mov ecx, eax
        cmp eax, ecx
        jne public_6d156c8
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6d156af
        nop 
        lea esp, ss:[esp]
        public_6d15690 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6d15eb0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6d15690
        public_6d156af : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_6d156f0
        public_6d156c8 : nop
        cmp eax, edi
        je public_6d156f0
        lea esp, ss:[esp]
        public_6d156d0 : nop
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
        jne public_6d156d0
        public_6d156f0 : nop
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
        UNREACHABLE_TRAP(0x6d15660)
    }
}

#undef public_6d15690
#undef public_6d156af
#undef public_6d156c8
#undef public_6d156d0
#undef public_6d156f0
