#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7ef0);
CLANG_FORWARD_PROC_SYMBOL(public_65d7f23);
CLANG_FORWARD_PROC_SYMBOL(public_65d8535);
CLANG_FORWARD_PROC_SYMBOL(public_65dceab);
CLANG_FORWARD_PROC_SYMBOL(public_65dcf0c);

#define public_65dceda _public_65dceda
#define public_65dcef2 _public_65dcef2
#define public_65dcef8 _public_65dcef8
#define public_65dcf01 _public_65dcf01

PROC_DECLARE(0x65dceab, internal_65dceab, public_65dceab);
extern "C" NAKED register_t __cdecl internal_65dceab()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ss : [ebp+8]
        push esi
        cmp dword ptr ds : [eax*4+public_65e55f0], 0
        lea esi, ds : [eax*4+public_65e55f0]
        jne public_65dcf01
        push edi
        push 0x18
        call public_65d8535
        mov edi, eax
        pop ecx
        test edi, edi
        jne public_65dceda
        push 0x11
        call public_65d7ef0
        pop ecx
        public_65dceda : nop
        push 0x11
        call public_65dceab
        cmp dword ptr ds : [esi], 0
        pop ecx
        push edi
        jne public_65dcef2
        call dword ptr ds : [public_65e10dc]
        mov dword ptr ds : [esi], edi
        jmp public_65dcef8
        public_65dcef2 : nop
        call public_65d7f23
        pop ecx
        public_65dcef8 : nop
        push 0x11
        call public_65dcf0c
        pop ecx
        pop edi
        public_65dcf01 : nop
        push dword ptr ds : [esi]
        call dword ptr ds : [public_65e10e0]
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x65dceab)
    }
}

#undef public_65dceda
#undef public_65dcef2
#undef public_65dcef8
#undef public_65dcf01
