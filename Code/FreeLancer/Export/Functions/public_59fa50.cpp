#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59d960);
CLANG_FORWARD_PROC_SYMBOL(public_59dc00);
CLANG_FORWARD_PROC_SYMBOL(public_59eee0);
CLANG_FORWARD_PROC_SYMBOL(public_59ef20);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b8058);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4f06);

#define public_59fa9e _public_59fa9e
#define public_59fab2 _public_59fab2
#define public_59fadf _public_59fadf
#define public_59faf0 _public_59faf0
#define public_59fafe _public_59fafe
#define public_59fb37 _public_59fb37
#define public_59fb45 _public_59fb45

PROC_DECLARE(0x59fa50, internal_59fa50, public_59fa50);
extern "C" NAKED register_t __cdecl internal_59fa50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4f06 @0x59fa52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4f06
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0xC], edi
        mov dword ptr ds : [edi], offset public_5e5e44
        mov dword ptr ds : [edi+0x7C], offset public_5e5e38
        mov al, byte ptr ds : [edi+0x2D0]
        test al, al
        mov dword ptr ss : [esp+0x18], 1
        je public_59fa9e
        push edi
        mov byte ptr ds : [edi+0x2D0], 0
        call public_59d960
        add esp, 4
        public_59fa9e : nop
        lea ebp, ds:[edi+0x80]
        mov ecx, ebp
        call public_59eee0
        mov esi, dword ptr ds : [edi+0xC]
        test esi, esi
        je public_59fadf
        public_59fab2 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        push 0
/*FIXUP push offset public_610ddc @0x59fabb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_610ddc
/*FIXUP push offset public_610dc8 @0x59fac0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_610dc8
        push 0
        push esi
        call public_5b8058
        mov edx, dword ptr ds : [esi]
        add esp, 0x14
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        mov esi, dword ptr ds : [edi+0xC]
        test esi, esi
        jne public_59fab2
        public_59fadf : nop
        mov cl, byte ptr ds : [edi+0x6C]
        mov esi, dword ptr ds : [edi+0xC]
        and cl, 0xFC
        test esi, esi
        mov byte ptr ds : [edi+0x6C], cl
        je public_59fafe
        nop 
        public_59faf0 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        jne public_59faf0
        public_59fafe : nop
        push edi
        call public_59dc00
        add esp, 4
        mov ecx, ebp
        mov byte ptr ss : [esp+0x18], 0
        call public_59ef20
        mov dword ptr ds : [edi], offset public_5d5544
        dec dword ptr ds : [public_67dcd4]
        mov cl, byte ptr ds : [edi+0x6C]
        mov esi, dword ptr ds : [edi+0xC]
        and cl, 0xFC
        test esi, esi
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        mov byte ptr ds : [edi+0x6C], cl
        je public_59fb45
        public_59fb37 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        jne public_59fb37
        public_59fb45 : nop
        push edi
        call public_59dc00
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x59fa50)
    }
}

#undef public_59fa9e
#undef public_59fab2
#undef public_59fadf
#undef public_59faf0
#undef public_59fafe
#undef public_59fb37
#undef public_59fb45
