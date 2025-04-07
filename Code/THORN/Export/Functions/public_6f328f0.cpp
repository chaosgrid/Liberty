#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2fd30);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6f5891b);

#define public_6f32924 _public_6f32924
#define public_6f32948 _public_6f32948
#define public_6f3294c _public_6f3294c
#define public_6f32951 _public_6f32951
#define public_6f32987 _public_6f32987
#define public_6f32989 _public_6f32989
#define public_6f329a2 _public_6f329a2
#define public_6f329c3 _public_6f329c3
#define public_6f329d0 _public_6f329d0
#define public_6f329d6 _public_6f329d6
#define public_6f329d8 _public_6f329d8

PROC_DECLARE(0x6f328f0, internal_6f328f0, public_6f328f0);
extern "C" NAKED register_t __cdecl internal_6f328f0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6f5891b @0x6f328f8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f5891b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp eax, 0x14
        jne public_6f329c3
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [edi+4]
        public_6f32924 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6f3294c
        test cl, cl
        je public_6f32948
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6f3294c
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6f32924
        public_6f32948 : nop
        xor eax, eax
        jmp public_6f32951
        public_6f3294c : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f32951 : nop
        test eax, eax
        jne public_6f329c3
        push 0x40
        call public_6f57e9c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x24], esi
        test esi, esi
        mov dword ptr ss : [esp+0x18], 0
        je public_6f32987
        mov ecx, esi
        call public_6f2fd30
        mov dword ptr ds : [esi], offset public_6f5a818
        mov dword ptr ds : [esi+0x3C], 1
        jmp public_6f32989
        public_6f32987 : nop
        xor esi, esi
        public_6f32989 : nop
        test esi, esi
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        jne public_6f329a2
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [ecx], esi
        jmp public_6f329d8
        public_6f329a2 : nop
        mov edx, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [edx+0x3C]
        mov edi, eax
        test edi, edi
        je public_6f329d0
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax+0x38]
        mov ecx, dword ptr ss : [esp+0x28]
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        jmp public_6f329d6
        public_6f329c3 : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], ebp
        jmp public_6f329d8
        public_6f329d0 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax], esi
        public_6f329d6 : nop
        mov eax, edi
        public_6f329d8 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6f328f0)
    }
}

#undef public_6f32924
#undef public_6f32948
#undef public_6f3294c
#undef public_6f32951
#undef public_6f32987
#undef public_6f32989
#undef public_6f329a2
#undef public_6f329c3
#undef public_6f329d0
#undef public_6f329d6
#undef public_6f329d8
