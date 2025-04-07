#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d1900);
CLANG_FORWARD_PROC_SYMBOL(public_65d6f71);

#define public_65d27a8 _public_65d27a8
#define public_65d27cc _public_65d27cc
#define public_65d27d0 _public_65d27d0
#define public_65d27d5 _public_65d27d5
#define public_65d27ff _public_65d27ff
#define public_65d2801 _public_65d2801
#define public_65d2817 _public_65d2817

PROC_DECLARE(0x65d2790, internal_65d2790, public_65d2790);
extern "C" NAKED register_t __cdecl internal_65d2790()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push edi
        xor edi, edi
        cmp dword ptr ds : [eax], 8
        jne public_65d2817
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax+4]
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx+8]
        public_65d27a8 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_65d27d0
        test cl, cl
        je public_65d27cc
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_65d27d0
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_65d27a8
        public_65d27cc : nop
        xor eax, eax
        jmp public_65d27d5
        public_65d27d0 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_65d27d5 : nop
        pop esi
        pop ebx
        test eax, eax
        jne public_65d2817
        push 0xC
        call public_65d6f71
        mov ecx, eax
        add esp, 4
        test ecx, ecx
        je public_65d27ff
        call public_65d1900
        mov dword ptr ds : [ecx], offset public_65e128c
        mov dword ptr ds : [ecx+8], 1
        jmp public_65d2801
        public_65d27ff : nop
        xor ecx, ecx
        public_65d2801 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, ecx
        neg eax
        sbb eax, eax
        mov dword ptr ds : [edx], ecx
        and eax, 4
        pop edi
        add eax, 0xFFFFFFFC
        ret 0xC
        public_65d2817 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [ecx], edi
        pop edi
        ret 0xC
        UNREACHABLE_TRAP(0x65d2790)
    }
}

#undef public_65d27a8
#undef public_65d27cc
#undef public_65d27d0
#undef public_65d27d5
#undef public_65d27ff
#undef public_65d2801
#undef public_65d2817
