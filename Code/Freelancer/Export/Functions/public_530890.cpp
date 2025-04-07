#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_530890);
CLANG_FORWARD_PROC_SYMBOL(public_5312d0);
CLANG_FORWARD_PROC_SYMBOL(public_5316a0);
CLANG_FORWARD_PROC_SYMBOL(public_531930);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5308a0 _public_5308a0
#define public_5308d0 _public_5308d0
#define public_5308ef _public_5308ef
#define public_530914 _public_530914
#define public_530918 _public_530918
#define public_530938 _public_530938

PROC_DECLARE(0x530890, internal_530890, public_530890);
extern "C" NAKED register_t __cdecl internal_530890()
{
    __asm
    {
        mov ecx, offset public_6754f4
        jmp public_5308a0
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_5308a0 : nop
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
        je public_530914
        mov ecx, eax
        cmp eax, ecx
        jne public_530914
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_5308ef
        nop 
        lea esp, ss:[esp]
        public_5308d0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_5316a0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_5308d0
        public_5308ef : nop
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
        jmp public_530938
        public_530914 : nop
        cmp eax, edi
        je public_530938
        public_530918 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_531930
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_5312d0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_530918
        public_530938 : nop
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
        UNREACHABLE_TRAP(0x530890)
    }
}

#undef public_5308a0
#undef public_5308d0
#undef public_5308ef
#undef public_530914
#undef public_530918
#undef public_530938
