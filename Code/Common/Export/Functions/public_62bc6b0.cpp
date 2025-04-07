#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62bc6c5 _public_62bc6c5
#define public_62bc6d4 _public_62bc6d4
#define public_62bc6db _public_62bc6db
#define public_62bc6e7 _public_62bc6e7
#define public_62bc6f5 _public_62bc6f5

PROC_DECLARE(0x62bc6b0, internal_62bc6b0, public_62bc6b0);
extern "C" NAKED register_t __cdecl internal_62bc6b0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov ebx, dword ptr ds : [esi+0xC]
        push edi
        mov edi, dword ptr ds : [esi+8]
        cmp edi, ebx
        mov dword ptr ds : [esi], offset public_639dd00
        je public_62bc6db
        public_62bc6c5 : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_62bc6d4
        push eax
        call public_6391d5a
        add esp, 4
        public_62bc6d4 : nop
        add edi, 4
        cmp edi, ebx
        jne public_62bc6c5
        public_62bc6db : nop
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [esi+8]
        mov eax, edx
        cmp eax, edx
        je public_62bc6f5
        public_62bc6e7 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_62bc6e7
        public_62bc6f5 : nop
        mov dword ptr ds : [esi+0xC], ecx
        mov eax, dword ptr ds : [esi+8]
        push eax
        call public_6391d5a
        add esp, 4
        pop edi
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        mov dword ptr ds : [esi+0x10], 0
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62bc6b0)
    }
}

#undef public_62bc6c5
#undef public_62bc6d4
#undef public_62bc6db
#undef public_62bc6e7
#undef public_62bc6f5
