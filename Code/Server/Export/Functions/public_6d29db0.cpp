#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d228d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d29dd3 _public_6d29dd3
#define public_6d29dea _public_6d29dea
#define public_6d29e05 _public_6d29e05
#define public_6d29e41 _public_6d29e41
#define public_6d29e52 _public_6d29e52
#define public_6d29e69 _public_6d29e69
#define public_6d29e84 _public_6d29e84
#define public_6d29eba _public_6d29eba

PROC_DECLARE(0x6d29db0, internal_6d29db0, public_6d29db0);
extern "C" NAKED register_t __cdecl internal_6d29db0()
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
        je public_6d29e41
        test eax, eax
        je public_6d29dd3
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 0x14
        cmp eax, ecx
        jbe public_6d29e05
        public_6d29dd3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, 0x14
        lea eax, ds:[esi+4]
        mov dword ptr ss : [esp+0x14], 0x14
        jae public_6d29dea
        lea eax, ss:[esp+0x14]
        public_6d29dea : nop
        mov eax, dword ptr ds : [eax]
        add eax, 8
        push eax
        call public_6d60012
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        add esp, 4
        mov dword ptr ds : [esi], eax
        public_6d29e05 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[ecx+eax+8]
        add ecx, 0x14
        test esi, esi
        mov dword ptr ds : [eax+4], ecx
        je public_6d29eba
        mov ecx, esi
        call public_6d228d0
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0x10], eax
        pop edi
        mov dword ptr ds : [esi+0xC], edx
        mov dword ptr ds : [esi], offset public_6d696b8
        mov eax, esi
        pop esi
        ret 0x10
        public_6d29e41 : nop
        test eax, eax
        je public_6d29e52
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+4]
        add ecx, 0x14
        cmp ecx, eax
        jbe public_6d29e84
        public_6d29e52 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, 0x14
        lea eax, ds:[esi+4]
        mov dword ptr ss : [esp+0x14], 0x14
        jae public_6d29e69
        lea eax, ss:[esp+0x14]
        public_6d29e69 : nop
        mov eax, dword ptr ds : [eax]
        add eax, 8
        push eax
        call public_6d60012
        mov dword ptr ds : [eax+4], 0
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        add esp, 4
        mov dword ptr ds : [esi], eax
        public_6d29e84 : nop
        mov esi, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ds:[ecx+esi+8]
        add ecx, 0x14
        test eax, eax
        mov dword ptr ds : [esi+4], ecx
        je public_6d29eba
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+8], edi
        pop edi
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], edx
        mov dword ptr ds : [eax], offset public_6d69690
        pop esi
        ret 0x10
        public_6d29eba : nop
        pop edi
        xor eax, eax
        pop esi
        ret 0x10
        UNREACHABLE_TRAP(0x6d29db0)
    }
}

#undef public_6d29dd3
#undef public_6d29dea
#undef public_6d29e05
#undef public_6d29e41
#undef public_6d29e52
#undef public_6d29e69
#undef public_6d29e84
#undef public_6d29eba
