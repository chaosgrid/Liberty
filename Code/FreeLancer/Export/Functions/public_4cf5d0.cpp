#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4cf5d0);
CLANG_FORWARD_PROC_SYMBOL(public_4d4930);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bdcf8);

#define public_4cf610 _public_4cf610
#define public_4cf625 _public_4cf625
#define public_4cf64a _public_4cf64a
#define public_4cf64c _public_4cf64c
#define public_4cf65e _public_4cf65e
#define public_4cf660 _public_4cf660
#define public_4cf682 _public_4cf682

PROC_DECLARE(0x4cf5d0, internal_4cf5d0, public_4cf5d0);
extern "C" NAKED register_t __cdecl internal_4cf5d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bdcf8 @0x4cf5d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bdcf8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x18], ebp
        mov ebx, dword ptr ss : [ebp+0x414]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        lea edi, ss:[ebp+0x410]
        mov dword ptr ss : [esp+0x28], 2
        je public_4cf625
        lea esp, ss:[esp]
        public_4cf610 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, edi
        call public_4d4930
        cmp esi, ebx
        jne public_4cf610
        public_4cf625 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        xor ebx, ebx
        add esp, 4
        cmp ebp, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov byte ptr ss : [esp+0x28], 1
        je public_4cf64a
        lea ecx, ss:[ebp+0x364]
        jmp public_4cf64c
        public_4cf64a : nop
        xor ecx, ecx
        public_4cf64c : nop
        call public_576010
        cmp ebp, ebx
        mov byte ptr ss : [esp+0x28], bl
        je public_4cf65e
        lea ecx, ss:[ebp+0x38]
        jmp public_4cf660
        public_4cf65e : nop
        xor ecx, ecx
        public_4cf660 : nop
        call public_59fa50
        lea ecx, ss:[ebp+0x28]
        mov dword ptr ss : [ebp], offset public_5d6eac
        cmp dword ptr ds : [ecx], ebx
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        je public_4cf682
        push ebx
        call dword ptr ds : [public_5c62a8]
        public_4cf682 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x4cf5d0)
    }
}

#undef public_4cf610
#undef public_4cf625
#undef public_4cf64a
#undef public_4cf64c
#undef public_4cf65e
#undef public_4cf660
#undef public_4cf682
