#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46bcd0);
CLANG_FORWARD_PROC_SYMBOL(public_46dfb0);
CLANG_FORWARD_PROC_SYMBOL(public_46e380);
CLANG_FORWARD_PROC_SYMBOL(public_595150);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_46bd00 _public_46bd00
#define public_46bd1f _public_46bd1f
#define public_46bd38 _public_46bd38
#define public_46bd40 _public_46bd40
#define public_46bd60 _public_46bd60

PROC_DECLARE(0x46bcd0, internal_46bcd0, public_46bcd0);
extern "C" NAKED register_t __cdecl internal_46bcd0()
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
        je public_46bd38
        mov ecx, eax
        cmp eax, ecx
        jne public_46bd38
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_46bd1f
        nop 
        lea esp, ss:[esp]
        public_46bd00 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_46e380
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_46bd00
        public_46bd1f : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_46bd60
        public_46bd38 : nop
        cmp eax, edi
        je public_46bd60
        lea esp, ss:[esp]
        public_46bd40 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_595150
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_46dfb0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_46bd40
        public_46bd60 : nop
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
        UNREACHABLE_TRAP(0x46bcd0)
    }
}

#undef public_46bd00
#undef public_46bd1f
#undef public_46bd38
#undef public_46bd40
#undef public_46bd60
