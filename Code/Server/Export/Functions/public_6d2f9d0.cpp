#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d228d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d2f9f3 _public_6d2f9f3
#define public_6d2fa0a _public_6d2fa0a
#define public_6d2fa25 _public_6d2fa25
#define public_6d2fa61 _public_6d2fa61
#define public_6d2fa72 _public_6d2fa72
#define public_6d2fa89 _public_6d2fa89
#define public_6d2faa4 _public_6d2faa4
#define public_6d2fada _public_6d2fada

PROC_DECLARE(0x6d2f9d0, internal_6d2f9d0, public_6d2f9d0);
extern "C" NAKED register_t __cdecl internal_6d2f9d0()
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
        je public_6d2fa61
        test eax, eax
        je public_6d2f9f3
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 0x14
        cmp eax, ecx
        jbe public_6d2fa25
        public_6d2f9f3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, 0x14
        lea eax, ds:[esi+4]
        mov dword ptr ss : [esp+0x14], 0x14
        jae public_6d2fa0a
        lea eax, ss:[esp+0x14]
        public_6d2fa0a : nop
        mov eax, dword ptr ds : [eax]
        add eax, 8
        push eax
        call public_6d60012
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        add esp, 4
        mov dword ptr ds : [esi], eax
        public_6d2fa25 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[ecx+eax+8]
        add ecx, 0x14
        test esi, esi
        mov dword ptr ds : [eax+4], ecx
        je public_6d2fada
        mov ecx, esi
        call public_6d228d0
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0x10], eax
        pop edi
        mov dword ptr ds : [esi+0xC], edx
        mov dword ptr ds : [esi], offset public_6d69a78
        mov eax, esi
        pop esi
        ret 0x10
        public_6d2fa61 : nop
        test eax, eax
        je public_6d2fa72
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+4]
        add ecx, 0x14
        cmp ecx, eax
        jbe public_6d2faa4
        public_6d2fa72 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, 0x14
        lea eax, ds:[esi+4]
        mov dword ptr ss : [esp+0x14], 0x14
        jae public_6d2fa89
        lea eax, ss:[esp+0x14]
        public_6d2fa89 : nop
        mov eax, dword ptr ds : [eax]
        add eax, 8
        push eax
        call public_6d60012
        mov dword ptr ds : [eax+4], 0
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        add esp, 4
        mov dword ptr ds : [esi], eax
        public_6d2faa4 : nop
        mov esi, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ds:[ecx+esi+8]
        add ecx, 0x14
        test eax, eax
        mov dword ptr ds : [esi+4], ecx
        je public_6d2fada
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+8], edi
        pop edi
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], edx
        mov dword ptr ds : [eax], offset public_6d69a50
        pop esi
        ret 0x10
        public_6d2fada : nop
        pop edi
        xor eax, eax
        pop esi
        ret 0x10
        UNREACHABLE_TRAP(0x6d2f9d0)
    }
}

#undef public_6d2f9f3
#undef public_6d2fa0a
#undef public_6d2fa25
#undef public_6d2fa61
#undef public_6d2fa72
#undef public_6d2fa89
#undef public_6d2faa4
#undef public_6d2fada
