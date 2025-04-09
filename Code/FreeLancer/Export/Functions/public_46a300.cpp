#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4684e0);
CLANG_FORWARD_PROC_SYMBOL(public_4686e0);
CLANG_FORWARD_PROC_SYMBOL(public_46a300);
CLANG_FORWARD_PROC_SYMBOL(public_46d680);
CLANG_FORWARD_PROC_SYMBOL(public_5999b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_46a330 _public_46a330
#define public_46a345 _public_46a345
#define public_46a364 _public_46a364
#define public_46a3b5 _public_46a3b5

PROC_DECLARE(0x46a300, internal_46a300, public_46a300);
extern "C" NAKED register_t __cdecl internal_46a300()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        jbe public_46a3b5
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebp
        mov ebp, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0xC], ebp
        mov ebx, dword ptr ss : [ebp+4]
        push edi
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_46a345
        lea esp, ss:[esp]
        public_46a330 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebp
        call public_46d680
        cmp edi, ebx
        jne public_46a330
        public_46a345 : nop
        mov dword ptr ss : [ebp+0xC], 0
        mov edi, dword ptr ds : [esi+0x10]
        mov ebx, dword ptr ds : [edi+4]
        push 0xC
        call public_5b7e84
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_46a364
        mov ebx, eax
        public_46a364 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x10]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_5999b0
        inc dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 0xC
        dec eax
        mov ecx, esi
        mov dword ptr ds : [esi+8], eax
        call public_4686e0
        mov ecx, esi
        call public_4684e0
        pop edi
        pop ebp
        pop ebx
        public_46a3b5 : nop
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x46a300)
    }
}

#undef public_46a330
#undef public_46a345
#undef public_46a364
#undef public_46a3b5
