#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f40900);
CLANG_FORWARD_PROC_SYMBOL(public_6f57de0);

#define public_6f4095c _public_6f4095c
#define public_6f40981 _public_6f40981
#define public_6f40990 _public_6f40990

PROC_DECLARE(0x6f40900, internal_6f40900, public_6f40900);
extern "C" NAKED register_t __cdecl internal_6f40900()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x18
        push ebx
        mov ebx, dword ptr ss : [esp+0x24]
        push esi
        mov esi, ecx
        add eax, 8
        mov ecx, ebx
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6f40990
        mov edx, ebx
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        push edi
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edx
        je public_6f40981
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        jne public_6f4095c
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f4095c : nop
        mov ecx, dword ptr ds : [eax]
        push ebx
        push edi
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edx
        public_6f40981 : nop
        mov esi, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0xC]
        push ecx
        push esi
        call dword ptr ds : [eax+0xC]
        pop edi
        public_6f40990 : nop
        pop esi
        pop ebx
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x6f40900)
    }
}

#undef public_6f4095c
#undef public_6f40981
#undef public_6f40990
