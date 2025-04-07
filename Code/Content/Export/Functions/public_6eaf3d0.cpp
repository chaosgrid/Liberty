#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eaf3d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb10d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb1320);
CLANG_FORWARD_PROC_SYMBOL(public_6eb14f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb1f30);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);

#define public_6eaf3f0 _public_6eaf3f0
#define public_6eaf403 _public_6eaf403
#define public_6eaf406 _public_6eaf406
#define public_6eaf40a _public_6eaf40a
#define public_6eaf469 _public_6eaf469
#define public_6eaf481 _public_6eaf481
#define public_6eaf48b _public_6eaf48b
#define public_6eaf48f _public_6eaf48f
#define public_6eaf4a0 _public_6eaf4a0
#define public_6eaf4db _public_6eaf4db
#define public_6eaf4ea _public_6eaf4ea
#define public_6eaf50b _public_6eaf50b
#define public_6eaf52c _public_6eaf52c
#define public_6eaf53a _public_6eaf53a
#define public_6eaf559 _public_6eaf559
#define public_6eaf565 _public_6eaf565
#define public_6eaf581 _public_6eaf581
#define public_6eaf59c _public_6eaf59c
#define public_6eaf5a3 _public_6eaf5a3
#define public_6eaf5c6 _public_6eaf5c6

PROC_DECLARE(0x6eaf3d0, internal_6eaf3d0, public_6eaf3d0);
extern "C" NAKED register_t __cdecl internal_6eaf3d0()
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
        je public_6eaf40a
        lea esp, ss:[esp]
        public_6eaf3f0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6eaf403
        mov ebp, dword ptr ss : [ebp]
        jmp public_6eaf406
        public_6eaf403 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6eaf406 : nop
        cmp ebp, edx
        jne public_6eaf3f0
        public_6eaf40a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6eaf581
        push 0
        push esi
        mov ecx, edi
        call public_6eb1320
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6eb1f30
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6eaf469
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6eaf469
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6eaf469
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6eaf48f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6eaf48f
        public_6eaf469 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6eaf481
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6eaf48b
        public_6eaf481 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6eaf48b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6eaf48b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6eaf48f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6eaf565
        lea ecx, ds:[ecx]
        public_6eaf4a0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x34]
        test cl, cl
        jne public_6eaf565
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6eaf50b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x34]
        test dl, dl
        jne public_6eaf4db
        mov byte ptr ds : [eax+0x34], 1
        mov byte ptr ds : [ecx+0x34], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6eaf559
        public_6eaf4db : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6eaf4ea
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6eaf4ea : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x34], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x34], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6eaf559
        public_6eaf50b : nop
        mov dl, byte ptr ds : [ecx+0x34]
        test dl, dl
        jne public_6eaf52c
        mov byte ptr ds : [eax+0x34], 1
        mov byte ptr ds : [ecx+0x34], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x34], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6eaf559
        public_6eaf52c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6eaf53a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6eaf53a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x34], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6eaf559 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6eaf4a0
        public_6eaf565 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x34], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6eaf581 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6eaf59c
        cmp esi, dword ptr ds : [ecx]
        je public_6eaf5a3
        lea ecx, ss:[esp+0x10]
        call public_6eb14f0
        mov edx, dword ptr ss : [esp+0x10]
        public_6eaf59c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6eaf5c6
        public_6eaf5a3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6eb10d0
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
        public_6eaf5c6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6eaf3d0)
    }
}

#undef public_6eaf3f0
#undef public_6eaf403
#undef public_6eaf406
#undef public_6eaf40a
#undef public_6eaf469
#undef public_6eaf481
#undef public_6eaf48b
#undef public_6eaf48f
#undef public_6eaf4a0
#undef public_6eaf4db
#undef public_6eaf4ea
#undef public_6eaf50b
#undef public_6eaf52c
#undef public_6eaf53a
#undef public_6eaf559
#undef public_6eaf565
#undef public_6eaf581
#undef public_6eaf59c
#undef public_6eaf5a3
#undef public_6eaf5c6
