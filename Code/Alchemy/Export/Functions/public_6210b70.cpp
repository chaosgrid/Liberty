#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b350);
CLANG_FORWARD_PROC_SYMBOL(public_620b3a0);
CLANG_FORWARD_PROC_SYMBOL(public_620b3f0);
CLANG_FORWARD_PROC_SYMBOL(public_620d1d0);
CLANG_FORWARD_PROC_SYMBOL(public_620ef80);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6247d58);

#define public_6210ba9 _public_6210ba9
#define public_6210bc9 _public_6210bc9
#define public_6210bcd _public_6210bcd
#define public_6210bd2 _public_6210bd2
#define public_6210c1f _public_6210c1f
#define public_6210c21 _public_6210c21
#define public_6210c32 _public_6210c32
#define public_6210c38 _public_6210c38
#define public_6210c4d _public_6210c4d
#define public_6210c7f _public_6210c7f
#define public_6210c94 _public_6210c94
#define public_6210ca9 _public_6210ca9
#define public_6210cbe _public_6210cbe
#define public_6210cd3 _public_6210cd3
#define public_6210ceb _public_6210ceb
#define public_6210d89 _public_6210d89

PROC_DECLARE(0x6210b70, internal_6210b70, public_6210b70);
extern "C" NAKED register_t __cdecl internal_6210b70()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6247d58 @0x6210b78*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6247d58
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebp
        push esi
        push edi
        xor ebx, ebx
        xor edi, edi
        cmp ecx, 8
        jne public_6210d89
        mov ecx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [ecx+8]
        public_6210ba9 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6210bcd
        cmp cl, bl
        je public_6210bc9
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6210bcd
        add eax, 2
        add esi, 2
        cmp cl, bl
        jne public_6210ba9
        public_6210bc9 : nop
        xor eax, eax
        jmp public_6210bd2
        public_6210bcd : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6210bd2 : nop
        cmp eax, ebx
        jne public_6210d89
        push 0x88
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x2C], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x24], ebx
        je public_6210c1f
        lea edi, ds:[esi+4]
        mov dword ptr ds : [esi], offset public_624ba48
        mov ecx, edi
        call public_620ef80
        mov dword ptr ds : [esi], offset public_624c298
        mov dword ptr ds : [edi], offset public_624c2f8
        mov dword ptr ds : [esi+0x84], 1
        mov ebp, esi
        jmp public_6210c21
        public_6210c1f : nop
        xor ebp, ebp
        public_6210c21 : nop
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        jne public_6210c4d
        mov eax, 0xFFFFFFFC
        public_6210c32 : nop
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [ecx], ebp
        public_6210c38 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 0xC
        public_6210c4d : nop
        mov eax, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [ebp+4]
        lea esi, ss:[ebp+4]
        push eax
        push esi
        call dword ptr ds : [edx]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_6210c32
        mov dword ptr ss : [esp+0x14], esi
        mov eax, dword ptr ds : [esi+0x7C]
        mov dword ptr ss : [esp+0x24], 5
        cmp eax, ebx
        je public_6210c7f
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x7C], ebx
        public_6210c7f : nop
        mov eax, dword ptr ds : [esi+0x78]
        mov byte ptr ss : [esp+0x24], 4
        cmp eax, ebx
        je public_6210c94
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x78], ebx
        public_6210c94 : nop
        mov eax, dword ptr ds : [esi+0x74]
        mov byte ptr ss : [esp+0x24], 3
        cmp eax, ebx
        je public_6210ca9
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x74], ebx
        public_6210ca9 : nop
        mov eax, dword ptr ds : [esi+0x70]
        mov byte ptr ss : [esp+0x24], 2
        cmp eax, ebx
        je public_6210cbe
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x70], ebx
        public_6210cbe : nop
        mov eax, dword ptr ds : [esi+0x6C]
        mov byte ptr ss : [esp+0x24], 1
        cmp eax, ebx
        je public_6210cd3
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x6C], ebx
        public_6210cd3 : nop
        mov eax, dword ptr ds : [esi+0x58]
        mov dword ptr ss : [esp+0x24], 7
        cmp eax, ebx
        je public_6210ceb
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x58], ebx
        public_6210ceb : nop
        mov eax, dword ptr ds : [esi+0x50]
        lea edi, ds:[esi+0x4C]
        push eax
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x28], 6
        call public_620b3f0
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x2C]
        mov eax, dword ptr ds : [eax]
        push eax
        call public_620b3f0
        lea edx, ss:[esp+0x18]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x2C]
        push eax
        push ecx
        push edx
        mov ecx, edi
        call public_620b3a0
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_62460e0
        add esp, 4
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov edi, offset public_624bd84
        lea ecx, ds:[esi+0x30]
        mov dword ptr ss : [esp+0x24], 9
        mov dword ptr ds : [esi+0x28], edi
        call public_620b350
        lea ecx, ds:[esi+0x24]
        mov byte ptr ss : [esp+0x24], 8
        call public_620d1d0
        lea ecx, ds:[esi+0xC]
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        mov dword ptr ds : [esi+4], edi
        call public_620b350
        push ebp
        call public_62460e0
        mov ecx, dword ptr ss : [esp+0x38]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+0x10]
        jmp public_6210c38
        public_6210d89 : nop
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], edi
        jmp public_6210c38
        UNREACHABLE_TRAP(0x6210b70)
    }
}

#undef public_6210ba9
#undef public_6210bc9
#undef public_6210bcd
#undef public_6210bd2
#undef public_6210c1f
#undef public_6210c21
#undef public_6210c32
#undef public_6210c38
#undef public_6210c4d
#undef public_6210c7f
#undef public_6210c94
#undef public_6210ca9
#undef public_6210cbe
#undef public_6210cd3
#undef public_6210ceb
#undef public_6210d89
