#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444080);
CLANG_FORWARD_PROC_SYMBOL(public_4440c0);
CLANG_FORWARD_PROC_SYMBOL(public_5594b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);
CLANG_FORWARD_JUMP_SYMBOL(public_5b97c8);

#define public_44411b _public_44411b
#define public_444144 _public_444144
#define public_444158 _public_444158
#define public_444174 _public_444174
#define public_44418f _public_44418f
#define public_4441e1 _public_4441e1
#define public_4441f0 _public_4441f0
#define public_4441fe _public_4441fe
#define public_444214 _public_444214

PROC_DECLARE(0x4440c0, internal_4440c0, public_4440c0);
extern "C" NAKED register_t __cdecl internal_4440c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b97c8 @0x4440c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b97c8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi], offset public_5cb930
        cmp dword ptr ds : [esi+0x36C], 1
        mov dword ptr ss : [esp+0x1C], 4
        jne public_44411b
/*FIXUP push offset public_5cb998 @0x4440f7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb998
        push 0x175
/*FIXUP push offset public_5cb964 @0x444101*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb964
        mov eax, 0x100001
/*FIXUP push offset public_5c747c @0x44410b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c747c
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_44411b : nop
        mov eax, dword ptr ds : [esi+0x360]
        xor ebp, ebp
        cmp eax, ebp
        je public_444144
        lea ecx, ds:[esi+0x364]
        push ecx
        mov dword ptr ds : [esi+0x360], ebp
        mov byte ptr ds : [esi+0x368], 0
        call dword ptr ds : [public_5c60c8]
        add esp, 4
        public_444144 : nop
        cmp dword ptr ds : [esi+0x2F0], ebp
        jle public_44418f
        lea ebx, ds:[esi+0x1F0]
        lea edi, ds:[esi+0x1D0]
        public_444158 : nop
        mov ecx, dword ptr ds : [edi]
        cmp ecx, 0xFFFFFFFF
        je public_444174
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x60]
        mov dword ptr ds : [edi], 0xFFFFFFFF
        public_444174 : nop
        mov ecx, ebx
        call dword ptr ds : [public_5c61bc]
        mov eax, dword ptr ds : [esi+0x2F0]
        inc ebp
        add edi, 4
        add ebx, 0x20
        cmp ebp, eax
        jl public_444158
        xor ebp, ebp
        public_44418f : nop
        lea eax, ds:[esi+0x2FC]
        push eax
        mov dword ptr ds : [esi+0x2F0], ebp
        call dword ptr ds : [public_5c61b8]
        lea edi, ds:[esi+0x304]
        add esp, 4
        mov ecx, edi
        call dword ptr ds : [public_5c61bc]
        lea ebx, ds:[esi+0x154]
        mov ecx, ebx
        call dword ptr ds : [public_5c6194]
        mov al, byte ptr ds : [esi+0x3AD]
        test al, al
        jne public_4441fe
        mov eax, dword ptr ds : [esi+0x30]
        cmp eax, ebp
        je public_4441e1
        mov ecx, dword ptr ds : [public_5c6d58]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x18]
        public_4441e1 : nop
        mov dword ptr ds : [esi+0x30], ebp
        lea eax, ds:[esi+0x144]
        mov ecx, 4
        nop 
        public_4441f0 : nop
        mov dword ptr ds : [eax-0x110], ebp
        mov dword ptr ds : [eax], ebp
        add eax, 4
        dec ecx
        jne public_4441f0
        public_4441fe : nop
        mov ecx, dword ptr ds : [esi+0x2F4]
        cmp ecx, ebp
        je public_444214
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x2F4], ebp
/*FIXUP public_444214 : nop
        push offset _public_444080 @0x444214*/
  FIXUP public_444214 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_444080
        push 5
        push 0xC
        lea ecx, ds:[esi+0x324]
        push ecx
        mov byte ptr ss : [esp+0x2C], 3
        call public_5b7ec6
        mov ecx, edi
        mov edi, dword ptr ds : [public_5c61b4]
        mov byte ptr ss : [esp+0x1C], 2
        call edi
        push edi
        push 8
        push 0x20
        lea edx, ds:[esi+0x1F0]
        push edx
        mov byte ptr ss : [esp+0x2C], 1
        call public_5b7ec6
        mov ecx, ebx
        mov byte ptr ss : [esp+0x1C], 0
        call dword ptr ds : [public_5c6104]
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call public_5594b0
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x4440c0)
    }
}

#undef public_44411b
#undef public_444144
#undef public_444158
#undef public_444174
#undef public_44418f
#undef public_4441e1
#undef public_4441f0
#undef public_4441fe
#undef public_444214
