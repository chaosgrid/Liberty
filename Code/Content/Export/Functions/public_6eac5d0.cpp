#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eac5d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb15b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eac5ef _public_6eac5ef

PROC_DECLARE(0x6eac5d0, internal_6eac5d0, public_6eac5d0);
extern "C" NAKED register_t __cdecl internal_6eac5d0()
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
        push 0x64
        call public_6fa912a
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_6eac5ef
        mov ebx, eax
        public_6eac5ef : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6eb15b0
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        inc eax
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6eac5d0)
    }
}

#undef public_6eac5ef
