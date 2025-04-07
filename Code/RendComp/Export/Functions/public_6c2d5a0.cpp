#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2d5a0);

#define public_6c2d627 _public_6c2d627
#define public_6c2d632 _public_6c2d632
#define public_6c2d635 _public_6c2d635
#define public_6c2d660 _public_6c2d660
#define public_6c2d667 _public_6c2d667
#define public_6c2d68e _public_6c2d68e
#define public_6c2d69c _public_6c2d69c
#define public_6c2d6c3 _public_6c2d6c3
#define public_6c2d6e2 _public_6c2d6e2
#define public_6c2d6f1 _public_6c2d6f1
#define public_6c2d706 _public_6c2d706

PROC_DECLARE(0x6c2d5a0, internal_6c2d5a0, public_6c2d5a0);
extern "C" NAKED register_t __cdecl internal_6c2d5a0()
{
    __asm
    {
        sub esp, 0x14
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [public_6c37d5c]
        push ebp
        push esi
        push edi
        xor edi, edi
        push edi
        mov ebp, ecx
        mov ecx, dword ptr ds : [eax]
        push edi
        push edx
        mov edx, dword ptr ss : [ebp+0x18]
        lea esi, ss:[ebp+0x18]
        push edx
        push eax
        mov dword ptr ss : [esp+0x30], ebp
        call dword ptr ds : [ecx+0x24]
        cmp eax, edi
        jge public_6c2d706
        mov eax, dword ptr ds : [public_6c37d5c]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [public_6c37d5c]
        mov edx, dword ptr ds : [eax]
        push edi
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0xC]
        cmp eax, edi
        jl public_6c2d706
        mov ecx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [public_6c37d5c]
        push ecx
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, dword ptr ds : [esi]
        push ecx
        mov dword ptr ss : [esp+0x28], edi
        mov dword ptr ss : [esp+0x1C], edi
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x1C]
        test eax, eax
        jl public_6c2d6f1
        push ebx
        mov dword ptr ss : [esp+0x18], edi
        xor ebx, ebx
        public_6c2d627 : nop
        xor edi, edi
        cmp ebx, edi
        jne public_6c2d632
        mov ebx, dword ptr ss : [ebp+0x1C]
        jmp public_6c2d635
        public_6c2d632 : nop
        mov ebx, dword ptr ds : [ebx+0x20]
        public_6c2d635 : nop
        cmp ebx, edi
        mov dword ptr ss : [esp+0x14], ebx
        je public_6c2d6e2
        mov edx, dword ptr ds : [ebx+0x34]
        test byte ptr ds : [edx], 1
        movzx eax, word ptr ds : [edx+8]
        lea eax, ds:[eax+eax*2]
        lea esi, ds:[edx+eax*4+0x10]
        je public_6c2d69c
        cmp word ptr ds : [edx+8], 0
        jbe public_6c2d6c3
        lea eax, ds:[edx+0x18]
        mov edi, edi
        public_6c2d660 : nop
        xor ecx, ecx
        cmp word ptr ds : [eax], cx
        jbe public_6c2d68e
        public_6c2d667 : nop
        mov bx, word ptr ds : [eax-4]
        add bx, word ptr ds : [esi]
        mov ebp, dword ptr ss : [esp+0x10]
        mov word ptr ss : [ebp], bx
        add dword ptr ss : [esp+0x10], 2
        movzx ebx, word ptr ds : [eax]
        inc ecx
        add esi, 2
        cmp ecx, ebx
        jl public_6c2d667
        mov ebp, dword ptr ss : [esp+0x20]
        mov ebx, dword ptr ss : [esp+0x14]
        public_6c2d68e : nop
        movzx ecx, word ptr ds : [edx+8]
        inc edi
        add eax, 0xC
        cmp edi, ecx
        jl public_6c2d660
        jmp public_6c2d6c3
        public_6c2d69c : nop
        movzx ecx, word ptr ds : [edx+0xA]
        mov edi, dword ptr ss : [esp+0x10]
        shl ecx, 1
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        movzx ecx, word ptr ds : [edx+0xA]
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ds:[eax+ecx*2]
        mov dword ptr ss : [esp+0x10], ecx
        public_6c2d6c3 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        lea esi, ss:[ebp+0x18]
        mov dword ptr ds : [ebx+0x18], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ebx+0x1C], eax
        movzx ecx, word ptr ds : [edx+0xA]
        add eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        jmp public_6c2d627
        public_6c2d6e2 : nop
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [public_6c37d5c]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        pop ebx
        public_6c2d6f1 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [public_6c37d5c]
        mov edx, dword ptr ds : [eax]
        push edi
        push edi
        push ecx
        mov ecx, dword ptr ds : [esi]
        push ecx
        push eax
        call dword ptr ds : [edx+0x24]
        public_6c2d706 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6c2d5a0)
    }
}

#undef public_6c2d627
#undef public_6c2d632
#undef public_6c2d635
#undef public_6c2d660
#undef public_6c2d667
#undef public_6c2d68e
#undef public_6c2d69c
#undef public_6c2d6c3
#undef public_6c2d6e2
#undef public_6c2d6f1
#undef public_6c2d706
