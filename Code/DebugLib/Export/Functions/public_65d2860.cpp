#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6f71);

#define public_65d2877 _public_65d2877
#define public_65d2897 _public_65d2897
#define public_65d289b _public_65d289b
#define public_65d28a0 _public_65d28a0
#define public_65d28d2 _public_65d28d2
#define public_65d28d4 _public_65d28d4
#define public_65d28ea _public_65d28ea

PROC_DECLARE(0x65d2860, internal_65d2860, public_65d2860);
extern "C" NAKED register_t __cdecl internal_65d2860()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push edi
        xor edi, edi
        cmp dword ptr ds : [eax], 8
        jne public_65d28ea
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax+4]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        public_65d2877 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_65d289b
        test cl, cl
        je public_65d2897
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_65d289b
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_65d2877
        public_65d2897 : nop
        xor eax, eax
        jmp public_65d28a0
        public_65d289b : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_65d28a0 : nop
        test eax, eax
        pop esi
        jne public_65d28ea
        push 0x10
        call public_65d6f71
        add esp, 4
        test eax, eax
        je public_65d28d2
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [eax+8], 0
        mov dword ptr ds : [eax], offset public_65e12b0
        mov dword ptr ds : [eax+0xC], 1
        mov ecx, eax
        jmp public_65d28d4
        public_65d28d2 : nop
        xor ecx, ecx
        public_65d28d4 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, ecx
        neg eax
        sbb eax, eax
        mov dword ptr ds : [edx], ecx
        and eax, 4
        pop edi
        add eax, 0xFFFFFFFC
        ret 0xC
        public_65d28ea : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [ecx], edi
        pop edi
        ret 0xC
        UNREACHABLE_TRAP(0x65d2860)
    }
}

#undef public_65d2877
#undef public_65d2897
#undef public_65d289b
#undef public_65d28a0
#undef public_65d28d2
#undef public_65d28d4
#undef public_65d28ea
