#include "zlib-PCH.h"


#define public_10009110 _public_10009110
#define public_1000912a _public_1000912a
#define public_10009143 _public_10009143
#define public_1000914d _public_1000914d
#define public_1000915a _public_1000915a
#define public_10009174 _public_10009174
#define public_1000917e _public_1000917e

PROC_DECLARE(0x10009100, internal_10009100, public_10009100);
extern "C" NAKED register_t __cdecl internal_10009100()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        jne public_10009110
        mov eax, 0xFFFFFF9A
        ret 0xC
        public_10009110 : nop
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [eax+0x9C]
        test esi, esi
        push edi
        jne public_1000912a
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFF9A
        pop ebx
        ret 0xC
        public_1000912a : nop
        mov eax, dword ptr ds : [esi+0x4C]
        mov edi, dword ptr ds : [esi+0x48]
        mov ebp, dword ptr ss : [esp+0x18]
        sub edi, eax
        test ebp, ebp
        jne public_10009143
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_10009143 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        cmp ebx, edi
        jbe public_1000914d
        mov ebx, edi
        public_1000914d : nop
        test ebx, ebx
        jne public_1000915a
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_1000915a : nop
        mov ecx, dword ptr ds : [esi+0x44]
        mov edx, dword ptr ds : [esi+0x80]
        push 0
        add ecx, eax
        mov eax, dword ptr ds : [esi+0x7C]
        push ecx
        push edx
        push eax
        call dword ptr ds : [esi+0x70]
        test eax, eax
        je public_1000917e
        public_10009174 : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 0xC
        public_1000917e : nop
        mov ecx, dword ptr ds : [esi+0x80]
        mov edx, dword ptr ds : [esi+0x7C]
        push edi
        push ebp
        push ecx
        push edx
        call dword ptr ds : [esi+0x64]
        cmp eax, edi
        jne public_10009174
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x10009100)
    }
}

#undef public_10009110
#undef public_1000912a
#undef public_10009143
#undef public_1000914d
#undef public_1000915a
#undef public_10009174
#undef public_1000917e
