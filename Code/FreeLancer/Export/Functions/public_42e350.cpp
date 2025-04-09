#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42e350);
CLANG_FORWARD_PROC_SYMBOL(public_42f960);
CLANG_FORWARD_PROC_SYMBOL(public_42fdb0);
CLANG_FORWARD_PROC_SYMBOL(public_430450);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5afe80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_42e360 _public_42e360
#define public_42e390 _public_42e390
#define public_42e3b8 _public_42e3b8
#define public_42e3dd _public_42e3dd
#define public_42e3e1 _public_42e3e1
#define public_42e401 _public_42e401

PROC_DECLARE(0x42e350, internal_42e350, public_42e350);
extern "C" NAKED register_t __cdecl internal_42e350()
{
    __asm
    {
        mov ecx, offset public_667d78
        jmp public_42e360
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_42e360 : nop
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
        je public_42e3dd
        mov ecx, eax
        cmp eax, ecx
        jne public_42e3dd
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_42e3b8
        nop 
        lea esp, ss:[esp]
        public_42e390 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_42fdb0
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_5afe80
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_42e390
        public_42e3b8 : nop
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
        jmp public_42e401
        public_42e3dd : nop
        cmp eax, edi
        je public_42e401
        public_42e3e1 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_430450
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_42f960
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_42e3e1
        public_42e401 : nop
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
        UNREACHABLE_TRAP(0x42e350)
    }
}

#undef public_42e360
#undef public_42e390
#undef public_42e3b8
#undef public_42e3dd
#undef public_42e3e1
#undef public_42e401
