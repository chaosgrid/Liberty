#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628f060);
CLANG_FORWARD_PROC_SYMBOL(public_628fd40);
CLANG_FORWARD_PROC_SYMBOL(public_628ffd0);
CLANG_FORWARD_PROC_SYMBOL(public_62b5ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_628f090 _public_628f090
#define public_628f0af _public_628f0af
#define public_628f0db _public_628f0db
#define public_628f0e0 _public_628f0e0
#define public_628f100 _public_628f100

PROC_DECLARE(0x628f060, internal_628f060, public_628f060);
extern "C" NAKED register_t __cdecl internal_628f060()
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
        je public_628f0db
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_628f0db
        cmp ebx, eax
        jne public_628f0db
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_628f0af
        lea esp, ss:[esp]
        public_628f090 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_628fd40
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_628f090
        public_628f0af : nop
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
        public_628f0db : nop
        cmp ecx, ebx
        je public_628f100
        nop 
        public_628f0e0 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_628ffd0
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_62b5ff0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_628f0e0
        public_628f100 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x628f060)
    }
}

#undef public_628f090
#undef public_628f0af
#undef public_628f0db
#undef public_628f0e0
#undef public_628f100
