#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15a70);
CLANG_FORWARD_PROC_SYMBOL(public_6d15eb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d160d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d58e50);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d15aa0 _public_6d15aa0
#define public_6d15abf _public_6d15abf
#define public_6d15aeb _public_6d15aeb
#define public_6d15af0 _public_6d15af0
#define public_6d15b10 _public_6d15b10

PROC_DECLARE(0x6d15a70, internal_6d15a70, public_6d15a70);
extern "C" NAKED register_t __cdecl internal_6d15a70()
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
        je public_6d15aeb
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6d15aeb
        cmp ebx, eax
        jne public_6d15aeb
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6d15abf
        lea esp, ss:[esp]
        public_6d15aa0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6d15eb0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6d15aa0
        public_6d15abf : nop
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
        public_6d15aeb : nop
        cmp ecx, ebx
        je public_6d15b10
        nop 
        public_6d15af0 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6d160d0
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6d58e50
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6d15af0
        public_6d15b10 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6d15a70)
    }
}

#undef public_6d15aa0
#undef public_6d15abf
#undef public_6d15aeb
#undef public_6d15af0
#undef public_6d15b10
