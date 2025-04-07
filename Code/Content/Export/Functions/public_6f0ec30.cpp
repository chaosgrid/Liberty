#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f0ec30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1f560);
CLANG_FORWARD_PROC_SYMBOL(public_6f1f940);
CLANG_FORWARD_PROC_SYMBOL(public_6f21650);
CLANG_FORWARD_PROC_SYMBOL(public_6f229a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f0ec60 _public_6f0ec60
#define public_6f0ec88 _public_6f0ec88
#define public_6f0ecad _public_6f0ecad
#define public_6f0ecb1 _public_6f0ecb1
#define public_6f0ecd1 _public_6f0ecd1

PROC_DECLARE(0x6f0ec30, internal_6f0ec30, public_6f0ec30);
extern "C" NAKED register_t __cdecl internal_6f0ec30()
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
        je public_6f0ecad
        mov ecx, eax
        cmp eax, ecx
        jne public_6f0ecad
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f0ec88
        nop 
        lea esp, ss:[esp]
        public_6f0ec60 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6f1f940
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_6f229a0
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f0ec60
        public_6f0ec88 : nop
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
        call public_6f1df30
        jmp public_6f0ecd1
        public_6f0ecad : nop
        cmp eax, edi
        je public_6f0ecd1
        public_6f0ecb1 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6f21650
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6f1f560
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6f0ecb1
        public_6f0ecd1 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6fa8fe0
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f0ec30)
    }
}

#undef public_6f0ec60
#undef public_6f0ec88
#undef public_6f0ecad
#undef public_6f0ecb1
#undef public_6f0ecd1
