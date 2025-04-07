#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632c0d0);
CLANG_FORWARD_PROC_SYMBOL(public_632d510);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_632c0ef _public_632c0ef

PROC_DECLARE(0x632c0d0, internal_632c0d0, public_632c0d0);
extern "C" NAKED register_t __cdecl internal_632c0d0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        push edi
        mov edi, dword ptr ds : [eax]
        mov ebx, dword ptr ds : [edi+4]
        push 0x28
        call public_6391d9c
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_632c0ef
        mov ebx, eax
        public_632c0ef : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_632d510
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        inc eax
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x632c0d0)
    }
}

#undef public_632c0ef
