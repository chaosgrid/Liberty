#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4428e0);
CLANG_FORWARD_PROC_SYMBOL(public_442db0);
CLANG_FORWARD_PROC_SYMBOL(public_443190);
CLANG_FORWARD_PROC_SYMBOL(public_5948b0);
CLANG_FORWARD_PROC_SYMBOL(public_595300);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_442910 _public_442910
#define public_442938 _public_442938
#define public_442951 _public_442951
#define public_442955 _public_442955
#define public_442975 _public_442975

PROC_DECLARE(0x4428e0, internal_4428e0, public_4428e0);
extern "C" NAKED register_t __cdecl internal_4428e0()
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
        je public_442951
        mov ecx, eax
        cmp eax, ecx
        jne public_442951
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_442938
        nop 
        lea esp, ss:[esp]
        public_442910 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_443190
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_595300
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_442910
        public_442938 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_442975
        public_442951 : nop
        cmp eax, edi
        je public_442975
        public_442955 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_5948b0
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_442db0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_442955
        public_442975 : nop
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
        UNREACHABLE_TRAP(0x4428e0)
    }
}

#undef public_442910
#undef public_442938
#undef public_442951
#undef public_442955
#undef public_442975
