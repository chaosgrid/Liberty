#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6db1d17 _public_6db1d17
#define public_6db1d2e _public_6db1d2e
#define public_6db1d40 _public_6db1d40
#define public_6db1d6b _public_6db1d6b
#define public_6db1d9e _public_6db1d9e

PROC_DECLARE(0x6db1cd0, internal_6db1cd0, public_6db1cd0);
extern "C" NAKED register_t __cdecl internal_6db1cd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        lea esi, ds:[edi+0x10]
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        lea ebx, ds:[edi+0x18]
        push ebx
        mov ecx, edi
        call public_6da1380
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6db1d17
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6db1d17 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6db1d2e
        mov dword ptr ds : [esi+0xC], 0x16
        public_6db1d2e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6db1d40
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6db1d40 : nop
        mov eax, dword ptr ds : [ebx]
        fld dword ptr ds : [edi+0x20]
        fstp dword ptr ds : [eax]
        mov ecx, dword ptr ds : [edi+0x14]
        push esi
        push ecx
        add eax, 4
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6db1d6b
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6db1d6b : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [edi+0xC]
        push ecx
        call public_6da16b0
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc eax
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [esi]
        add ebx, edx
        mov edi, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], ebx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jbe public_6db1d9e
        mov dword ptr ds : [ecx+0x10], esi
        public_6db1d9e : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6db1cd0)
    }
}

#undef public_6db1d17
#undef public_6db1d2e
#undef public_6db1d40
#undef public_6db1d6b
#undef public_6db1d9e
