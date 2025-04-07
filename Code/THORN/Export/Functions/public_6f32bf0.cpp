#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2fe70);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6f5895b);

#define public_6f32c24 _public_6f32c24
#define public_6f32c48 _public_6f32c48
#define public_6f32c4c _public_6f32c4c
#define public_6f32c51 _public_6f32c51
#define public_6f32c87 _public_6f32c87
#define public_6f32c89 _public_6f32c89
#define public_6f32ca2 _public_6f32ca2
#define public_6f32cc3 _public_6f32cc3
#define public_6f32cd0 _public_6f32cd0
#define public_6f32cd6 _public_6f32cd6
#define public_6f32cd8 _public_6f32cd8

PROC_DECLARE(0x6f32bf0, internal_6f32bf0, public_6f32bf0);
extern "C" NAKED register_t __cdecl internal_6f32bf0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6f5895b @0x6f32bf8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f5895b
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
        jne public_6f32cc3
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [edi+4]
        public_6f32c24 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6f32c4c
        test cl, cl
        je public_6f32c48
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6f32c4c
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6f32c24
        public_6f32c48 : nop
        xor eax, eax
        jmp public_6f32c51
        public_6f32c4c : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f32c51 : nop
        test eax, eax
        jne public_6f32cc3
        push 0x40
        call public_6f57e9c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x24], esi
        test esi, esi
        mov dword ptr ss : [esp+0x18], 0
        je public_6f32c87
        mov ecx, esi
        call public_6f2fe70
        mov dword ptr ds : [esi], offset public_6f5a8a8
        mov dword ptr ds : [esi+0x3C], 1
        jmp public_6f32c89
        public_6f32c87 : nop
        xor esi, esi
        public_6f32c89 : nop
        test esi, esi
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        jne public_6f32ca2
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [ecx], esi
        jmp public_6f32cd8
        public_6f32ca2 : nop
        mov edx, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [edx+0x3C]
        mov edi, eax
        test edi, edi
        je public_6f32cd0
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax+0x38]
        mov ecx, dword ptr ss : [esp+0x28]
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        jmp public_6f32cd6
        public_6f32cc3 : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], ebp
        jmp public_6f32cd8
        public_6f32cd0 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax], esi
        public_6f32cd6 : nop
        mov eax, edi
        public_6f32cd8 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6f32bf0)
    }
}

#undef public_6f32c24
#undef public_6f32c48
#undef public_6f32c4c
#undef public_6f32c51
#undef public_6f32c87
#undef public_6f32c89
#undef public_6f32ca2
#undef public_6f32cc3
#undef public_6f32cd0
#undef public_6f32cd6
#undef public_6f32cd8
