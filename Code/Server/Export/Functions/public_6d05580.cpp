#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d05580);
CLANG_FORWARD_PROC_SYMBOL(public_6d05ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6d160d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d58e50);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d055a8 _public_6d055a8
#define public_6d055c7 _public_6d055c7
#define public_6d055e9 _public_6d055e9
#define public_6d055f0 _public_6d055f0
#define public_6d05610 _public_6d05610

PROC_DECLARE(0x6d05580, internal_6d05580, public_6d05580);
extern "C" NAKED register_t __cdecl internal_6d05580()
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
        je public_6d055e9
        mov ecx, eax
        cmp eax, ecx
        jne public_6d055e9
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6d055c7
        public_6d055a8 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6d05ff0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6d055a8
        public_6d055c7 : nop
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
        public_6d055e9 : nop
        cmp eax, edi
        je public_6d05610
        lea ecx, ds:[ecx]
        public_6d055f0 : nop
        lea ecx, ss:[esp+0xC]
        mov ebx, eax
        call public_6d160d0
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6d58e50
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, edi
        jne public_6d055f0
        public_6d05610 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6d05580)
    }
}

#undef public_6d055a8
#undef public_6d055c7
#undef public_6d055e9
#undef public_6d055f0
#undef public_6d05610
