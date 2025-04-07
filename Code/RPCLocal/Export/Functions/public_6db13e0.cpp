#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6db1422 _public_6db1422
#define public_6db1439 _public_6db1439
#define public_6db1467 _public_6db1467
#define public_6db1499 _public_6db1499
#define public_6db14d5 _public_6db14d5
#define public_6db14e1 _public_6db14e1

PROC_DECLARE(0x6db13e0, internal_6db13e0, public_6db13e0);
extern "C" NAKED register_t __cdecl internal_6db13e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov edi, ecx
        lea esi, ds:[edi+0x10]
        push esi
        push ebp
        lea ebx, ds:[edi+0x18]
        push ebx
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6db1422
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6db1422 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6db1439
        mov dword ptr ds : [esi+0xC], 0x17
        public_6db1439 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6db14e1
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x20], ecx
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6db1467
        mov dword ptr ds : [esi+0xC], 0x17
        public_6db1467 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6db14e1
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [eax]
        push esi
        push ebp
        add eax, 2
        push ebx
        mov ecx, edi
        mov word ptr ds : [edi+0x24], dx
        mov dword ptr ds : [ebx], eax
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6db1499
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6db1499 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_6da16b0
        mov ecx, eax
        mov edi, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edi
        mov dword ptr ds : [ecx+4], edi
        mov eax, dword ptr ds : [esi]
        add eax, 2
        add ebp, eax
        mov dword ptr ds : [ecx+0x1C], ebp
        mov esi, dword ptr ds : [esi]
        add edx, 2
        cmp esi, edx
        jbe public_6db14d5
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6db14d5 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6db14e1 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6db13e0)
    }
}

#undef public_6db1422
#undef public_6db1439
#undef public_6db1467
#undef public_6db1499
#undef public_6db14d5
#undef public_6db14e1
