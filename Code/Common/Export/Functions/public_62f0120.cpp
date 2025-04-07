#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f0120);
CLANG_FORWARD_PROC_SYMBOL(public_62fbfa0);
CLANG_FORWARD_PROC_SYMBOL(public_62fc380);
CLANG_FORWARD_PROC_SYMBOL(public_62fd3e0);
CLANG_FORWARD_PROC_SYMBOL(public_6319b80);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62f0150 _public_62f0150
#define public_62f0178 _public_62f0178
#define public_62f019d _public_62f019d
#define public_62f01a1 _public_62f01a1
#define public_62f01c1 _public_62f01c1

PROC_DECLARE(0x62f0120, internal_62f0120, public_62f0120);
extern "C" NAKED register_t __cdecl internal_62f0120()
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
        je public_62f019d
        mov ecx, eax
        cmp eax, ecx
        jne public_62f019d
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_62f0178
        nop 
        lea esp, ss:[esp]
        public_62f0150 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_62fc380
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_62fd3e0
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_62f0150
        public_62f0178 : nop
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
        call public_632c410
        jmp public_62f01c1
        public_62f019d : nop
        cmp eax, edi
        je public_62f01c1
        public_62f01a1 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6319b80
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_62fbfa0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_62f01a1
        public_62f01c1 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6391d5a
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62f0120)
    }
}

#undef public_62f0150
#undef public_62f0178
#undef public_62f019d
#undef public_62f01a1
#undef public_62f01c1
