#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1baa0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d1bab1 _public_6d1bab1
#define public_6d1bac3 _public_6d1bac3
#define public_6d1bad5 _public_6d1bad5
#define public_6d1baf0 _public_6d1baf0

PROC_DECLARE(0x6d1baa0, internal_6d1baa0, public_6d1baa0);
extern "C" NAKED register_t __cdecl internal_6d1baa0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        mov esi, ecx
        jne public_6d1bab1
        mov edi, 1
        public_6d1bab1 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6d1bac3
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+4]
        add eax, edi
        cmp eax, ecx
        jbe public_6d1baf0
        public_6d1bac3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, edi
        lea eax, ds:[esi+4]
        mov dword ptr ss : [esp+0xC], edi
        jae public_6d1bad5
        lea eax, ss:[esp+0xC]
        public_6d1bad5 : nop
        mov eax, dword ptr ds : [eax]
        add eax, 8
        push eax
        call public_6d60012
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        add esp, 4
        mov dword ptr ds : [esi], eax
        public_6d1baf0 : nop
        mov esi, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edi, 3
        and edi, 0xFFFFFFFC
        add edi, ecx
        mov dword ptr ds : [esi+4], edi
        pop edi
        lea eax, ds:[ecx+esi+8]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d1baa0)
    }
}

#undef public_6d1bab1
#undef public_6d1bac3
#undef public_6d1bad5
#undef public_6d1baf0
