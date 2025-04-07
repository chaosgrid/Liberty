#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d292d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d292ef _public_6d292ef
#define public_6d29306 _public_6d29306
#define public_6d29321 _public_6d29321

PROC_DECLARE(0x6d292d0, internal_6d292d0, public_6d292d0);
extern "C" NAKED register_t __cdecl internal_6d292d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [eax]
        push edi
        mov edi, ecx
        mov dword ptr ds : [edi], esi
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6d292ef
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+4]
        add ecx, 0xC
        cmp ecx, eax
        jbe public_6d29321
        public_6d292ef : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, 0xC
        lea eax, ds:[esi+4]
        mov dword ptr ss : [esp+0xC], 0xC
        jae public_6d29306
        lea eax, ss:[esp+0xC]
        public_6d29306 : nop
        mov eax, dword ptr ds : [eax]
        add eax, 8
        push eax
        call public_6d60012
        mov dword ptr ds : [eax+4], 0
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        add esp, 4
        mov dword ptr ds : [esi], eax
        public_6d29321 : nop
        mov esi, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ds:[ecx+esi+8]
        add ecx, 0xC
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], 0
        mov eax, edi
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d292d0)
    }
}

#undef public_6d292ef
#undef public_6d29306
#undef public_6d29321
