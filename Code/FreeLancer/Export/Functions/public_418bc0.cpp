#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418bc0);
CLANG_FORWARD_PROC_SYMBOL(public_418cd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_418be4 _public_418be4

PROC_DECLARE(0x418bc0, internal_418bc0, public_418bc0);
extern "C" NAKED register_t __cdecl internal_418bc0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, dword ptr ds : [ebx+4]
        push esi
        push edi
        push 0x178
        mov edi, ecx
        call public_5b7e84
        add esp, 4
        test ebp, ebp
        mov esi, eax
        mov dword ptr ds : [esi], ebx
        jne public_418be4
        mov ebp, esi
        public_418be4 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [ebx+4], esi
        mov eax, dword ptr ds : [esi+4]
        push ecx
        lea edx, ds:[esi+8]
        push edx
        mov dword ptr ds : [eax], esi
        call public_418cd0
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
        UNREACHABLE_TRAP(0x418bc0)
    }
}

#undef public_418be4
