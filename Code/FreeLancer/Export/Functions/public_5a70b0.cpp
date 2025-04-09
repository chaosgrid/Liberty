#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_436ae0);
CLANG_FORWARD_PROC_SYMBOL(public_5a70b0);
CLANG_FORWARD_PROC_SYMBOL(public_5a7930);
CLANG_FORWARD_PROC_SYMBOL(public_5a7b80);
CLANG_FORWARD_PROC_SYMBOL(public_5a7c20);
CLANG_FORWARD_PROC_SYMBOL(public_5a7de0);
CLANG_FORWARD_PROC_SYMBOL(public_5ae590);

#define public_5a70d0 _public_5a70d0
#define public_5a70e3 _public_5a70e3
#define public_5a70e6 _public_5a70e6
#define public_5a70ea _public_5a70ea
#define public_5a7149 _public_5a7149
#define public_5a7161 _public_5a7161
#define public_5a716b _public_5a716b
#define public_5a716f _public_5a716f
#define public_5a7180 _public_5a7180
#define public_5a71bb _public_5a71bb
#define public_5a71ca _public_5a71ca
#define public_5a71eb _public_5a71eb
#define public_5a720c _public_5a720c
#define public_5a721a _public_5a721a
#define public_5a7239 _public_5a7239
#define public_5a7245 _public_5a7245
#define public_5a7261 _public_5a7261
#define public_5a727c _public_5a727c
#define public_5a7283 _public_5a7283
#define public_5a72a6 _public_5a72a6

PROC_DECLARE(0x5a70b0, internal_5a70b0, public_5a70b0);
extern "C" NAKED register_t __cdecl internal_5a70b0()
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
        je public_5a70ea
        lea esp, ss:[esp]
        public_5a70d0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_5a70e3
        mov ebp, dword ptr ss : [ebp]
        jmp public_5a70e6
        public_5a70e3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_5a70e6 : nop
        cmp ebp, edx
        jne public_5a70d0
        public_5a70ea : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_5a7261
        push 0
        push esi
        mov ecx, edi
        call public_5a7b80
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_5a7de0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_5a7149
        cmp ebp, dword ptr ds : [edi+8]
        jne public_5a7149
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_5a7149
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_5a716f
        mov dword ptr ds : [eax+8], ebx
        jmp public_5a716f
        public_5a7149 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_5a7161
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_5a716b
        public_5a7161 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_5a716b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_5a716b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_5a716f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_5a7245
        lea ecx, ds:[ecx]
        public_5a7180 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x20]
        test cl, cl
        jne public_5a7245
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_5a71eb
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_5a71bb
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [ecx+0x20], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_5a7239
        public_5a71bb : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_5a71ca
        mov esi, eax
        push esi
        mov ecx, edi
        call public_436ae0
        public_5a71ca : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x20], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_5ae590
        jmp public_5a7239
        public_5a71eb : nop
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_5a720c
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x20], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_5a7239
        public_5a720c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_5a721a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_5ae590
        public_5a721a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x20], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_436ae0
        public_5a7239 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_5a7180
        public_5a7245 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x20], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_5a7261 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_5a727c
        cmp esi, dword ptr ds : [ecx]
        je public_5a7283
        lea ecx, ss:[esp+0x10]
        call public_5a7c20
        mov edx, dword ptr ss : [esp+0x10]
        public_5a727c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_5a72a6
        public_5a7283 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_5a7930
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
        public_5a72a6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x5a70b0)
    }
}

#undef public_5a70d0
#undef public_5a70e3
#undef public_5a70e6
#undef public_5a70ea
#undef public_5a7149
#undef public_5a7161
#undef public_5a716b
#undef public_5a716f
#undef public_5a7180
#undef public_5a71bb
#undef public_5a71ca
#undef public_5a71eb
#undef public_5a720c
#undef public_5a721a
#undef public_5a7239
#undef public_5a7245
#undef public_5a7261
#undef public_5a727c
#undef public_5a7283
#undef public_5a72a6
