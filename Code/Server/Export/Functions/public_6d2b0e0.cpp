#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d228d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d2b103 _public_6d2b103
#define public_6d2b11a _public_6d2b11a
#define public_6d2b135 _public_6d2b135
#define public_6d2b171 _public_6d2b171
#define public_6d2b182 _public_6d2b182
#define public_6d2b199 _public_6d2b199
#define public_6d2b1b4 _public_6d2b1b4
#define public_6d2b1ea _public_6d2b1ea

PROC_DECLARE(0x6d2b0e0, internal_6d2b0e0, public_6d2b0e0);
extern "C" NAKED register_t __cdecl internal_6d2b0e0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        test al, al
        mov eax, dword ptr ds : [esi]
        mov edi, ecx
        je public_6d2b171
        test eax, eax
        je public_6d2b103
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 0x14
        cmp eax, ecx
        jbe public_6d2b135
        public_6d2b103 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, 0x14
        lea eax, ds:[esi+4]
        mov dword ptr ss : [esp+0x14], 0x14
        jae public_6d2b11a
        lea eax, ss:[esp+0x14]
        public_6d2b11a : nop
        mov eax, dword ptr ds : [eax]
        add eax, 8
        push eax
        call public_6d60012
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        add esp, 4
        mov dword ptr ds : [esi], eax
        public_6d2b135 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[ecx+eax+8]
        add ecx, 0x14
        test esi, esi
        mov dword ptr ds : [eax+4], ecx
        je public_6d2b1ea
        mov ecx, esi
        call public_6d228d0
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0x10], eax
        pop edi
        mov dword ptr ds : [esi+0xC], edx
        mov dword ptr ds : [esi], offset public_6d697f8
        mov eax, esi
        pop esi
        ret 0x10
        public_6d2b171 : nop
        test eax, eax
        je public_6d2b182
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+4]
        add ecx, 0x14
        cmp ecx, eax
        jbe public_6d2b1b4
        public_6d2b182 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, 0x14
        lea eax, ds:[esi+4]
        mov dword ptr ss : [esp+0x14], 0x14
        jae public_6d2b199
        lea eax, ss:[esp+0x14]
        public_6d2b199 : nop
        mov eax, dword ptr ds : [eax]
        add eax, 8
        push eax
        call public_6d60012
        mov dword ptr ds : [eax+4], 0
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        add esp, 4
        mov dword ptr ds : [esi], eax
        public_6d2b1b4 : nop
        mov esi, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ds:[ecx+esi+8]
        add ecx, 0x14
        test eax, eax
        mov dword ptr ds : [esi+4], ecx
        je public_6d2b1ea
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+8], edi
        pop edi
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], edx
        mov dword ptr ds : [eax], offset public_6d697d0
        pop esi
        ret 0x10
        public_6d2b1ea : nop
        pop edi
        xor eax, eax
        pop esi
        ret 0x10
        UNREACHABLE_TRAP(0x6d2b0e0)
    }
}

#undef public_6d2b103
#undef public_6d2b11a
#undef public_6d2b135
#undef public_6d2b171
#undef public_6d2b182
#undef public_6d2b199
#undef public_6d2b1b4
#undef public_6d2b1ea
