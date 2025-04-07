#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632c550);
CLANG_FORWARD_PROC_SYMBOL(public_632d5a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_632c571 _public_632c571

PROC_DECLARE(0x632c550, internal_632c550, public_632c550);
extern "C" NAKED register_t __cdecl internal_632c550()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, dword ptr ds : [ebx+4]
        push esi
        push edi
        push 0x20
        mov edi, ecx
        call public_6391d9c
        add esp, 4
        test ebp, ebp
        mov esi, eax
        mov dword ptr ds : [esi], ebx
        jne public_632c571
        mov ebp, esi
        public_632c571 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [ebx+4], esi
        mov eax, dword ptr ds : [esi+4]
        push ecx
        lea edx, ds:[esi+8]
        push edx
        mov dword ptr ds : [eax], esi
        call public_632d5a0
        mov eax, dword ptr ds : [edi+8]
        add esp, 8
        inc eax
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x632c550)
    }
}

#undef public_632c571
