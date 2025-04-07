#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d572e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d57760);
CLANG_FORWARD_PROC_SYMBOL(public_6d57bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d595e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d59620);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d57be0 _public_6d57be0
#define public_6d57c07 _public_6d57c07
#define public_6d57c33 _public_6d57c33
#define public_6d57c37 _public_6d57c37
#define public_6d57c57 _public_6d57c57

PROC_DECLARE(0x6d57bb0, internal_6d57bb0, public_6d57bb0);
extern "C" NAKED register_t __cdecl internal_6d57bb0()
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
        je public_6d57c33
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6d57c33
        cmp ebx, eax
        jne public_6d57c33
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6d57c07
        lea esp, ss:[esp]
        public_6d57be0 : nop
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
        jne public_6d57be0
        public_6d57c07 : nop
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
        public_6d57c33 : nop
        cmp ecx, ebx
        je public_6d57c57
        public_6d57c37 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6d59620
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6d57760
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6d57c37
        public_6d57c57 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6d57bb0)
    }
}

#undef public_6d57be0
#undef public_6d57c07
#undef public_6d57c33
#undef public_6d57c37
#undef public_6d57c57
