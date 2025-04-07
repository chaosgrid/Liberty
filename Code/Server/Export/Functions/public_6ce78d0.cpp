#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce78d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0c730);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6ce78e5 _public_6ce78e5
#define public_6ce78f3 _public_6ce78f3
#define public_6ce78f9 _public_6ce78f9
#define public_6ce7900 _public_6ce7900

PROC_DECLARE(0x6ce78d0, internal_6ce78d0, public_6ce78d0);
extern "C" NAKED register_t __cdecl internal_6ce78d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x64]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        push edi
        je public_6ce78f9
        mov edi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        public_6ce78e5 : nop
        cmp dword ptr ds : [eax+0xC], edi
        jne public_6ce78f3
        test edx, edx
        jl public_6ce7900
        cmp dword ptr ds : [eax+8], edx
        je public_6ce7900
        public_6ce78f3 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6ce78e5
        public_6ce78f9 : nop
        pop edi
        pop esi
        xor al, al
        ret 8
        public_6ce7900 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6d5ffb0
        mov ecx, dword ptr ds : [esi+0x68]
        add esp, 4
        dec ecx
        mov dword ptr ds : [esi+0x68], ecx
        mov ecx, dword ptr ds : [esi+0x28]
        push esi
        call public_6d0c730
        pop edi
        pop esi
        mov al, 1
        ret 8
        UNREACHABLE_TRAP(0x6ce78d0)
    }
}

#undef public_6ce78e5
#undef public_6ce78f3
#undef public_6ce78f9
#undef public_6ce7900
