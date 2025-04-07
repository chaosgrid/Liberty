#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f60d0);
CLANG_FORWARD_PROC_SYMBOL(public_66f7900);
CLANG_FORWARD_PROC_SYMBOL(public_66f7960);

#define public_66f769e _public_66f769e
#define public_66f76da _public_66f76da
#define public_66f7713 _public_66f7713
#define public_66f7740 _public_66f7740
#define public_66f7796 _public_66f7796
#define public_66f77d2 _public_66f77d2
#define public_66f7835 _public_66f7835
#define public_66f7849 _public_66f7849
#define public_66f7857 _public_66f7857
#define public_66f7863 _public_66f7863
#define public_66f78f0 _public_66f78f0
#define public_66f78f2 _public_66f78f2

PROC_DECLARE(0x66f7640, internal_66f7640, public_66f7640);
extern "C" NAKED register_t __cdecl internal_66f7640()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push edi
        push 3
        push 0x16
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ss : [esp+0x40]
        mov ebx, dword ptr ss : [esp+0x34]
        mov edi, dword ptr ss : [esp+0x28]
        and eax, 0x100
        mov dword ptr ss : [esp+0x24], eax
        je public_66f769e
        mov ecx, dword ptr ss : [esp+0x3C]
        mov ebp, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ds : [edi+0x18]
        mov ecx, dword ptr ds : [ecx+4]
        add ecx, ebp
        push ecx
        mov ecx, dword ptr ss : [esp+0x38]
        push ebx
        push ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        push ecx
        push eax
        call dword ptr ds : [edx+0xC]
        mov ebp, eax
        test ebp, ebp
        jge public_66f7713
        public_66f769e : nop
        mov ecx, dword ptr ds : [edi+0x14]
        or eax, 0xFFFFFFFF
        test ecx, ecx
        je public_66f76da
        mov ecx, dword ptr ss : [esp+0x3C]
        mov ebp, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 0
        push ecx
        mov ecx, dword ptr ds : [edi+0x10]
        lea ecx, ds:[ecx+ebp*2]
        push ecx
        mov ecx, dword ptr ds : [edi+0x14]
        mov ebp, dword ptr ds : [ecx+8]
        add ebp, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ds : [ecx]
        push ebx
        push ebp
        push ecx
        mov ecx, dword ptr ss : [esp+0x44]
        push ecx
        push eax
        call dword ptr ds : [edx+0x120]
        public_66f76da : nop
        test eax, eax
        mov ebp, eax
        jge public_66f7713
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_66f7713
        test ebx, ebx
        jbe public_66f7713
        mov eax, dword ptr ss : [esp+0x3C]
        test eax, eax
        jbe public_66f7713
        mov edx, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x30]
        push edx
        mov edx, dword ptr ss : [esp+0x30]
        push eax
        mov eax, dword ptr ss : [esp+0x40]
        push eax
        push ebx
        push ecx
        push edx
        push edi
        mov ecx, esi
        call public_66f60d0
        mov ebp, eax
        public_66f7713 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 2
        push 0x16
        push eax
        call dword ptr ds : [ecx+0xF0]
        test ebp, ebp
        jl public_66f78f0
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x40], edx
        mov ebp, offset public_6701d3c
        mov eax, 0x89
        lea esp, ss:[esp]
        public_66f7740 : nop
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [ebp+4]
        push ecx
        push eax
        mov eax, dword ptr ss : [esp+0x48]
        push eax
        call dword ptr ds : [edx+0xF0]
        mov eax, dword ptr ss : [ebp+8]
        add ebp, 8
        test eax, eax
        jne public_66f7740
        mov eax, dword ptr ss : [esp+0x24]
        test eax, eax
        je public_66f7796
        mov edx, dword ptr ss : [esp+0x3C]
        mov ebp, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ds : [edi+0x18]
        mov edx, dword ptr ds : [edx+4]
        add edx, ebp
        push edx
        mov edx, dword ptr ss : [esp+0x38]
        push ebx
        push edx
        mov edx, dword ptr ss : [esp+0x3C]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        jge public_66f78f2
        public_66f7796 : nop
        mov ecx, dword ptr ds : [edi+0x14]
        or eax, 0xFFFFFFFF
        test ecx, ecx
        je public_66f77d2
        mov ecx, dword ptr ss : [esp+0x3C]
        mov ebp, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 0
        push ecx
        mov ecx, dword ptr ds : [edi+0x10]
        lea ecx, ds:[ecx+ebp*2]
        push ecx
        mov ecx, dword ptr ds : [edi+0x14]
        mov ebp, dword ptr ds : [ecx+8]
        add ebp, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ds : [ecx]
        push ebx
        push ebp
        push ecx
        mov ecx, dword ptr ss : [esp+0x44]
        push ecx
        push eax
        call dword ptr ds : [edx+0x120]
        public_66f77d2 : nop
        test eax, eax
        jge public_66f78f2
        mov ecx, dword ptr ds : [edi+0xC]
        test ecx, ecx
        je public_66f78f2
        test ebx, ebx
        jbe public_66f78f2
        mov edx, dword ptr ss : [esp+0x3C]
        test edx, edx
        jbe public_66f78f2
        mov ecx, dword ptr ds : [ecx+0x68]
        mov eax, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [eax]
        lea ebp, ss:[esp+0x10]
        push ebp
        push ebx
        push ecx
        push eax
        call dword ptr ds : [edx+0x14]
        xor ebp, ebp
        cmp eax, ebp
        jl public_66f78f2
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, 0xC
        mov edx, eax
        and edx, ecx
        cmp dl, cl
        mov dword ptr ss : [esp+0x40], ebp
        jne public_66f7835
        mov dword ptr ss : [esp+0x40], 0x1C
        jmp public_66f7857
        public_66f7835 : nop
        mov edx, eax
        and edx, 4
        cmp dl, 4
        jne public_66f7849
        mov dword ptr ss : [esp+0x40], 0x10
        jmp public_66f7857
        public_66f7849 : nop
        mov edx, eax
        and edx, 2
        cmp dl, 2
        jne public_66f7857
        mov dword ptr ss : [esp+0x40], ecx
        public_66f7857 : nop
        test al, 0x10
        mov dword ptr ss : [esp+0x24], ebp
        je public_66f7863
        mov dword ptr ss : [esp+0x24], ecx
        public_66f7863 : nop
        push eax
        call public_66f7900
        mov ebp, eax
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        call public_66f7960
        mov ecx, dword ptr ss : [esp+0x2C]
        add ecx, ebp
        mov ebp, dword ptr ss : [esp+0x38]
        add eax, ecx
        mov ecx, dword ptr ss : [esp+0x48]
        add esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ds : [edi+0xC]
        add eax, ecx
        imul eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [ecx]
        push ebp
        mov ebp, dword ptr ss : [esp+0x20]
        push ebp
        mov ebp, dword ptr ss : [esp+0x2C]
        sub ebp, eax
        push ebp
        push ecx
        call dword ptr ds : [edx+0x20]
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ds : [edi+0x10]
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        push 0
        push ecx
        mov ecx, dword ptr ss : [esp+0x40]
        lea edx, ds:[edx+ecx*2]
        mov ecx, dword ptr ss : [esp+0x20]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push ebx
        push ecx
        mov ecx, dword ptr ss : [esp+0x40]
        push edx
        push ecx
        push esi
        call dword ptr ds : [eax+0x120]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0x20
        public_66f78f0 : nop
        mov eax, ebp
        public_66f78f2 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0x20
        UNREACHABLE_TRAP(0x66f7640)
    }
}

#undef public_66f769e
#undef public_66f76da
#undef public_66f7713
#undef public_66f7740
#undef public_66f7796
#undef public_66f77d2
#undef public_66f7835
#undef public_66f7849
#undef public_66f7857
#undef public_66f7863
#undef public_66f78f0
#undef public_66f78f2
