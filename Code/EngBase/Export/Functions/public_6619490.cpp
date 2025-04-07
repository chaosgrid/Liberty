#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6619490);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_66194a5 _public_66194a5
#define public_66194d7 _public_66194d7

PROC_DECLARE(0x6619490, internal_6619490, public_6619490);
extern "C" NAKED register_t __cdecl internal_6619490()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ebx+8]
        push edi
        cmp esi, eax
        mov edi, esi
        je public_66194d7
        push ebp
        xor ebp, ebp
        public_66194a5 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, ebx
        push eax
        call public_6619490
        mov ecx, dword ptr ds : [esi+0x1C]
        mov edi, dword ptr ds : [edi]
        push ecx
        call public_66281d0
        push esi
        mov dword ptr ds : [esi+0x1C], ebp
        mov dword ptr ds : [esi+0x20], ebp
        mov dword ptr ds : [esi+0x24], ebp
        call public_66281d0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 8
        cmp edi, eax
        mov esi, edi
        jne public_66194a5
        pop ebp
        public_66194d7 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6619490)
    }
}

#undef public_66194a5
#undef public_66194d7
