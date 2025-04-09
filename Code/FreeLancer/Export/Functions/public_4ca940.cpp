#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d60);
CLANG_FORWARD_PROC_SYMBOL(public_428de0);
CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4ca670);
CLANG_FORWARD_PROC_SYMBOL(public_4ca910);
CLANG_FORWARD_PROC_SYMBOL(public_4ca940);
CLANG_FORWARD_PROC_SYMBOL(public_4caae0);
CLANG_FORWARD_PROC_SYMBOL(public_59eee0);
CLANG_FORWARD_PROC_SYMBOL(public_59ef20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bda41);

#define public_4ca980 _public_4ca980
#define public_4ca992 _public_4ca992
#define public_4ca9a9 _public_4ca9a9
#define public_4ca9c1 _public_4ca9c1
#define public_4ca9df _public_4ca9df
#define public_4ca9f4 _public_4ca9f4
#define public_4caa33 _public_4caa33
#define public_4caa5e _public_4caa5e
#define public_4caa8d _public_4caa8d
#define public_4caa90 _public_4caa90
#define public_4caac3 _public_4caac3

PROC_DECLARE(0x4ca940, internal_4ca940, public_4ca940);
extern "C" NAKED register_t __cdecl internal_4ca940()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bda41 @0x4ca942*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bda41
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
        mov dword ptr ss : [esp+0x10], esi
        mov ebp, dword ptr ds : [esi+0x1BC]
        xor ebx, ebx
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x20], 1
        je public_4ca9a9
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, ebx
        je public_4ca992
        lea ecx, ds:[ecx]
        public_4ca980 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        cmp edi, ebx
        mov eax, edi
        jne public_4ca980
        public_4ca992 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ss : [ebp]
        push 1
        mov ecx, ebp
        call dword ptr ds : [edx]
        mov dword ptr ds : [esi+0x1BC], ebx
        public_4ca9a9 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        cmp ecx, ebx
        je public_4ca9c1
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xC], ebx
        public_4ca9c1 : nop
        mov ecx, esi
        call public_4caae0
        cmp byte ptr ds : [esi+0x14], bl
        je public_4ca9df
        call public_428de0
        mov ecx, offset public_6735a4
        call public_4ca670
        mov byte ptr ds : [esi+0x14], bl
        public_4ca9df : nop
        mov ecx, esi
        call public_4ca910
        cmp dword ptr ds : [esi+0x170], ebx
        je public_4ca9f4
        mov dword ptr ds : [esi+0x170], ebx
        public_4ca9f4 : nop
        lea eax, ds:[esi+0x38]
        mov byte ptr ds : [esi+0x174], bl
        mov dword ptr ds : [esi+0x1C0], ebx
        mov dword ptr ds : [esi+0x1C4], ebx
        mov dword ptr ds : [esi+0x1C8], ebx
        mov dword ptr ds : [esi+0x1CC], ebx
        mov dword ptr ss : [esp+0x14], eax
        lea edi, ds:[eax+0x50]
        mov ecx, edi
        mov byte ptr ss : [esp+0x20], 2
        call public_420d60
        test al, al
        je public_4caa33
        mov ecx, edi
        call public_59eee0
        public_4caa33 : nop
        mov ecx, edi
        mov byte ptr ss : [esp+0x20], bl
        call public_59ef20
        mov ecx, dword ptr ds : [esi+0xC]
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x20], 4
        je public_4caa5e
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xC], ebx
        public_4caa5e : nop
        mov ecx, esi
        call public_4caae0
        cmp byte ptr ds : [esi+0x14], bl
        je public_4caa90
        call public_428de0
        dec dword ptr ds : [public_6735b0]
        jne public_4caa8d
        mov edx, dword ptr ds : [public_6108f8]
        mov dword ptr ds : [public_6735a4], 0
        mov dword ptr ds : [public_6735ac], edx
        public_4caa8d : nop
        mov byte ptr ds : [esi+0x14], bl
        public_4caa90 : nop
        mov ecx, esi
        call public_4ca910
        mov eax, dword ptr ds : [esi+0x28]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x30], ebx
        mov eax, dword ptr ds : [esi]
        add esp, 4
        cmp eax, ebx
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        je public_4caac3
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_5c62a8]
        public_4caac3 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x4ca940)
    }
}

#undef public_4ca980
#undef public_4ca992
#undef public_4ca9a9
#undef public_4ca9c1
#undef public_4ca9df
#undef public_4ca9f4
#undef public_4caa33
#undef public_4caa5e
#undef public_4caa8d
#undef public_4caa90
#undef public_4caac3
