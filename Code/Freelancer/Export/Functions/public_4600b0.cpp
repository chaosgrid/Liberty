#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4600b0);
CLANG_FORWARD_PROC_SYMBOL(public_46dfb0);
CLANG_FORWARD_PROC_SYMBOL(public_46e380);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_595150);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4600e0 _public_4600e0
#define public_4600ff _public_4600ff
#define public_460124 _public_460124
#define public_460128 _public_460128
#define public_460148 _public_460148

PROC_DECLARE(0x4600b0, internal_4600b0, public_4600b0);
extern "C" NAKED register_t __cdecl internal_4600b0()
{
    __asm
    {
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
        je public_460124
        mov ecx, eax
        cmp eax, ecx
        jne public_460124
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_4600ff
        nop 
        lea esp, ss:[esp]
        public_4600e0 : nop
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
        jne public_4600e0
        public_4600ff : nop
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
        call public_53e430
        jmp public_460148
        public_460124 : nop
        cmp eax, edi
        je public_460148
        public_460128 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_595150
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_46dfb0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_460128
        public_460148 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_5b7e1d
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x4600b0)
    }
}

#undef public_4600e0
#undef public_4600ff
#undef public_460124
#undef public_460128
#undef public_460148
