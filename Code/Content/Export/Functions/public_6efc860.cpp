#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef7bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6efc860);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6efc884 _public_6efc884

PROC_DECLARE(0x6efc860, internal_6efc860, public_6efc860);
extern "C" NAKED register_t __cdecl internal_6efc860()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, dword ptr ds : [ebx+4]
        push esi
        push edi
        push 0x50C
        mov edi, ecx
        call public_6fa912a
        add esp, 4
        test ebp, ebp
        mov esi, eax
        mov dword ptr ds : [esi], ebx
        jne public_6efc884
        mov ebp, esi
        public_6efc884 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [ebx+4], esi
        mov eax, dword ptr ds : [esi+4]
        push ecx
        lea edx, ds:[esi+8]
        push edx
        mov dword ptr ds : [eax], esi
        call public_6ef7bd0
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
        UNREACHABLE_TRAP(0x6efc860)
    }
}

#undef public_6efc884
