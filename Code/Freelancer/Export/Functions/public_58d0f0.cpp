#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_527820);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_5595c0);
CLANG_FORWARD_PROC_SYMBOL(public_58d0f0);
CLANG_FORWARD_PROC_SYMBOL(public_597c70);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_58d116 _public_58d116
#define public_58d11e _public_58d11e
#define public_58d129 _public_58d129
#define public_58d131 _public_58d131
#define public_58d140 _public_58d140
#define public_58d14e _public_58d14e
#define public_58d165 _public_58d165
#define public_58d17b _public_58d17b
#define public_58d183 _public_58d183
#define public_58d18b _public_58d18b
#define public_58d193 _public_58d193
#define public_58d19b _public_58d19b
#define public_58d1dc _public_58d1dc
#define public_58d201 _public_58d201
#define public_58d22a _public_58d22a

PROC_DECLARE(0x58d0f0, internal_58d0f0, public_58d0f0);
extern "C" NAKED register_t __cdecl internal_58d0f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        lea edi, ss:[ebp+0x4B0]
        lea esi, ds:[eax+0x10]
        cmp esi, edi
        je public_58d22a
        mov ebx, dword ptr ds : [edi+4]
        test ebx, ebx
        jne public_58d116
        xor edx, edx
        jmp public_58d11e
        public_58d116 : nop
        mov edx, dword ptr ds : [edi+8]
        sub edx, ebx
        sar edx, 2
        public_58d11e : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_58d129
        xor eax, eax
        jmp public_58d131
        public_58d129 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_58d131 : nop
        cmp edx, eax
        ja public_58d17b
        mov edx, dword ptr ds : [edi+8]
        mov eax, ebx
        cmp eax, edx
        je public_58d14e
        mov edi, edi
        public_58d140 : nop
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_58d140
        public_58d14e : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_58d165
        mov ecx, dword ptr ds : [esi+4]
        xor edi, edi
        lea edx, ds:[ecx+edi*4]
        mov dword ptr ds : [esi+8], edx
        jmp public_58d22a
        public_58d165 : nop
        mov edi, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [esi+4]
        sub edi, eax
        sar edi, 2
        lea edx, ds:[ecx+edi*4]
        mov dword ptr ds : [esi+8], edx
        jmp public_58d22a
        public_58d17b : nop
        test ebx, ebx
        jne public_58d183
        xor edx, edx
        jmp public_58d18b
        public_58d183 : nop
        mov edx, dword ptr ds : [edi+8]
        sub edx, ebx
        sar edx, 2
        public_58d18b : nop
        test ecx, ecx
        jne public_58d193
        xor eax, eax
        jmp public_58d19b
        public_58d193 : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 2
        public_58d19b : nop
        cmp edx, eax
        ja public_58d1dc
        mov ecx, esi
        call public_5ad970
        mov ecx, dword ptr ds : [edi+4]
        lea ebx, ds:[ebx+eax*4]
        mov eax, dword ptr ds : [esi+4]
        push eax
        push ebx
        push ecx
        call public_527820
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edi+8]
        add esp, 0xC
        push edx
        push eax
        push ebx
        mov ecx, esi
        call public_597c70
        mov ecx, edi
        call public_5ad970
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ds : [esi+8], edx
        jmp public_58d22a
        public_58d1dc : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        push ecx
        mov ecx, esi
        call public_53aaa0
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_5b7e1d
        add esp, 4
        mov ecx, edi
        call public_5ad970
        test eax, eax
        jge public_58d201
        xor eax, eax
        public_58d201 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_5b7e84
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_597c70
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        public_58d22a : nop
        mov ecx, dword ptr ss : [esp+0x14]
        add ebp, 0x4A0
        push ebp
        call public_5595c0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x58d0f0)
    }
}

#undef public_58d116
#undef public_58d11e
#undef public_58d129
#undef public_58d131
#undef public_58d140
#undef public_58d14e
#undef public_58d165
#undef public_58d17b
#undef public_58d183
#undef public_58d18b
#undef public_58d193
#undef public_58d19b
#undef public_58d1dc
#undef public_58d201
#undef public_58d22a
