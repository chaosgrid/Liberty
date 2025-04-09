#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420c20);
CLANG_FORWARD_PROC_SYMBOL(public_427250);
CLANG_FORWARD_PROC_SYMBOL(public_4274b0);
CLANG_FORWARD_PROC_SYMBOL(public_427760);
CLANG_FORWARD_PROC_SYMBOL(public_4277c0);
CLANG_FORWARD_PROC_SYMBOL(public_436ae0);
CLANG_FORWARD_PROC_SYMBOL(public_5ae590);

#define public_427268 _public_427268
#define public_427289 _public_427289
#define public_42728c _public_42728c
#define public_427291 _public_427291
#define public_4272fe _public_4272fe
#define public_427316 _public_427316
#define public_427320 _public_427320
#define public_427324 _public_427324
#define public_427332 _public_427332
#define public_427370 _public_427370
#define public_42737f _public_42737f
#define public_4273a0 _public_4273a0
#define public_4273c1 _public_4273c1
#define public_4273cf _public_4273cf
#define public_4273ee _public_4273ee
#define public_4273fa _public_4273fa
#define public_427416 _public_427416
#define public_427448 _public_427448
#define public_427451 _public_427451
#define public_42748d _public_42748d

PROC_DECLARE(0x427250, internal_427250, public_427250);
extern "C" NAKED register_t __cdecl internal_427250()
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
        mov esi, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [esi+4]
        cmp ebp, dword ptr ds : [edi+8]
        mov al, 1
        je public_427291
        public_427268 : nop
        lea eax, ss:[ebp+0x10]
        push eax
        lea eax, ds:[ebx+4]
        push eax
        mov esi, ebp
        call dword ptr ds : [public_5c70bc]
        add esp, 8
        test eax, eax
        setl al
        test al, al
        je public_427289
        mov ebp, dword ptr ss : [ebp]
        jmp public_42728c
        public_427289 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_42728c : nop
        cmp ebp, dword ptr ds : [edi+8]
        jne public_427268
        public_427291 : nop
        mov cl, byte ptr ds : [edi+0xC]
        test cl, cl
        je public_427416
        push 0
        push esi
        mov ecx, edi
        call public_420c20
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_4277c0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_4272fe
        cmp ebp, dword ptr ds : [edi+8]
        jne public_4272fe
        lea eax, ds:[esi+0x10]
        push eax
        add ebx, 4
        push ebx
        call dword ptr ds : [public_5c70bc]
        add esp, 8
        test eax, eax
        jl public_4272fe
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_427324
        mov dword ptr ds : [eax+8], ebx
        jmp public_427324
        public_4272fe : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_427316
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_427320
        public_427316 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_427320
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_427320 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_427324 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_4273fa
        public_427332 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x58]
        test cl, cl
        jne public_4273fa
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_4273a0
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x58]
        test dl, dl
        jne public_427370
        mov byte ptr ds : [eax+0x58], 1
        mov byte ptr ds : [ecx+0x58], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x58], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_4273ee
        public_427370 : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_42737f
        mov esi, eax
        push esi
        mov ecx, edi
        call public_436ae0
        public_42737f : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x58], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x58], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_5ae590
        jmp public_4273ee
        public_4273a0 : nop
        mov dl, byte ptr ds : [ecx+0x58]
        test dl, dl
        jne public_4273c1
        mov byte ptr ds : [eax+0x58], 1
        mov byte ptr ds : [ecx+0x58], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x58], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_4273ee
        public_4273c1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_4273cf
        mov esi, eax
        push esi
        mov ecx, edi
        call public_5ae590
        public_4273cf : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x58], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x58], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_436ae0
        public_4273ee : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_427332
        public_4273fa : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x58], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_427416 : nop
        test al, al
        mov dword ptr ss : [esp+0x10], esi
        je public_427451
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx]
        jne public_427448
        push ebx
        push esi
        push ebp
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, edi
        call public_4274b0
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        public_427448 : nop
        lea ecx, ss:[esp+0x10]
        call public_427760
        public_427451 : nop
        mov eax, dword ptr ss : [esp+0x10]
        lea edx, ds:[ebx+4]
        push edx
        add eax, 0x10
        push eax
        call dword ptr ds : [public_5c70bc]
        add esp, 8
        test eax, eax
        jge public_42748d
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_4274b0
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], edx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_42748d : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x427250)
    }
}

#undef public_427268
#undef public_427289
#undef public_42728c
#undef public_427291
#undef public_4272fe
#undef public_427316
#undef public_427320
#undef public_427324
#undef public_427332
#undef public_427370
#undef public_42737f
#undef public_4273a0
#undef public_4273c1
#undef public_4273cf
#undef public_4273ee
#undef public_4273fa
#undef public_427416
#undef public_427448
#undef public_427451
#undef public_42748d
