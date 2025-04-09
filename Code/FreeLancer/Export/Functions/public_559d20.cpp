#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_425a20);
CLANG_FORWARD_PROC_SYMBOL(public_4dd9a0);
CLANG_FORWARD_PROC_SYMBOL(public_559d20);

#define public_559d35 _public_559d35
#define public_559d76 _public_559d76
#define public_559d80 _public_559d80
#define public_559d8e _public_559d8e

PROC_DECLARE(0x559d20, internal_559d20, public_559d20);
extern "C" NAKED register_t __cdecl internal_559d20()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_679a4c]
        push esi
        mov esi, ebx
        cmp esi, ebx
        push edi
        mov edi, dword ptr ds : [public_679a48]
        je public_559d76
        public_559d35 : nop
        mov eax, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push 0
        push esi
        mov ecx, edi
        call dword ptr ds : [public_5c6f9c]
        mov edx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [edi+0x10], edx
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [edi+0x14], eax
        mov ecx, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [edi+0x18], ecx
        mov edx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [edi+0x1C], edx
        mov eax, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [edi+0x20], eax
        add esi, 0x24
        add edi, 0x24
        cmp esi, ebx
        jne public_559d35
        mov ebx, dword ptr ds : [public_679a4c]
        public_559d76 : nop
        cmp edi, ebx
        mov esi, edi
        je public_559d8e
        lea esp, ss:[esp]
        public_559d80 : nop
        mov ecx, esi
        call public_4dd9a0
        add esi, 0x24
        cmp esi, ebx
        jne public_559d80
        public_559d8e : nop
        mov dword ptr ds : [public_679a4c], edi
        pop edi
        pop esi
        mov ecx, offset public_679a2c
        pop ebx
        jmp public_425a20
        UNREACHABLE_TRAP(0x559d20)
    }
}

#undef public_559d35
#undef public_559d76
#undef public_559d80
#undef public_559d8e
