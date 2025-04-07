#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_420d10);
CLANG_FORWARD_PROC_SYMBOL(public_420f70);
CLANG_FORWARD_PROC_SYMBOL(public_4c9a30);
CLANG_FORWARD_PROC_SYMBOL(public_59ae60);
CLANG_FORWARD_PROC_SYMBOL(public_59dc00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4ce6);

#define public_59aeb0 _public_59aeb0
#define public_59aed7 _public_59aed7
#define public_59af20 _public_59af20
#define public_59af35 _public_59af35
#define public_59af40 _public_59af40
#define public_59af50 _public_59af50
#define public_59af75 _public_59af75
#define public_59afaa _public_59afaa
#define public_59afb3 _public_59afb3
#define public_59aff0 _public_59aff0
#define public_59affe _public_59affe

PROC_DECLARE(0x59ae60, internal_59ae60, public_59ae60);
extern "C" NAKED register_t __cdecl internal_59ae60()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4ce6 @0x59ae62*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4ce6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ds : [edi], offset public_5e5804
        mov eax, dword ptr ds : [edi+0x8C]
        test eax, eax
        lea esi, ds:[edi+0x8C]
        mov dword ptr ss : [esp+0x24], 3
        je public_59aed7
        mov ecx, esi
        call public_4c9a30
        lea ebp, ds:[esi+4]
        mov ebx, 4
        nop 
        public_59aeb0 : nop
        mov ecx, ebp
        call public_420f70
        add ebp, 0x10
        dec ebx
        jne public_59aeb0
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_59aed7
        mov eax, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x18]
        mov dword ptr ds : [esi], 0
        public_59aed7 : nop
        lea ecx, ds:[edi+0x324]
        mov byte ptr ss : [esp+0x24], 2
        mov dword ptr ds : [ecx], offset public_5c8944
        call public_401e90
        mov dword ptr ss : [esp+0x18], esi
        mov eax, dword ptr ds : [esi]
        test eax, eax
        mov byte ptr ss : [esp+0x24], 4
        je public_59af40
        mov ecx, dword ptr ds : [public_5c6d58]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x24]
        lea ecx, ds:[esi+0x254]
        lea eax, ds:[esi+0x44]
        mov edx, 4
        lea esp, ss:[esp]
        public_59af20 : nop
        cmp dword ptr ds : [ecx], 0xFFFFFFFF
        je public_59af35
        mov dword ptr ds : [eax], 0
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [ecx], 0xFFFFFFFF
        public_59af35 : nop
        add ecx, 4
        add eax, 0x84
        dec edx
        jne public_59af20
        public_59af40 : nop
        lea ebp, ds:[esi+4]
        mov dword ptr ss : [esp+0x10], ebp
        mov ebx, 4
        lea esp, ss:[esp]
        public_59af50 : nop
        mov ecx, ebp
        call public_420f70
        add ebp, 0x10
        dec ebx
        jne public_59af50
        mov ecx, dword ptr ds : [esi]
        xor ebx, ebx
        cmp ecx, ebx
        je public_59af75
        mov eax, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x18]
        mov dword ptr ds : [esi], ebx
        public_59af75 : nop
        mov eax, dword ptr ss : [esp+0x10]
/*FIXUP push offset _public_420d10 @0x59af79*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_420d10
        push 4
        push 0x10
        push eax
        mov byte ptr ss : [esp+0x34], 1
        call public_5b7ec6
        mov eax, dword ptr ds : [edi+0x80]
        cmp eax, ebx
        je public_59afb3
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_59afaa
        cmp cl, 0xFF
        je public_59afaa
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_59afb3
        public_59afaa : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_59afb3 : nop
        mov dword ptr ds : [edi+0x80], ebx
        mov dword ptr ds : [edi+0x84], ebx
        mov dword ptr ds : [edi+0x88], ebx
        mov dword ptr ds : [edi], offset public_5d5544
        dec dword ptr ds : [public_67dcd4]
        mov cl, byte ptr ds : [edi+0x6C]
        mov esi, dword ptr ds : [edi+0xC]
        and cl, 0xFC
        cmp esi, ebx
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        mov byte ptr ds : [edi+0x6C], cl
        je public_59affe
        lea esp, ss:[esp]
        public_59aff0 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        mov esi, dword ptr ds : [esi+8]
        cmp esi, ebx
        jne public_59aff0
        public_59affe : nop
        push edi
        call public_59dc00
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x59ae60)
    }
}

#undef public_59aeb0
#undef public_59aed7
#undef public_59af20
#undef public_59af35
#undef public_59af40
#undef public_59af50
#undef public_59af75
#undef public_59afaa
#undef public_59afb3
#undef public_59aff0
#undef public_59affe
