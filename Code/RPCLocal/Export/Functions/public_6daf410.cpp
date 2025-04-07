#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da14f0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6daf459 _public_6daf459
#define public_6daf47a _public_6daf47a
#define public_6daf492 _public_6daf492
#define public_6daf4a2 _public_6daf4a2
#define public_6daf4c4 _public_6daf4c4
#define public_6daf4d4 _public_6daf4d4
#define public_6daf4f6 _public_6daf4f6
#define public_6daf506 _public_6daf506
#define public_6daf528 _public_6daf528
#define public_6daf538 _public_6daf538
#define public_6daf564 _public_6daf564
#define public_6daf597 _public_6daf597

PROC_DECLARE(0x6daf410, internal_6daf410, public_6daf410);
extern "C" NAKED register_t __cdecl internal_6daf410()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
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
        je public_6daf459
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6daf459 : nop
        mov ecx, dword ptr ds : [edi+0x14]
        push ecx
        push esi
        lea edx, ds:[edi+0x20]
        push edx
        push ebx
        mov ecx, edi
        call public_6da14f0
        test eax, eax
        je public_6daf47a
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6daf47a : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x16
        jbe public_6daf492
        mov dword ptr ds : [esi+0xC], ebp
        public_6daf492 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6daf4a2
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6daf4a2 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0xA0]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6daf4c4
        mov dword ptr ds : [esi+0xC], ebp
        public_6daf4c4 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6daf4d4
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6daf4d4 : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0xA4]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6daf4f6
        mov dword ptr ds : [esi+0xC], ebp
        public_6daf4f6 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6daf506
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6daf506 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0xA8]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6daf528
        mov dword ptr ds : [esi+0xC], ebp
        public_6daf528 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6daf538
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6daf538 : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0xAC]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        push ebx
        mov ecx, edi
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6daf564
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6daf564 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_6da16b0
        mov ecx, eax
        mov ebp, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ecx+0x10]
        add esp, 4
        inc ebp
        mov dword ptr ds : [ecx], ebp
        mov edx, dword ptr ds : [esi]
        add ebx, edx
        mov dword ptr ds : [ecx+0x18], ebx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        mov edi, ebp
        jbe public_6daf597
        mov dword ptr ds : [ecx+0x10], esi
        public_6daf597 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6daf410)
    }
}

#undef public_6daf459
#undef public_6daf47a
#undef public_6daf492
#undef public_6daf4a2
#undef public_6daf4c4
#undef public_6daf4d4
#undef public_6daf4f6
#undef public_6daf506
#undef public_6daf528
#undef public_6daf538
#undef public_6daf564
#undef public_6daf597
