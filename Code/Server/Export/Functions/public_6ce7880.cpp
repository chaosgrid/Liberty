#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce7880);
CLANG_FORWARD_PROC_SYMBOL(public_6d0c6d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6ce78a2 _public_6ce78a2
#define public_6ce78bd _public_6ce78bd

PROC_DECLARE(0x6ce7880, internal_6ce7880, public_6ce7880);
extern "C" NAKED register_t __cdecl internal_6ce7880()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        mov ebx, ecx
        mov esi, dword ptr ds : [ebx+0x64]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0x10
        call public_6d60012
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6ce78a2
        mov edi, eax
        public_6ce78a2 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6ce78bd
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], ebp
        mov dword ptr ds : [eax+4], ecx
        public_6ce78bd : nop
        inc dword ptr ds : [ebx+0x68]
        mov ecx, dword ptr ds : [ebx+0x28]
        push ebx
        call public_6d0c6d0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ce7880)
    }
}

#undef public_6ce78a2
#undef public_6ce78bd
