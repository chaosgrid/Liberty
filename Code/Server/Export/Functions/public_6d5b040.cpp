#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5b040);

#define public_6d5b055 _public_6d5b055
#define public_6d5b064 _public_6d5b064
#define public_6d5b070 _public_6d5b070
#define public_6d5b079 _public_6d5b079
#define public_6d5b09b _public_6d5b09b
#define public_6d5b0a2 _public_6d5b0a2

PROC_DECLARE(0x6d5b040, internal_6d5b040, public_6d5b040);
extern "C" NAKED register_t __cdecl internal_6d5b040()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        push esi
        push edi
        mov edi, ecx
        cmp dword ptr ds : [edi+8], ebx
        jae public_6d5b055
        call dword ptr ds : [public_6d64b04]
        public_6d5b055 : nop
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ss : [esp+0x18]
        sub eax, ebx
        cmp eax, esi
        jae public_6d5b064
        mov esi, eax
        public_6d5b064 : nop
        mov ebp, dword ptr ss : [esp+0x20]
        cmp esi, ebp
        mov ecx, esi
        jb public_6d5b070
        mov ecx, ebp
        public_6d5b070 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_6d5b079
        add eax, ebx
        public_6d5b079 : nop
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        push eax
        call dword ptr ds : [public_6d64ca4]
        add esp, 0xC
        test eax, eax
        jne public_6d5b0a2
        cmp esi, ebp
        jae public_6d5b09b
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 0x10
        public_6d5b09b : nop
        xor eax, eax
        cmp esi, ebp
        setne al
        public_6d5b0a2 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6d5b040)
    }
}

#undef public_6d5b055
#undef public_6d5b064
#undef public_6d5b070
#undef public_6d5b079
#undef public_6d5b09b
#undef public_6d5b0a2
