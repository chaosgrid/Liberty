#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4d5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f75830);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f4d5f1 _public_6f4d5f1
#define public_6f4d5fc _public_6f4d5fc
#define public_6f4d612 _public_6f4d612
#define public_6f4d62a _public_6f4d62a
#define public_6f4d64e _public_6f4d64e

PROC_DECLARE(0x6f4d5e0, internal_6f4d5e0, public_6f4d5e0);
extern "C" NAKED register_t __cdecl internal_6f4d5e0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [public_6fd0c2c]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        je public_6f4d5fc
        mov ecx, dword ptr ss : [esp+8]
        public_6f4d5f1 : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_6f4d64e
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        jne public_6f4d5f1
        public_6f4d5fc : nop
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6f4d612
        mov edi, eax
        public_6f4d612 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6f4d62a
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edx
        public_6f4d62a : nop
        mov edi, dword ptr ds : [public_6fd0c30]
        lea eax, ss:[esp+0xC]
        inc edi
        push eax
        mov dword ptr ds : [public_6fd0c30], edi
        call public_6f75f30
        add esp, 4
        push 0
        mov ecx, eax
        call public_6f75830
        pop edi
        public_6f4d64e : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4d5e0)
    }
}

#undef public_6f4d5f1
#undef public_6f4d5fc
#undef public_6f4d612
#undef public_6f4d62a
#undef public_6f4d64e
