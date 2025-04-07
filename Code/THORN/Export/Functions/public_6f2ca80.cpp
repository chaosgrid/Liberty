#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2ca80);

#define public_6f2cab0 _public_6f2cab0
#define public_6f2cab7 _public_6f2cab7

PROC_DECLARE(0x6f2ca80, internal_6f2ca80, public_6f2ca80);
extern "C" NAKED register_t __cdecl internal_6f2ca80()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0xC]
        push edi
        xor edi, edi
        test ecx, ecx
        jbe public_6f2cab7
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        push ebx
        push edi
        lea ebx, ss:[esp+0x10]
        push ebx
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        push edi
        push eax
        call dword ptr ds : [edx+0x18]
        mov edx, dword ptr ss : [esp+0xC]
        cmp edx, dword ptr ds : [esi+0xC]
        pop ebx
        je public_6f2cab0
        or edi, 0xFFFFFFFF
        public_6f2cab0 : nop
        mov dword ptr ds : [esi+0xC], 0
        public_6f2cab7 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f2ca80)
    }
}

#undef public_6f2cab0
#undef public_6f2cab7
