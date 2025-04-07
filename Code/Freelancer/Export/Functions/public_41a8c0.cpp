#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a8c0);
CLANG_FORWARD_PROC_SYMBOL(public_41b640);
CLANG_FORWARD_PROC_SYMBOL(public_41ba80);
CLANG_FORWARD_PROC_SYMBOL(public_433a00);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5afe80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_41a8d0 _public_41a8d0
#define public_41a900 _public_41a900
#define public_41a928 _public_41a928
#define public_41a94d _public_41a94d
#define public_41a951 _public_41a951
#define public_41a971 _public_41a971

PROC_DECLARE(0x41a8c0, internal_41a8c0, public_41a8c0);
extern "C" NAKED register_t __cdecl internal_41a8c0()
{
    __asm
    {
        mov ecx, offset public_6166d8
        jmp public_41a8d0
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_41a8d0 : nop
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
        je public_41a94d
        mov ecx, eax
        cmp eax, ecx
        jne public_41a94d
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_41a928
        nop 
        lea esp, ss:[esp]
        public_41a900 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_41ba80
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
        jne public_41a900
        public_41a928 : nop
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
        jmp public_41a971
        public_41a94d : nop
        cmp eax, edi
        je public_41a971
        public_41a951 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_433a00
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_41b640
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_41a951
        public_41a971 : nop
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
        UNREACHABLE_TRAP(0x41a8c0)
    }
}

#undef public_41a8d0
#undef public_41a900
#undef public_41a928
#undef public_41a94d
#undef public_41a951
#undef public_41a971
