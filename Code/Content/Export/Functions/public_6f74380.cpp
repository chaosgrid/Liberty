#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7090);
CLANG_FORWARD_PROC_SYMBOL(public_6f74380);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f743a0 _public_6f743a0
#define public_6f743b8 _public_6f743b8

PROC_DECLARE(0x6f74380, internal_6f74380, public_6f74380);
extern "C" NAKED register_t __cdecl internal_6f74380()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        mov esi, dword ptr ds : [ebx+0xE0]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6f743a0
        mov edi, eax
        public_6f743a0 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        mov ecx, dword ptr ss : [esp+0x10]
        add eax, 8
        test eax, eax
        je public_6f743b8
        mov dword ptr ds : [eax], ecx
        public_6f743b8 : nop
        mov edx, dword ptr ds : [ebx+0xE4]
        inc edx
        push ebx
        mov dword ptr ds : [ebx+0xE4], edx
        call public_6eb7090
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f74380)
    }
}

#undef public_6f743a0
#undef public_6f743b8
