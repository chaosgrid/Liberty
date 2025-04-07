#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6dac409 _public_6dac409
#define public_6dac421 _public_6dac421
#define public_6dac431 _public_6dac431
#define public_6dac450 _public_6dac450
#define public_6dac460 _public_6dac460
#define public_6dac47f _public_6dac47f
#define public_6dac48f _public_6dac48f
#define public_6dac4ae _public_6dac4ae
#define public_6dac4be _public_6dac4be
#define public_6dac4df _public_6dac4df
#define public_6dac4ef _public_6dac4ef
#define public_6dac50e _public_6dac50e
#define public_6dac51e _public_6dac51e
#define public_6dac53c _public_6dac53c
#define public_6dac54c _public_6dac54c
#define public_6dac573 _public_6dac573
#define public_6dac5a4 _public_6dac5a4

PROC_DECLARE(0x6dac3c0, internal_6dac3c0, public_6dac3c0);
extern "C" NAKED register_t __cdecl internal_6dac3c0()
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
        je public_6dac409
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6dac409 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x16
        jbe public_6dac421
        mov dword ptr ds : [esi+0xC], ebp
        public_6dac421 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6dac431
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6dac431 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6dac450
        mov dword ptr ds : [esi+0xC], ebp
        public_6dac450 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6dac460
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6dac460 : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6dac47f
        mov dword ptr ds : [esi+0xC], ebp
        public_6dac47f : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6dac48f
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6dac48f : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6dac4ae
        mov dword ptr ds : [esi+0xC], ebp
        public_6dac4ae : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6dac4be
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6dac4be : nop
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [edi+0x2C]
        mov word ptr ds : [eax], dx
        add eax, 2
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6dac4df
        mov dword ptr ds : [esi+0xC], ebp
        public_6dac4df : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6dac4ef
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6dac4ef : nop
        mov eax, dword ptr ds : [ebx]
        fld dword ptr ds : [edi+0x30]
        fstp dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6dac50e
        mov dword ptr ds : [esi+0xC], ebp
        public_6dac50e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6dac51e
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6dac51e : nop
        mov eax, dword ptr ds : [ebx]
        fld dword ptr ds : [edi+0x34]
        add eax, 4
        fstp dword ptr ds : [eax-4]
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6dac53c
        mov dword ptr ds : [esi+0xC], ebp
        public_6dac53c : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6dac54c
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6dac54c : nop
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [edi+0x38]
        mov byte ptr ds : [eax], cl
        mov edx, dword ptr ds : [edi+0x14]
        push esi
        push edx
        inc eax
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6dac573
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6dac573 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_6da16b0
        mov ecx, eax
        mov edi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc edi
        mov dword ptr ds : [ecx], edi
        mov eax, dword ptr ds : [esi]
        add edx, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], edx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jbe public_6dac5a4
        mov dword ptr ds : [ecx+0x10], esi
        public_6dac5a4 : nop
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
        UNREACHABLE_TRAP(0x6dac3c0)
    }
}

#undef public_6dac409
#undef public_6dac421
#undef public_6dac431
#undef public_6dac450
#undef public_6dac460
#undef public_6dac47f
#undef public_6dac48f
#undef public_6dac4ae
#undef public_6dac4be
#undef public_6dac4df
#undef public_6dac4ef
#undef public_6dac50e
#undef public_6dac51e
#undef public_6dac53c
#undef public_6dac54c
#undef public_6dac573
#undef public_6dac5a4
