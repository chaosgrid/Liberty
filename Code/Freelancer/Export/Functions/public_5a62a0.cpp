#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5948b0);
CLANG_FORWARD_PROC_SYMBOL(public_5a62a0);
CLANG_FORWARD_PROC_SYMBOL(public_5a72c0);
CLANG_FORWARD_PROC_SYMBOL(public_5a76a0);
CLANG_FORWARD_PROC_SYMBOL(public_5a7f80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5a62b0 _public_5a62b0
#define public_5a62e0 _public_5a62e0
#define public_5a6308 _public_5a6308
#define public_5a632d _public_5a632d
#define public_5a6331 _public_5a6331
#define public_5a6351 _public_5a6351

PROC_DECLARE(0x5a62a0, internal_5a62a0, public_5a62a0);
extern "C" NAKED register_t __cdecl internal_5a62a0()
{
    __asm
    {
        mov ecx, offset public_67e770
        jmp public_5a62b0
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_5a62b0 : nop
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
        je public_5a632d
        mov ecx, eax
        cmp eax, ecx
        jne public_5a632d
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_5a6308
        nop 
        lea esp, ss:[esp]
        public_5a62e0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_5a76a0
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_5a7f80
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_5a62e0
        public_5a6308 : nop
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
        jmp public_5a6351
        public_5a632d : nop
        cmp eax, edi
        je public_5a6351
        public_5a6331 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_5948b0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_5a72c0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_5a6331
        public_5a6351 : nop
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
        UNREACHABLE_TRAP(0x5a62a0)
    }
}

#undef public_5a62b0
#undef public_5a62e0
#undef public_5a6308
#undef public_5a632d
#undef public_5a6331
#undef public_5a6351
