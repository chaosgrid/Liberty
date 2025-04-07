#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1f2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f20bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f215d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f215f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f22610);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);

#define public_6f1f2c0 _public_6f1f2c0
#define public_6f1f2d3 _public_6f1f2d3
#define public_6f1f2d6 _public_6f1f2d6
#define public_6f1f2da _public_6f1f2da
#define public_6f1f339 _public_6f1f339
#define public_6f1f351 _public_6f1f351
#define public_6f1f35b _public_6f1f35b
#define public_6f1f35f _public_6f1f35f
#define public_6f1f370 _public_6f1f370
#define public_6f1f3ab _public_6f1f3ab
#define public_6f1f3ba _public_6f1f3ba
#define public_6f1f3db _public_6f1f3db
#define public_6f1f3fc _public_6f1f3fc
#define public_6f1f40a _public_6f1f40a
#define public_6f1f429 _public_6f1f429
#define public_6f1f435 _public_6f1f435
#define public_6f1f451 _public_6f1f451
#define public_6f1f46c _public_6f1f46c
#define public_6f1f473 _public_6f1f473
#define public_6f1f496 _public_6f1f496

PROC_DECLARE(0x6f1f2a0, internal_6f1f2a0, public_6f1f2a0);
extern "C" NAKED register_t __cdecl internal_6f1f2a0()
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
        je public_6f1f2da
        lea esp, ss:[esp]
        public_6f1f2c0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6f1f2d3
        mov ebp, dword ptr ss : [ebp]
        jmp public_6f1f2d6
        public_6f1f2d3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6f1f2d6 : nop
        cmp ebp, edx
        jne public_6f1f2c0
        public_6f1f2da : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6f1f451
        push 0
        push esi
        mov ecx, edi
        call public_6f215d0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6f22610
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6f1f339
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6f1f339
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6f1f339
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f1f35f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f1f35f
        public_6f1f339 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6f1f351
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f1f35b
        public_6f1f351 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f1f35b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6f1f35b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f1f35f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6f1f435
        lea ecx, ds:[ecx]
        public_6f1f370 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x2C]
        test cl, cl
        jne public_6f1f435
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f1f3db
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x2C]
        test dl, dl
        jne public_6f1f3ab
        mov byte ptr ds : [eax+0x2C], 1
        mov byte ptr ds : [ecx+0x2C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6f1f429
        public_6f1f3ab : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f1f3ba
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6f1f3ba : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x2C], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x2C], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6f1f429
        public_6f1f3db : nop
        mov dl, byte ptr ds : [ecx+0x2C]
        test dl, dl
        jne public_6f1f3fc
        mov byte ptr ds : [eax+0x2C], 1
        mov byte ptr ds : [ecx+0x2C], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x2C], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6f1f429
        public_6f1f3fc : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f1f40a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6f1f40a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x2C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6f1f429 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6f1f370
        public_6f1f435 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x2C], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6f1f451 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6f1f46c
        cmp esi, dword ptr ds : [ecx]
        je public_6f1f473
        lea ecx, ss:[esp+0x10]
        call public_6f215f0
        mov edx, dword ptr ss : [esp+0x10]
        public_6f1f46c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6f1f496
        public_6f1f473 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6f20bb0
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
        public_6f1f496 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f1f2a0)
    }
}

#undef public_6f1f2c0
#undef public_6f1f2d3
#undef public_6f1f2d6
#undef public_6f1f2da
#undef public_6f1f339
#undef public_6f1f351
#undef public_6f1f35b
#undef public_6f1f35f
#undef public_6f1f370
#undef public_6f1f3ab
#undef public_6f1f3ba
#undef public_6f1f3db
#undef public_6f1f3fc
#undef public_6f1f40a
#undef public_6f1f429
#undef public_6f1f435
#undef public_6f1f451
#undef public_6f1f46c
#undef public_6f1f473
#undef public_6f1f496
