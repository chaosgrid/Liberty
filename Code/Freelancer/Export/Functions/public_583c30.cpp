#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_457dc0);
CLANG_FORWARD_PROC_SYMBOL(public_583c30);
CLANG_FORWARD_PROC_SYMBOL(public_587dc0);
CLANG_FORWARD_PROC_SYMBOL(public_5995c0);
CLANG_FORWARD_PROC_SYMBOL(public_59eee0);
CLANG_FORWARD_PROC_SYMBOL(public_59ef20);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c436d);

#define public_583c75 _public_583c75
#define public_583c9e _public_583c9e
#define public_583cb4 _public_583cb4
#define public_583ce0 _public_583ce0
#define public_583cf0 _public_583cf0
#define public_583d06 _public_583d06
#define public_583d26 _public_583d26
#define public_583d50 _public_583d50
#define public_583d63 _public_583d63

PROC_DECLARE(0x583c30, internal_583c30, public_583c30);
extern "C" NAKED register_t __cdecl internal_583c30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c436d @0x583c32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c436d
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ds : [esi], offset public_5e4bcc
        mov dword ptr ds : [esi+0x7C], offset public_5e4bc0
        xor ebx, ebx
        xor edx, edx
        mov dword ptr ss : [esp+0x20], 6
        mov dword ptr ss : [esp+0x10], edx
        lea edi, ds:[esi+0x538]
        public_583c75 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp ecx, ebx
        je public_583cb4
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 2
        cmp edx, eax
        jae public_583cb4
        mov eax, dword ptr ds : [esi+0x53C]
        mov ebp, dword ptr ds : [eax+edx*4]
        cmp dword ptr ss : [ebp+4], 0xFFFFFFFF
        je public_583c9e
        mov ecx, ebp
        call public_59eee0
        public_583c9e : nop
        mov edx, dword ptr ss : [ebp]
        push 1
        mov ecx, ebp
        call dword ptr ds : [edx]
        mov eax, dword ptr ss : [esp+0x10]
        inc eax
        mov dword ptr ss : [esp+0x10], eax
        mov edx, eax
        jmp public_583c75
        public_583cb4 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+4]
        push eax
        push ecx
        mov ecx, edi
        call public_5995c0
        mov eax, dword ptr ds : [esi+0x46C]
        xor ebp, ebp
        cmp eax, ebx
        jle public_583d06
        lea eax, ds:[esi+0x44C]
        mov dword ptr ss : [esp+0x10], eax
        lea esp, ss:[esp]
        public_583ce0 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, ebx
        je public_583cf0
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_583cf0 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+0x46C]
        inc ebp
        add ecx, 4
        cmp ebp, eax
        mov dword ptr ss : [esp+0x10], ecx
        jl public_583ce0
        public_583d06 : nop
        mov ebp, dword ptr ds : [esi+0x4D4]
        cmp ebp, ebx
        je public_583d26
        mov ecx, ebp
        call public_457dc0
        push ebp
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [esi+0x4D4], ebx
        public_583d26 : nop
        lea ecx, ds:[esi+0x330]
        call public_59eee0
        mov eax, dword ptr ds : [esi+0x568]
        mov ebp, dword ptr ds : [esi+0x564]
        cmp ebp, eax
        mov byte ptr ss : [esp+0x20], 5
        mov dword ptr ss : [esp+0x10], eax
        je public_583d63
        lea ebx, ds:[ebx]
        public_583d50 : nop
        push ebx
        mov ecx, ebp
        call public_587dc0
        mov eax, dword ptr ss : [esp+0x10]
        add ebp, 0x20
        cmp ebp, eax
        jne public_583d50
        public_583d63 : nop
        mov eax, dword ptr ds : [esi+0x564]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [esi+0x564], ebx
        mov dword ptr ds : [esi+0x568], ebx
        mov dword ptr ds : [esi+0x56C], ebx
        mov eax, dword ptr ds : [esi+0x550]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [esi+0x550], ebx
        mov dword ptr ds : [esi+0x554], ebx
        mov dword ptr ds : [esi+0x558], ebx
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov eax, dword ptr ds : [esi+0x4CC]
        mov ecx, dword ptr ds : [eax]
        add esp, 0xC
        lea edi, ds:[esi+0x4C8]
        push eax
        push ecx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x2C], 2
        call dword ptr ds : [public_5c618c]
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        lea ecx, ds:[esi+0x388]
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        add esp, 4
        mov byte ptr ss : [esp+0x20], 1
        mov dword ptr ds : [ecx], offset public_5c8944
        call public_401e90
        lea ecx, ds:[esi+0x330]
        mov byte ptr ss : [esp+0x20], bl
        call public_59ef20
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call public_59fa50
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x583c30)
    }
}

#undef public_583c75
#undef public_583c9e
#undef public_583cb4
#undef public_583ce0
#undef public_583cf0
#undef public_583d06
#undef public_583d26
#undef public_583d50
#undef public_583d63
