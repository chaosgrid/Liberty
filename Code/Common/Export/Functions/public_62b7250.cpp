#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b7250);
CLANG_FORWARD_PROC_SYMBOL(public_62ba290);
CLANG_FORWARD_PROC_SYMBOL(public_62ba6f0);
CLANG_FORWARD_PROC_SYMBOL(public_62bae60);
CLANG_FORWARD_PROC_SYMBOL(public_62bb540);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62b7280 _public_62b7280
#define public_62b72a8 _public_62b72a8
#define public_62b72cd _public_62b72cd
#define public_62b72d1 _public_62b72d1
#define public_62b72f1 _public_62b72f1

PROC_DECLARE(0x62b7250, internal_62b7250, public_62b7250);
extern "C" NAKED register_t __cdecl internal_62b7250()
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
        je public_62b72cd
        mov ecx, eax
        cmp eax, ecx
        jne public_62b72cd
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_62b72a8
        nop 
        lea esp, ss:[esp]
        public_62b7280 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_62ba6f0
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_62bb540
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_62b7280
        public_62b72a8 : nop
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
        jmp public_62b72f1
        public_62b72cd : nop
        cmp eax, edi
        je public_62b72f1
        public_62b72d1 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_62bae60
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_62ba290
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_62b72d1
        public_62b72f1 : nop
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
        UNREACHABLE_TRAP(0x62b7250)
    }
}

#undef public_62b7280
#undef public_62b72a8
#undef public_62b72cd
#undef public_62b72d1
#undef public_62b72f1
