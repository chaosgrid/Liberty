#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d046c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d058a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d05c80);
CLANG_FORWARD_PROC_SYMBOL(public_6d05d40);
CLANG_FORWARD_PROC_SYMBOL(public_6d06050);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d05cb0 _public_6d05cb0
#define public_6d05cd7 _public_6d05cd7
#define public_6d05d03 _public_6d05d03
#define public_6d05d07 _public_6d05d07
#define public_6d05d27 _public_6d05d27

PROC_DECLARE(0x6d05c80, internal_6d05c80, public_6d05c80);
extern "C" NAKED register_t __cdecl internal_6d05c80()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        je public_6d05d03
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6d05d03
        cmp ebx, eax
        jne public_6d05d03
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6d05cd7
        lea esp, ss:[esp]
        public_6d05cb0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6d06050
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_6d046c0
        push ebx
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6d05cb0
        public_6d05cd7 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        public_6d05d03 : nop
        cmp ecx, ebx
        je public_6d05d27
        public_6d05d07 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6d05d40
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6d058a0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6d05d07
        public_6d05d27 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6d05c80)
    }
}

#undef public_6d05cb0
#undef public_6d05cd7
#undef public_6d05d03
#undef public_6d05d07
#undef public_6d05d27
