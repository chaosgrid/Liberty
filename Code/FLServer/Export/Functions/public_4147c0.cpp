#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4147c0);
CLANG_FORWARD_PROC_SYMBOL(public_415400);
CLANG_FORWARD_PROC_SYMBOL(public_418a9e);

#define public_4147e1 _public_4147e1

PROC_DECLARE(0x4147c0, internal_4147c0, public_4147c0);
extern "C" NAKED register_t __cdecl internal_4147c0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, dword ptr ds : [ebx+4]
        push esi
        push edi
        push 0xC
        mov edi, ecx
        call public_418a9e
        add esp, 4
        test ebp, ebp
        mov esi, eax
        mov dword ptr ds : [esi], ebx
        jne public_4147e1
        mov ebp, esi
        public_4147e1 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [ebx+4], esi
        mov eax, dword ptr ds : [esi+4]
        push ecx
        lea edx, ds:[esi+8]
        push edx
        mov dword ptr ds : [eax], esi
        call public_415400
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
        UNREACHABLE_TRAP(0x4147c0)
    }
}

#undef public_4147e1
