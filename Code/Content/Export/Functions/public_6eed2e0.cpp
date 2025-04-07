#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eed2e0);
CLANG_FORWARD_PROC_SYMBOL(public_6eee080);
CLANG_FORWARD_PROC_SYMBOL(public_6eee2d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eee7c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2ef80);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);

#define public_6eed300 _public_6eed300
#define public_6eed313 _public_6eed313
#define public_6eed316 _public_6eed316
#define public_6eed31a _public_6eed31a
#define public_6eed379 _public_6eed379
#define public_6eed391 _public_6eed391
#define public_6eed39b _public_6eed39b
#define public_6eed39f _public_6eed39f
#define public_6eed3b0 _public_6eed3b0
#define public_6eed3eb _public_6eed3eb
#define public_6eed3fa _public_6eed3fa
#define public_6eed41b _public_6eed41b
#define public_6eed43c _public_6eed43c
#define public_6eed44a _public_6eed44a
#define public_6eed469 _public_6eed469
#define public_6eed475 _public_6eed475
#define public_6eed491 _public_6eed491
#define public_6eed4ac _public_6eed4ac
#define public_6eed4b3 _public_6eed4b3
#define public_6eed4d6 _public_6eed4d6

PROC_DECLARE(0x6eed2e0, internal_6eed2e0, public_6eed2e0);
extern "C" NAKED register_t __cdecl internal_6eed2e0()
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
        je public_6eed31a
        lea esp, ss:[esp]
        public_6eed300 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6eed313
        mov ebp, dword ptr ss : [ebp]
        jmp public_6eed316
        public_6eed313 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6eed316 : nop
        cmp ebp, edx
        jne public_6eed300
        public_6eed31a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6eed491
        push 0
        push esi
        mov ecx, edi
        call public_6eee2d0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6eee7c0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6eed379
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6eed379
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6eed379
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6eed39f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6eed39f
        public_6eed379 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6eed391
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6eed39b
        public_6eed391 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6eed39b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6eed39b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6eed39f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6eed475
        lea ecx, ds:[ecx]
        public_6eed3b0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x24]
        test cl, cl
        jne public_6eed475
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6eed41b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6eed3eb
        mov byte ptr ds : [eax+0x24], 1
        mov byte ptr ds : [ecx+0x24], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6eed469
        public_6eed3eb : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6eed3fa
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6eed3fa : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x24], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x24], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6eed469
        public_6eed41b : nop
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6eed43c
        mov byte ptr ds : [eax+0x24], 1
        mov byte ptr ds : [ecx+0x24], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x24], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6eed469
        public_6eed43c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6eed44a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6eed44a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x24], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6eed469 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6eed3b0
        public_6eed475 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x24], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6eed491 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6eed4ac
        cmp esi, dword ptr ds : [ecx]
        je public_6eed4b3
        lea ecx, ss:[esp+0x10]
        call public_6f2ef80
        mov edx, dword ptr ss : [esp+0x10]
        public_6eed4ac : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6eed4d6
        public_6eed4b3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6eee080
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
        public_6eed4d6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6eed2e0)
    }
}

#undef public_6eed300
#undef public_6eed313
#undef public_6eed316
#undef public_6eed31a
#undef public_6eed379
#undef public_6eed391
#undef public_6eed39b
#undef public_6eed39f
#undef public_6eed3b0
#undef public_6eed3eb
#undef public_6eed3fa
#undef public_6eed41b
#undef public_6eed43c
#undef public_6eed44a
#undef public_6eed469
#undef public_6eed475
#undef public_6eed491
#undef public_6eed4ac
#undef public_6eed4b3
#undef public_6eed4d6
