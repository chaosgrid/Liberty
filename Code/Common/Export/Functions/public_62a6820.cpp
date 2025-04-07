#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a6820);
CLANG_FORWARD_PROC_SYMBOL(public_62a6c60);
CLANG_FORWARD_PROC_SYMBOL(public_62a72a0);
CLANG_FORWARD_PROC_SYMBOL(public_62a7960);
CLANG_FORWARD_PROC_SYMBOL(public_62a81b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62a6850 _public_62a6850
#define public_62a6878 _public_62a6878
#define public_62a6891 _public_62a6891
#define public_62a6895 _public_62a6895
#define public_62a68b5 _public_62a68b5

PROC_DECLARE(0x62a6820, internal_62a6820, public_62a6820);
extern "C" NAKED register_t __cdecl internal_62a6820()
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
        je public_62a6891
        mov ecx, eax
        cmp eax, ecx
        jne public_62a6891
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_62a6878
        nop 
        lea esp, ss:[esp]
        public_62a6850 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_62a7960
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_62a81b0
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_62a6850
        public_62a6878 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_62a68b5
        public_62a6891 : nop
        cmp eax, edi
        je public_62a68b5
        public_62a6895 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_62a72a0
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_62a6c60
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_62a6895
        public_62a68b5 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6391d5a
        mov edx, dword ptr ds : [esi+8]
        push edx
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6391d5a
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x62a6820)
    }
}

#undef public_62a6850
#undef public_62a6878
#undef public_62a6891
#undef public_62a6895
#undef public_62a68b5
