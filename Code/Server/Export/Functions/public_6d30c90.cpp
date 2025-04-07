#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d228d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d30cb3 _public_6d30cb3
#define public_6d30cca _public_6d30cca
#define public_6d30ce5 _public_6d30ce5
#define public_6d30d21 _public_6d30d21
#define public_6d30d32 _public_6d30d32
#define public_6d30d49 _public_6d30d49
#define public_6d30d64 _public_6d30d64
#define public_6d30d9a _public_6d30d9a

PROC_DECLARE(0x6d30c90, internal_6d30c90, public_6d30c90);
extern "C" NAKED register_t __cdecl internal_6d30c90()
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
        je public_6d30d21
        test eax, eax
        je public_6d30cb3
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 0x14
        cmp eax, ecx
        jbe public_6d30ce5
        public_6d30cb3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, 0x14
        lea eax, ds:[esi+4]
        mov dword ptr ss : [esp+0x14], 0x14
        jae public_6d30cca
        lea eax, ss:[esp+0x14]
        public_6d30cca : nop
        mov eax, dword ptr ds : [eax]
        add eax, 8
        push eax
        call public_6d60012
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        add esp, 4
        mov dword ptr ds : [esi], eax
        public_6d30ce5 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[ecx+eax+8]
        add ecx, 0x14
        test esi, esi
        mov dword ptr ds : [eax+4], ecx
        je public_6d30d9a
        mov ecx, esi
        call public_6d228d0
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0x10], eax
        pop edi
        mov dword ptr ds : [esi+0xC], edx
        mov dword ptr ds : [esi], offset public_6d69d70
        mov eax, esi
        pop esi
        ret 0x10
        public_6d30d21 : nop
        test eax, eax
        je public_6d30d32
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+4]
        add ecx, 0x14
        cmp ecx, eax
        jbe public_6d30d64
        public_6d30d32 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, 0x14
        lea eax, ds:[esi+4]
        mov dword ptr ss : [esp+0x14], 0x14
        jae public_6d30d49
        lea eax, ss:[esp+0x14]
        public_6d30d49 : nop
        mov eax, dword ptr ds : [eax]
        add eax, 8
        push eax
        call public_6d60012
        mov dword ptr ds : [eax+4], 0
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        add esp, 4
        mov dword ptr ds : [esi], eax
        public_6d30d64 : nop
        mov esi, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ds:[ecx+esi+8]
        add ecx, 0x14
        test eax, eax
        mov dword ptr ds : [esi+4], ecx
        je public_6d30d9a
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+8], edi
        pop edi
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], edx
        mov dword ptr ds : [eax], offset public_6d69d48
        pop esi
        ret 0x10
        public_6d30d9a : nop
        pop edi
        xor eax, eax
        pop esi
        ret 0x10
        UNREACHABLE_TRAP(0x6d30c90)
    }
}

#undef public_6d30cb3
#undef public_6d30cca
#undef public_6d30ce5
#undef public_6d30d21
#undef public_6d30d32
#undef public_6d30d49
#undef public_6d30d64
#undef public_6d30d9a
