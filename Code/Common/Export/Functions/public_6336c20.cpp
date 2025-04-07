#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6336c20);
CLANG_FORWARD_PROC_SYMBOL(public_633f580);
CLANG_FORWARD_PROC_SYMBOL(public_633f9d0);
CLANG_FORWARD_PROC_SYMBOL(public_633fc90);
CLANG_FORWARD_PROC_SYMBOL(public_6341570);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6336c50 _public_6336c50
#define public_6336c78 _public_6336c78
#define public_6336c9d _public_6336c9d
#define public_6336ca1 _public_6336ca1
#define public_6336cc1 _public_6336cc1

PROC_DECLARE(0x6336c20, internal_6336c20, public_6336c20);
extern "C" NAKED register_t __cdecl internal_6336c20()
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
        je public_6336c9d
        mov ecx, eax
        cmp eax, ecx
        jne public_6336c9d
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6336c78
        nop 
        lea esp, ss:[esp]
        public_6336c50 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_633f9d0
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_6341570
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6336c50
        public_6336c78 : nop
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
        jmp public_6336cc1
        public_6336c9d : nop
        cmp eax, edi
        je public_6336cc1
        public_6336ca1 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_633fc90
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_633f580
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6336ca1
        public_6336cc1 : nop
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
        UNREACHABLE_TRAP(0x6336c20)
    }
}

#undef public_6336c50
#undef public_6336c78
#undef public_6336c9d
#undef public_6336ca1
#undef public_6336cc1
