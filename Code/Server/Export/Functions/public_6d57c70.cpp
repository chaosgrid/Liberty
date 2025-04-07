#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d572e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d57760);
CLANG_FORWARD_PROC_SYMBOL(public_6d57c70);
CLANG_FORWARD_PROC_SYMBOL(public_6d595e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d59620);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d57c98 _public_6d57c98
#define public_6d57cbf _public_6d57cbf
#define public_6d57ce1 _public_6d57ce1
#define public_6d57ce5 _public_6d57ce5
#define public_6d57d05 _public_6d57d05

PROC_DECLARE(0x6d57c70, internal_6d57c70, public_6d57c70);
extern "C" NAKED register_t __cdecl internal_6d57c70()
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
        je public_6d57ce1
        mov ecx, eax
        cmp eax, ecx
        jne public_6d57ce1
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6d57cbf
        public_6d57c98 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6d595e0
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_6d572e0
        push ebx
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6d57c98
        public_6d57cbf : nop
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
        public_6d57ce1 : nop
        cmp eax, edi
        je public_6d57d05
        public_6d57ce5 : nop
        lea ecx, ss:[esp+0xC]
        mov ebx, eax
        call public_6d59620
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6d57760
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, edi
        jne public_6d57ce5
        public_6d57d05 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6d57c70)
    }
}

#undef public_6d57c98
#undef public_6d57cbf
#undef public_6d57ce1
#undef public_6d57ce5
#undef public_6d57d05
