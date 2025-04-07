#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f99cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f99cf2 _public_6f99cf2
#define public_6f99d00 _public_6f99d00
#define public_6f99d0f _public_6f99d0f
#define public_6f99d42 _public_6f99d42

PROC_DECLARE(0x6f99cd0, internal_6f99cd0, public_6f99cd0);
extern "C" NAKED register_t __cdecl internal_6f99cd0()
{
    __asm
    {
        sub esp, 0xC
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        mov ebp, dword ptr ds : [esi+0xC]
        cmp ebp, eax
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+8], ebp
        je public_6f99d42
        push ebx
        add ebp, 0xC
        push edi
        public_6f99cf2 : nop
        mov ebx, dword ptr ss : [ebp+4]
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebx
        lea esi, ss:[ebp-4]
        je public_6f99d0f
        nop 
        public_6f99d00 : nop
        push edi
        mov ecx, esi
        call public_6ebf6f0
        add edi, 4
        cmp edi, ebx
        jne public_6f99d00
        public_6f99d0f : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x18]
        xor eax, eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov eax, dword ptr ss : [esp+0x14]
        add eax, 0x18
        add esp, 4
        add ebp, 0x18
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jne public_6f99cf2
        mov esi, dword ptr ss : [esp+0x18]
        pop edi
        pop ebx
        public_6f99d42 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        push ecx
        call public_6fa8fe0
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x14], eax
        pop esi
        pop ebp
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f99cd0)
    }
}

#undef public_6f99cf2
#undef public_6f99d00
#undef public_6f99d0f
#undef public_6f99d42
