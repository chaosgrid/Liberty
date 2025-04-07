#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef22d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef2440);

#define public_6ef2464 _public_6ef2464
#define public_6ef2479 _public_6ef2479
#define public_6ef248a _public_6ef248a
#define public_6ef24d5 _public_6ef24d5
#define public_6ef24e6 _public_6ef24e6

PROC_DECLARE(0x6ef2440, internal_6ef2440, public_6ef2440);
extern "C" NAKED register_t __cdecl internal_6ef2440()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x100]
        test eax, eax
        je public_6ef24e6
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        test ebx, ebx
        push edi
        jbe public_6ef2464
        push ebx
        push eax
        call public_6ef22d0
        mov ebx, eax
        public_6ef2464 : nop
        mov edi, dword ptr ss : [esp+0x14]
        test edi, edi
        jbe public_6ef248a
        cmp dword ptr ds : [esi+0xD0], 0xFFFFFFFF
        jne public_6ef2479
        xor edi, edi
        jmp public_6ef248a
        public_6ef2479 : nop
        mov eax, dword ptr ds : [esi+0x108]
        push edi
        push eax
        mov ecx, esi
        call public_6ef22d0
        mov edi, eax
        public_6ef248a : nop
        mov edx, dword ptr ds : [esi+0x108]
        mov eax, dword ptr ds : [esi+0xB8]
        mov ecx, dword ptr ds : [eax]
        push edi
        push edx
        mov edx, dword ptr ds : [esi+0x100]
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x4C]
        test edi, edi
        mov dword ptr ds : [esi+0x100], 0
        mov dword ptr ds : [esi+0x108], 0
        jne public_6ef24d5
        mov eax, dword ptr ds : [esi+0xC0]
        add eax, ebx
        mov dword ptr ds : [esi+0xC0], eax
        lea eax, ds:[ebx+edi]
        pop edi
        pop ebx
        pop esi
        ret 8
        public_6ef24d5 : nop
        mov eax, edi
        mov dword ptr ds : [esi+0xC0], eax
        lea eax, ds:[ebx+edi]
        pop edi
        pop ebx
        pop esi
        ret 8
        public_6ef24e6 : nop
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6ef2440)
    }
}

#undef public_6ef2464
#undef public_6ef2479
#undef public_6ef248a
#undef public_6ef24d5
#undef public_6ef24e6
