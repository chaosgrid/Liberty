#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_436ae0);
CLANG_FORWARD_PROC_SYMBOL(public_45a000);
CLANG_FORWARD_PROC_SYMBOL(public_45a020);
CLANG_FORWARD_PROC_SYMBOL(public_45a080);
CLANG_FORWARD_PROC_SYMBOL(public_46d990);
CLANG_FORWARD_PROC_SYMBOL(public_46e670);
CLANG_FORWARD_PROC_SYMBOL(public_5ae590);

#define public_46d9b0 _public_46d9b0
#define public_46d9c3 _public_46d9c3
#define public_46d9c6 _public_46d9c6
#define public_46d9ca _public_46d9ca
#define public_46da29 _public_46da29
#define public_46da41 _public_46da41
#define public_46da4b _public_46da4b
#define public_46da4f _public_46da4f
#define public_46da60 _public_46da60
#define public_46da9b _public_46da9b
#define public_46daaa _public_46daaa
#define public_46dacb _public_46dacb
#define public_46daec _public_46daec
#define public_46dafa _public_46dafa
#define public_46db19 _public_46db19
#define public_46db25 _public_46db25
#define public_46db41 _public_46db41
#define public_46db5c _public_46db5c
#define public_46db63 _public_46db63
#define public_46db86 _public_46db86

PROC_DECLARE(0x46d990, internal_46d990, public_46d990);
extern "C" NAKED register_t __cdecl internal_46d990()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi+8]
        cmp ebp, edx
        mov esi, ecx
        mov al, 1
        je public_46d9ca
        lea esp, ss:[esp]
        public_46d9b0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        seta al
        test al, al
        je public_46d9c3
        mov ebp, dword ptr ss : [ebp]
        jmp public_46d9c6
        public_46d9c3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_46d9c6 : nop
        cmp ebp, edx
        jne public_46d9b0
        public_46d9ca : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_46db41
        push 0
        push esi
        mov ecx, edi
        call public_45a000
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_45a080
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_46da29
        cmp ebp, dword ptr ds : [edi+8]
        jne public_46da29
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        ja public_46da29
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_46da4f
        mov dword ptr ds : [eax+8], ebx
        jmp public_46da4f
        public_46da29 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_46da41
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_46da4b
        public_46da41 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_46da4b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_46da4b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_46da4f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_46db25
        lea ecx, ds:[ecx]
        public_46da60 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        jne public_46db25
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_46dacb
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_46da9b
        mov byte ptr ds : [eax+0x1C], 1
        mov byte ptr ds : [ecx+0x1C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_46db19
        public_46da9b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_46daaa
        mov esi, eax
        push esi
        mov ecx, edi
        call public_436ae0
        public_46daaa : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x1C], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x1C], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_5ae590
        jmp public_46db19
        public_46dacb : nop
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_46daec
        mov byte ptr ds : [eax+0x1C], 1
        mov byte ptr ds : [ecx+0x1C], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x1C], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_46db19
        public_46daec : nop
        cmp esi, dword ptr ds : [eax]
        jne public_46dafa
        mov esi, eax
        push esi
        mov ecx, edi
        call public_5ae590
        public_46dafa : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x1C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_436ae0
        public_46db19 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_46da60
        public_46db25 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x1C], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_46db41 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_46db5c
        cmp esi, dword ptr ds : [ecx]
        je public_46db63
        lea ecx, ss:[esp+0x10]
        call public_45a020
        mov edx, dword ptr ss : [esp+0x10]
        public_46db5c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jbe public_46db86
        public_46db63 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_46e670
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_46db86 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x46d990)
    }
}

#undef public_46d9b0
#undef public_46d9c3
#undef public_46d9c6
#undef public_46d9ca
#undef public_46da29
#undef public_46da41
#undef public_46da4b
#undef public_46da4f
#undef public_46da60
#undef public_46da9b
#undef public_46daaa
#undef public_46dacb
#undef public_46daec
#undef public_46dafa
#undef public_46db19
#undef public_46db25
#undef public_46db41
#undef public_46db5c
#undef public_46db63
#undef public_46db86
