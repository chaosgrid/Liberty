#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41b640);
CLANG_FORWARD_PROC_SYMBOL(public_431910);
CLANG_FORWARD_PROC_SYMBOL(public_4323b0);
CLANG_FORWARD_PROC_SYMBOL(public_433a00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_431940 _public_431940
#define public_43195f _public_43195f
#define public_431978 _public_431978
#define public_431980 _public_431980
#define public_4319a0 _public_4319a0

PROC_DECLARE(0x431910, internal_431910, public_431910);
extern "C" NAKED register_t __cdecl internal_431910()
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
        je public_431978
        mov ecx, eax
        cmp eax, ecx
        jne public_431978
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_43195f
        nop 
        lea esp, ss:[esp]
        public_431940 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_4323b0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_431940
        public_43195f : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_4319a0
        public_431978 : nop
        cmp eax, edi
        je public_4319a0
        lea esp, ss:[esp]
        public_431980 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_433a00
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_41b640
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_431980
        public_4319a0 : nop
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
        UNREACHABLE_TRAP(0x431910)
    }
}

#undef public_431940
#undef public_43195f
#undef public_431978
#undef public_431980
#undef public_4319a0
