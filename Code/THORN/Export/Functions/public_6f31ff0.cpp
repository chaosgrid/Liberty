#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2edf0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6f5885b);

#define public_6f32024 _public_6f32024
#define public_6f32048 _public_6f32048
#define public_6f3204c _public_6f3204c
#define public_6f32051 _public_6f32051
#define public_6f32087 _public_6f32087
#define public_6f32089 _public_6f32089
#define public_6f320a2 _public_6f320a2
#define public_6f320c3 _public_6f320c3
#define public_6f320d0 _public_6f320d0
#define public_6f320d6 _public_6f320d6
#define public_6f320d8 _public_6f320d8

PROC_DECLARE(0x6f31ff0, internal_6f31ff0, public_6f31ff0);
extern "C" NAKED register_t __cdecl internal_6f31ff0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6f5885b @0x6f31ff8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f5885b
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
        jne public_6f320c3
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [edi+4]
        public_6f32024 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6f3204c
        test cl, cl
        je public_6f32048
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6f3204c
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6f32024
        public_6f32048 : nop
        xor eax, eax
        jmp public_6f32051
        public_6f3204c : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f32051 : nop
        test eax, eax
        jne public_6f320c3
        push 0x2C
        call public_6f57e9c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x24], esi
        test esi, esi
        mov dword ptr ss : [esp+0x18], 0
        je public_6f32087
        mov ecx, esi
        call public_6f2edf0
        mov dword ptr ds : [esi], offset public_6f5a668
        mov dword ptr ds : [esi+0x28], 1
        jmp public_6f32089
        public_6f32087 : nop
        xor esi, esi
        public_6f32089 : nop
        test esi, esi
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        jne public_6f320a2
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [ecx], esi
        jmp public_6f320d8
        public_6f320a2 : nop
        mov edx, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [edx+0x3C]
        mov edi, eax
        test edi, edi
        je public_6f320d0
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax+0x38]
        mov ecx, dword ptr ss : [esp+0x28]
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        jmp public_6f320d6
        public_6f320c3 : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], ebp
        jmp public_6f320d8
        public_6f320d0 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax], esi
        public_6f320d6 : nop
        mov eax, edi
        public_6f320d8 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6f31ff0)
    }
}

#undef public_6f32024
#undef public_6f32048
#undef public_6f3204c
#undef public_6f32051
#undef public_6f32087
#undef public_6f32089
#undef public_6f320a2
#undef public_6f320c3
#undef public_6f320d0
#undef public_6f320d6
#undef public_6f320d8
