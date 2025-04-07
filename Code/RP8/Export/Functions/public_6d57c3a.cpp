#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d57c3a);
CLANG_FORWARD_PROC_SYMBOL(public_6d5a650);

#define public_6d57c50 _public_6d57c50
#define public_6d57c60 _public_6d57c60
#define public_6d57c6b _public_6d57c6b
#define public_6d57c7b _public_6d57c7b
#define public_6d57ca1 _public_6d57ca1

PROC_DECLARE(0x6d57c3a, internal_6d57c3a, public_6d57c3a);
extern "C" NAKED register_t __cdecl internal_6d57c3a()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        xor ebx, ebx
        cmp eax, ebx
        push edi
        je public_6d57c50
        mov ecx, dword ptr ds : [esi+0x3C]
        mov dword ptr ds : [eax], ecx
        public_6d57c50 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, 4
        mov edi, dword ptr ss : [esp+0x14]
        je public_6d57c60
        cmp eax, 5
        jne public_6d57c6b
        public_6d57c60 : nop
        push dword ptr ds : [esi+0xC]
        push dword ptr ds : [edi+0x28]
        call dword ptr ds : [edi+0x24]
        pop ecx
        pop ecx
        public_6d57c6b : nop
        cmp dword ptr ds : [esi], 6
        jne public_6d57c7b
        push edi
        push dword ptr ds : [esi+4]
        call public_6d5a650
        pop ecx
        pop ecx
        public_6d57c7b : nop
        mov eax, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [esi+0x34], eax
        mov dword ptr ds : [esi+0x30], eax
        mov eax, dword ptr ds : [esi+0x38]
        cmp eax, ebx
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        je public_6d57ca1
        push ebx
        push ebx
        push ebx
        call eax
        mov dword ptr ds : [esi+0x3C], eax
        add esp, 0xC
        mov dword ptr ds : [edi+0x30], eax
        public_6d57ca1 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d57c3a)
    }
}

#undef public_6d57c50
#undef public_6d57c60
#undef public_6d57c6b
#undef public_6d57c7b
#undef public_6d57ca1
