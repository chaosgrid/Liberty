#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46bb00);
CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_46bb1d _public_46bb1d

PROC_DECLARE(0x46bb00, internal_46bb00, public_46bb00);
extern "C" NAKED register_t __cdecl internal_46bb00()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [edi+4]
        push 0xC
        call public_5b7e84
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_46bb1d
        mov ebx, eax
        public_46bb1d : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_46ea00
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        inc eax
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x46bb00)
    }
}

#undef public_46bb1d
