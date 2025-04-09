#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46d600);
CLANG_FORWARD_PROC_SYMBOL(public_46ea50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_46d621 _public_46d621

PROC_DECLARE(0x46d600, internal_46d600, public_46d600);
extern "C" NAKED register_t __cdecl internal_46d600()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, dword ptr ds : [ebx+4]
        push esi
        push edi
        push 0x14
        mov edi, ecx
        call public_5b7e84
        add esp, 4
        test ebp, ebp
        mov esi, eax
        mov dword ptr ds : [esi], ebx
        jne public_46d621
        mov ebp, esi
        public_46d621 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [ebx+4], esi
        mov eax, dword ptr ds : [esi+4]
        push ecx
        lea edx, ds:[esi+8]
        push edx
        mov dword ptr ds : [eax], esi
        call public_46ea50
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
        UNREACHABLE_TRAP(0x46d600)
    }
}

#undef public_46d621
