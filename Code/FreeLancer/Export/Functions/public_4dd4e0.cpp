#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4dd4e0);
CLANG_FORWARD_PROC_SYMBOL(public_4f1da0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_4dd563 _public_4dd563
#define public_4dd567 _public_4dd567
#define public_4dd5a1 _public_4dd5a1
#define public_4dd5e8 _public_4dd5e8
#define public_4dd5fd _public_4dd5fd
#define public_4dd605 _public_4dd605
#define public_4dd610 _public_4dd610
#define public_4dd648 _public_4dd648
#define public_4dd64d _public_4dd64d
#define public_4dd652 _public_4dd652
#define public_4dd66c _public_4dd66c
#define public_4dd691 _public_4dd691
#define public_4dd6a4 _public_4dd6a4
#define public_4dd6bd _public_4dd6bd
#define public_4dd6c2 _public_4dd6c2
#define public_4dd71d _public_4dd71d

PROC_DECLARE(0x4dd4e0, internal_4dd4e0, public_4dd4e0);
extern "C" NAKED register_t __cdecl internal_4dd4e0()
{
    __asm
    {
        sub esp, 0x78
        push ebx
        push ebp
        push edi
        call public_54baf0
        test eax, eax
        mov dword ptr ss : [esp+0x24], eax
        je public_4dd71d
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x150]
        mov ebp, eax
        test ebp, ebp
        mov dword ptr ss : [esp+0x20], ebp
        je public_4dd71d
        mov eax, dword ptr ss : [ebp+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_4dd71d
        xor ebx, ebx
        push 0x80
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x14], ebx
        call dword ptr ds : [public_5c64f4]
        lea edx, ss:[esp+0x34]
        lea ecx, ss:[ebp+0xE4]
        push edx
        call dword ptr ds : [public_5c64f0]
        push eax
        call dword ptr ds : [public_5c6544]
        mov edi, eax
        add esp, 4
        test edi, edi
        mov dword ptr ss : [esp+0x14], edi
        je public_4dd71d
        push esi
        jmp public_4dd567
        public_4dd563 : nop
        mov edi, dword ptr ss : [esp+0x18]
        public_4dd567 : nop
        mov esi, dword ptr ds : [public_5c6548]
        mov ecx, edi
        call esi
        mov ecx, dword ptr ds : [eax+0x90]
        test ecx, ecx
        je public_4dd6c2
        mov ecx, edi
        mov byte ptr ss : [esp+0x12], 0
        mov byte ptr ss : [esp+0x13], 0
        call esi
        mov cl, byte ptr ds : [eax+0xAC]
        test cl, cl
        je public_4dd5a1
        mov byte ptr ss : [esp+0x13], 1
        jmp public_4dd66c
        public_4dd5a1 : nop
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+0x60]
        mov esi, dword ptr ss : [ebp+0x88]
        mov eax, dword ptr ds : [esi+0x134]
        test eax, eax
        je public_4dd66c
        mov ecx, dword ptr ds : [esi+0x138]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        test edx, edx
        jle public_4dd66c
        xor edi, edi
        mov dword ptr ss : [esp+0x1C], edx
        public_4dd5e8 : nop
        mov ecx, dword ptr ds : [esi+0x134]
        lea eax, ds:[ecx+edi+4]
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        jne public_4dd5fd
        xor ebx, ebx
        jmp public_4dd605
        public_4dd5fd : nop
        mov ebx, dword ptr ds : [eax+8]
        sub ebx, ecx
        sar ebx, 2
        public_4dd605 : nop
        xor ebp, ebp
        test ebx, ebx
        jle public_4dd652
        nop 
        lea esp, ss:[esp]
        public_4dd610 : nop
        mov edx, dword ptr ds : [esi+0x134]
        mov eax, dword ptr ds : [edx+edi+8]
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [eax+ebp*4]
        push ecx
        push eax
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        jne public_4dd64d
        mov edx, dword ptr ds : [esi+0x134]
        mov eax, dword ptr ds : [edi+edx]
        cmp eax, 0xA
        je public_4dd648
        cmp eax, 0x24
        je public_4dd648
        cmp eax, 0x23
        jne public_4dd64d
        public_4dd648 : nop
        mov byte ptr ss : [esp+0x12], 1
        public_4dd64d : nop
        inc ebp
        cmp ebp, ebx
        jl public_4dd610
        public_4dd652 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        add edi, 0x14
        dec eax
        mov dword ptr ss : [esp+0x1C], eax
        jne public_4dd5e8
        mov edi, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ss : [esp+0x24]
        public_4dd66c : nop
        mov eax, dword ptr ss : [esp+0x8C]
        sub eax, 0
        je public_4dd6a4
        dec eax
        je public_4dd691
        dec eax
        jne public_4dd6c2
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_4dd6c2
        mov ax, word ptr ds : [edi+8]
        mov word ptr ss : [esp+ebx*2+0x48], ax
        jmp public_4dd6bd
        public_4dd691 : nop
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        je public_4dd6c2
        mov cx, word ptr ds : [edi+8]
        mov word ptr ss : [esp+ebx*2+0x48], cx
        jmp public_4dd6bd
        public_4dd6a4 : nop
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        jne public_4dd6c2
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_4dd6c2
        mov dx, word ptr ds : [edi+8]
        mov word ptr ss : [esp+ebx*2+0x48], dx
        public_4dd6bd : nop
        inc ebx
        mov dword ptr ss : [esp+0x14], ebx
        public_4dd6c2 : nop
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ss:[ebp+0xE4]
        call dword ptr ds : [public_5c64f0]
        push eax
        call dword ptr ds : [public_5c6544]
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        jne public_4dd563
        test ebx, ebx
        pop esi
        je public_4dd71d
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, dword ptr ds : [public_674b70]
        call public_4f1da0
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [edx+4]
        lea ecx, ds:[edx+4]
        mov edx, dword ptr ds : [public_673344]
        push edx
        lea edx, ss:[esp+0x2C]
        push edx
        push ebx
        lea edx, ss:[esp+0x50]
        push edx
        call dword ptr ds : [eax+0x34]
        public_4dd71d : nop
        pop edi
        pop ebp
        pop ebx
        add esp, 0x78
        ret 4
        UNREACHABLE_TRAP(0x4dd4e0)
    }
}

#undef public_4dd563
#undef public_4dd567
#undef public_4dd5a1
#undef public_4dd5e8
#undef public_4dd5fd
#undef public_4dd605
#undef public_4dd610
#undef public_4dd648
#undef public_4dd64d
#undef public_4dd652
#undef public_4dd66c
#undef public_4dd691
#undef public_4dd6a4
#undef public_4dd6bd
#undef public_4dd6c2
#undef public_4dd71d
