#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6460);
CLANG_FORWARD_PROC_SYMBOL(public_65d6940);
CLANG_FORWARD_PROC_SYMBOL(public_65d6f71);

#define public_65d6481 _public_65d6481

PROC_DECLARE(0x65d6460, internal_65d6460, public_65d6460);
extern "C" NAKED register_t __cdecl internal_65d6460()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        push esi
        mov ebp, dword ptr ds : [ebx+4]
        push edi
        push 0xC
        mov edi, ecx
        call public_65d6f71
        mov esi, eax
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [esi], ebx
        jne public_65d6481
        mov ebp, esi
        public_65d6481 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [ebx+4], esi
        mov eax, dword ptr ds : [esi+4]
        lea edx, ds:[esi+8]
        push ecx
        push edx
        mov dword ptr ds : [eax], esi
        call public_65d6940
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
        UNREACHABLE_TRAP(0x65d6460)
    }
}

#undef public_65d6481
