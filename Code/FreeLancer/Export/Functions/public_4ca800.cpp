#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428de0);
CLANG_FORWARD_PROC_SYMBOL(public_489dc0);
CLANG_FORWARD_PROC_SYMBOL(public_4ca800);
CLANG_FORWARD_PROC_SYMBOL(public_4ca910);
CLANG_FORWARD_PROC_SYMBOL(public_501f80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bda03);

#define public_4ca840 _public_4ca840
#define public_4ca850 _public_4ca850
#define public_4ca865 _public_4ca865
#define public_4ca878 _public_4ca878
#define public_4ca882 _public_4ca882
#define public_4ca8ba _public_4ca8ba
#define public_4ca8bd _public_4ca8bd
#define public_4ca8f1 _public_4ca8f1

PROC_DECLARE(0x4ca800, internal_4ca800, public_4ca800);
extern "C" NAKED register_t __cdecl internal_4ca800()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bda03 @0x4ca802*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bda03
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+8], edi
        mov ecx, dword ptr ds : [edi+0xC]
        xor ebx, ebx
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x14], 1
        je public_4ca840
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        mov eax, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0xC], ebx
        public_4ca840 : nop
        mov eax, dword ptr ds : [edi+0x2C]
        push esi
        mov esi, dword ptr ds : [edi+0x28]
        cmp esi, eax
        je public_4ca882
        nop 
        lea esp, ss:[esp]
        public_4ca850 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebx
        je public_4ca865
        cmp byte ptr ds : [esi+8], 1
        jne public_4ca865
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        mov byte ptr ds : [esi+8], bl
        public_4ca865 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        cmp ecx, ebx
        lea eax, ds:[esi+0xC]
        je public_4ca878
        push eax
        call public_489dc0
        add esp, 4
        public_4ca878 : nop
        mov eax, dword ptr ds : [edi+0x2C]
        add esi, 0x10
        cmp esi, eax
        jne public_4ca850
        public_4ca882 : nop
        mov eax, dword ptr ds : [edi+0x2C]
        mov ecx, dword ptr ds : [edi+0x28]
        lea esi, ds:[edi+0x24]
        push eax
        push ecx
        mov ecx, esi
        call public_501f80
        cmp byte ptr ds : [edi+0x14], bl
        je public_4ca8bd
        call public_428de0
        dec dword ptr ds : [public_6735b0]
        jne public_4ca8ba
        mov eax, dword ptr ds : [public_6108f8]
        mov dword ptr ds : [public_6735a4], 0
        mov dword ptr ds : [public_6735ac], eax
        public_4ca8ba : nop
        mov byte ptr ds : [edi+0x14], bl
        public_4ca8bd : nop
        mov ecx, edi
        call public_4ca910
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov eax, dword ptr ds : [edi]
        add esp, 4
        cmp eax, ebx
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        pop esi
        je public_4ca8f1
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_5c62a8]
        public_4ca8f1 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x4ca800)
    }
}

#undef public_4ca840
#undef public_4ca850
#undef public_4ca865
#undef public_4ca878
#undef public_4ca882
#undef public_4ca8ba
#undef public_4ca8bd
#undef public_4ca8f1
