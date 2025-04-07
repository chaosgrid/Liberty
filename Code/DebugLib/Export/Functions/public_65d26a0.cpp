#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d1000);
CLANG_FORWARD_PROC_SYMBOL(public_65d6f71);
CLANG_FORWARD_JUMP_SYMBOL(public_65dff1b);

#define public_65d26d3 _public_65d26d3
#define public_65d26f7 _public_65d26f7
#define public_65d26fb _public_65d26fb
#define public_65d2700 _public_65d2700
#define public_65d273d _public_65d273d
#define public_65d273f _public_65d273f
#define public_65d2765 _public_65d2765

PROC_DECLARE(0x65d26a0, internal_65d26a0, public_65d26a0);
extern "C" NAKED register_t __cdecl internal_65d26a0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_65dff1b @0x65d26a8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_65dff1b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], esp
        push ebx
        push esi
        mov ecx, dword ptr ds : [eax]
        push edi
        xor edi, edi
        cmp ecx, 8
        jne public_65d2765
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [ecx+8]
        public_65d26d3 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_65d26fb
        test cl, cl
        je public_65d26f7
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_65d26fb
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_65d26d3
        public_65d26f7 : nop
        xor eax, eax
        jmp public_65d2700
        public_65d26fb : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_65d2700 : nop
        test eax, eax
        jne public_65d2765
        push 0x34
        call public_65d6f71
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x20], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_65d273d
        mov ecx, esi
        call public_65d1000
        mov dword ptr ds : [esi], offset public_65e1264
        mov dword ptr ds : [esi+4], offset public_65e1248
        mov dword ptr ds : [esi+0x30], 1
        jmp public_65d273f
        public_65d273d : nop
        xor esi, esi
        public_65d273f : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, esi
        neg eax
        sbb eax, eax
        mov dword ptr ds : [ecx], esi
        and eax, 4
        add eax, 0xFFFFFFFC
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 0xC
        public_65d2765 : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], edi
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x65d26a0)
    }
}

#undef public_65d26d3
#undef public_65d26f7
#undef public_65d26fb
#undef public_65d2700
#undef public_65d273d
#undef public_65d273f
#undef public_65d2765
