#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62baf00);
CLANG_FORWARD_PROC_SYMBOL(public_6301280);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_630129d _public_630129d

PROC_DECLARE(0x6301280, internal_6301280, public_6301280);
extern "C" NAKED register_t __cdecl internal_6301280()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [edi+4]
        push 0x18
        call public_6391d9c
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_630129d
        mov ebx, eax
        public_630129d : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_62baf00
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        inc eax
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6301280)
    }
}

#undef public_630129d
