#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d06c30);

#define public_6d06c61 _public_6d06c61
#define public_6d06c72 _public_6d06c72
#define public_6d06c83 _public_6d06c83
#define public_6d06c93 _public_6d06c93
#define public_6d06ca2 _public_6d06ca2
#define public_6d06ca4 _public_6d06ca4
#define public_6d06cb3 _public_6d06cb3
#define public_6d06cb5 _public_6d06cb5
#define public_6d06cc2 _public_6d06cc2

PROC_DECLARE(0x6d06c30, internal_6d06c30, public_6d06c30);
extern "C" NAKED register_t __cdecl internal_6d06c30()
{
    __asm
    {
        push esi
        push edi
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6d06cc2
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_6d06cc2
        mov edi, dword ptr ss : [esp+0x10]
        test edi, edi
        je public_6d06cc2
        mov esi, dword ptr ds : [eax+0xA4]
        test esi, esi
        jne public_6d06c61
        mov ecx, dword ptr ds : [eax+0x1C]
        test ecx, ecx
        jne public_6d06cc2
        public_6d06c61 : nop
        mov eax, dword ptr ds : [edi+0xA4]
        test eax, eax
        jne public_6d06c72
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6d06cc2
        public_6d06c72 : nop
        test esi, esi
        push ebx
        mov ebx, dword ptr ds : [public_6d64018]
        je public_6d06c83
        push esi
        call ebx
        add esp, 4
        public_6d06c83 : nop
        mov edi, dword ptr ds : [edi+0xA4]
        test edi, edi
        je public_6d06c93
        push edi
        call ebx
        add esp, 4
        public_6d06c93 : nop
        test esi, esi
        pop ebx
        je public_6d06ca2
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 0x27
        cmp al, 0x27
        je public_6d06ca4
        public_6d06ca2 : nop
        xor esi, esi
        public_6d06ca4 : nop
        test edi, edi
        je public_6d06cb3
        mov ecx, dword ptr ds : [edi+0x4C]
        and ecx, 0x27
        cmp cl, 0x27
        je public_6d06cb5
        public_6d06cb3 : nop
        xor edi, edi
        public_6d06cb5 : nop
        test esi, esi
        jne public_6d06cc2
        test edi, edi
        jne public_6d06cc2
        pop edi
        xor eax, eax
        pop esi
        ret 
        public_6d06cc2 : nop
        pop edi
        mov eax, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d06c30)
    }
}

#undef public_6d06c61
#undef public_6d06c72
#undef public_6d06c83
#undef public_6d06c93
#undef public_6d06ca2
#undef public_6d06ca4
#undef public_6d06cb3
#undef public_6d06cb5
#undef public_6d06cc2
