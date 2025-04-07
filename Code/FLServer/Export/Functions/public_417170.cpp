#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417170);
CLANG_FORWARD_PROC_SYMBOL(public_4177f0);
CLANG_FORWARD_PROC_SYMBOL(public_417880);
CLANG_FORWARD_PROC_SYMBOL(public_417c60);
CLANG_FORWARD_PROC_SYMBOL(public_417d30);
CLANG_FORWARD_PROC_SYMBOL(public_417da0);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_417180 _public_417180
#define public_4171b0 _public_4171b0
#define public_4171d8 _public_4171d8
#define public_4171fd _public_4171fd
#define public_417201 _public_417201
#define public_417221 _public_417221

PROC_DECLARE(0x417170, internal_417170, public_417170);
extern "C" NAKED register_t __cdecl internal_417170()
{
    __asm
    {
        mov ecx, offset public_429ddc
        jmp public_417180
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_417180 : nop
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
        je public_4171fd
        mov ecx, eax
        cmp eax, ecx
        jne public_4171fd
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_4171d8
        nop 
        lea esp, ss:[esp]
        public_4171b0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_417c60
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_417da0
        push ebx
        call public_418978
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_4171b0
        public_4171d8 : nop
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
        call public_4177f0
        jmp public_417221
        public_4171fd : nop
        cmp eax, edi
        je public_417221
        public_417201 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_417d30
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_417880
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_417201
        public_417221 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_418978
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_418978
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x417170)
    }
}

#undef public_417180
#undef public_4171b0
#undef public_4171d8
#undef public_4171fd
#undef public_417201
#undef public_417221
