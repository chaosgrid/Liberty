#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);
CLANG_FORWARD_PROC_SYMBOL(public_6f20e00);
CLANG_FORWARD_PROC_SYMBOL(public_6f2fd50);
CLANG_FORWARD_PROC_SYMBOL(public_6f7a920);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f7a948 _public_6f7a948
#define public_6f7a967 _public_6f7a967
#define public_6f7a989 _public_6f7a989
#define public_6f7a990 _public_6f7a990
#define public_6f7a9b0 _public_6f7a9b0

PROC_DECLARE(0x6f7a920, internal_6f7a920, public_6f7a920);
extern "C" NAKED register_t __cdecl internal_6f7a920()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0xC], eax
        je public_6f7a989
        mov ecx, eax
        cmp eax, ecx
        jne public_6f7a989
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f7a967
        public_6f7a948 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6f2fd50
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f7a948
        public_6f7a967 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov esi, dword ptr ds : [esi+4]
        pop edi
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebx
        add esp, 8
        ret 
        public_6f7a989 : nop
        cmp eax, edi
        je public_6f7a9b0
        lea ecx, ds:[ecx]
        public_6f7a990 : nop
        lea ecx, ss:[esp+0xC]
        mov ebx, eax
        call public_6f1fa00
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6f20e00
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, edi
        jne public_6f7a990
        public_6f7a9b0 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f7a920)
    }
}

#undef public_6f7a948
#undef public_6f7a967
#undef public_6f7a989
#undef public_6f7a990
#undef public_6f7a9b0
