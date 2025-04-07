#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628f110);
CLANG_FORWARD_PROC_SYMBOL(public_6290060);
CLANG_FORWARD_PROC_SYMBOL(public_62903d0);
CLANG_FORWARD_PROC_SYMBOL(public_62903f0);
CLANG_FORWARD_PROC_SYMBOL(public_62905a0);
CLANG_FORWARD_PROC_SYMBOL(public_6340ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6342930);

#define public_628f130 _public_628f130
#define public_628f143 _public_628f143
#define public_628f146 _public_628f146
#define public_628f14a _public_628f14a
#define public_628f1a9 _public_628f1a9
#define public_628f1c1 _public_628f1c1
#define public_628f1cb _public_628f1cb
#define public_628f1cf _public_628f1cf
#define public_628f1e0 _public_628f1e0
#define public_628f21b _public_628f21b
#define public_628f22a _public_628f22a
#define public_628f24b _public_628f24b
#define public_628f26c _public_628f26c
#define public_628f27a _public_628f27a
#define public_628f299 _public_628f299
#define public_628f2a5 _public_628f2a5
#define public_628f2c1 _public_628f2c1
#define public_628f2dc _public_628f2dc
#define public_628f2e3 _public_628f2e3
#define public_628f306 _public_628f306

PROC_DECLARE(0x628f110, internal_628f110, public_628f110);
extern "C" NAKED register_t __cdecl internal_628f110()
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
        je public_628f14a
        lea esp, ss:[esp]
        public_628f130 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_628f143
        mov ebp, dword ptr ss : [ebp]
        jmp public_628f146
        public_628f143 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_628f146 : nop
        cmp ebp, edx
        jne public_628f130
        public_628f14a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_628f2c1
        push 0
        push esi
        mov ecx, edi
        call public_62903d0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_62905a0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_628f1a9
        cmp ebp, dword ptr ds : [edi+8]
        jne public_628f1a9
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_628f1a9
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_628f1cf
        mov dword ptr ds : [eax+8], ebx
        jmp public_628f1cf
        public_628f1a9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_628f1c1
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_628f1cb
        public_628f1c1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_628f1cb
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_628f1cb : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_628f1cf : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_628f2a5
        lea ecx, ds:[ecx]
        public_628f1e0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x54]
        test cl, cl
        jne public_628f2a5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_628f24b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x54]
        test dl, dl
        jne public_628f21b
        mov byte ptr ds : [eax+0x54], 1
        mov byte ptr ds : [ecx+0x54], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x54], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_628f299
        public_628f21b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_628f22a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6340ca0
        public_628f22a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x54], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x54], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6342930
        jmp public_628f299
        public_628f24b : nop
        mov dl, byte ptr ds : [ecx+0x54]
        test dl, dl
        jne public_628f26c
        mov byte ptr ds : [eax+0x54], 1
        mov byte ptr ds : [ecx+0x54], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x54], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_628f299
        public_628f26c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_628f27a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6342930
        public_628f27a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x54], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x54], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6340ca0
        public_628f299 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_628f1e0
        public_628f2a5 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x54], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_628f2c1 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_628f2dc
        cmp esi, dword ptr ds : [ecx]
        je public_628f2e3
        lea ecx, ss:[esp+0x10]
        call public_62903f0
        mov edx, dword ptr ss : [esp+0x10]
        public_628f2dc : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_628f306
        public_628f2e3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6290060
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
        public_628f306 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x628f110)
    }
}

#undef public_628f130
#undef public_628f143
#undef public_628f146
#undef public_628f14a
#undef public_628f1a9
#undef public_628f1c1
#undef public_628f1cb
#undef public_628f1cf
#undef public_628f1e0
#undef public_628f21b
#undef public_628f22a
#undef public_628f24b
#undef public_628f26c
#undef public_628f27a
#undef public_628f299
#undef public_628f2a5
#undef public_628f2c1
#undef public_628f2dc
#undef public_628f2e3
#undef public_628f306
