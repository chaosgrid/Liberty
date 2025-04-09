#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5785d0);
CLANG_FORWARD_PROC_SYMBOL(public_578980);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_5785f1 _public_5785f1

PROC_DECLARE(0x5785d0, internal_5785d0, public_5785d0);
extern "C" NAKED register_t __cdecl internal_5785d0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, dword ptr ds : [ebx+4]
        push esi
        push edi
        push 0x28
        mov edi, ecx
        call public_5b7e84
        add esp, 4
        test ebp, ebp
        mov esi, eax
        mov dword ptr ds : [esi], ebx
        jne public_5785f1
        mov ebp, esi
        public_5785f1 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [ebx+4], esi
        mov eax, dword ptr ds : [esi+4]
        push ecx
        lea edx, ds:[esi+8]
        push edx
        mov dword ptr ds : [eax], esi
        call public_578980
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
        UNREACHABLE_TRAP(0x5785d0)
    }
}

#undef public_5785f1
