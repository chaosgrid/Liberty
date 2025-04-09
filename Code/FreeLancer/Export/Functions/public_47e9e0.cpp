#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_47e9e0);
CLANG_FORWARD_PROC_SYMBOL(public_5798b0);
CLANG_FORWARD_PROC_SYMBOL(public_57b370);

#define public_47ea0a _public_47ea0a
#define public_47ea30 _public_47ea30
#define public_47ea7c _public_47ea7c
#define public_47eaaa _public_47eaaa

PROC_DECLARE(0x47e9e0, internal_47e9e0, public_47e9e0);
extern "C" NAKED register_t __cdecl internal_47e9e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+0x4BC]
        test edi, edi
        je public_47ea0a
        mov al, byte ptr ds : [esi+0x35C]
        test al, al
        je public_47ea0a
        push 0
        push 0
        mov ecx, edi
        call public_5798b0
        mov ecx, edi
        call public_57b370
        public_47ea0a : nop
        mov eax, dword ptr ds : [esi+0x360]
        test eax, eax
        je public_47ea30
        mov edi, dword ptr ds : [eax+0x4BC]
        test edi, edi
        je public_47ea30
        push 0
        push 0
        mov ecx, edi
        call public_5798b0
        mov ecx, edi
        call public_57b370
        public_47ea30 : nop
        mov edi, dword ptr ds : [esi+0x398]
        test edi, edi
        je public_47ea7c
        push 0
        push 0
        mov ecx, edi
        call public_5798b0
        mov ecx, edi
        call public_57b370
        mov edi, dword ptr ds : [esi+0x39C]
        push 0
        push 0
        mov ecx, edi
        call public_5798b0
        mov ecx, edi
        call public_57b370
        mov edi, dword ptr ds : [esi+0x3A0]
        push 0
        push 0
        mov ecx, edi
        call public_5798b0
        mov ecx, edi
        call public_57b370
        public_47ea7c : nop
        mov eax, dword ptr ds : [esi+0x360]
        test eax, eax
        mov dword ptr ds : [esi+0x4E8], 0
        je public_47eaaa
        mov dword ptr ds : [eax+0x4E8], 0
        mov eax, dword ptr ds : [esi+0x360]
        mov dword ptr ds : [eax+0x4E8], 0
        public_47eaaa : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x47e9e0)
    }
}

#undef public_47ea0a
#undef public_47ea30
#undef public_47ea7c
#undef public_47eaaa
