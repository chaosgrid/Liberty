#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6f71);

#define public_65d6658 _public_65d6658
#define public_65d667c _public_65d667c
#define public_65d6680 _public_65d6680
#define public_65d6685 _public_65d6685
#define public_65d66aa _public_65d66aa
#define public_65d66ac _public_65d66ac
#define public_65d66c2 _public_65d66c2

PROC_DECLARE(0x65d6640, internal_65d6640, public_65d6640);
extern "C" NAKED register_t __cdecl internal_65d6640()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push edi
        xor edi, edi
        cmp dword ptr ds : [eax], 8
        jne public_65d66c2
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax+4]
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx+8]
        public_65d6658 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_65d6680
        test cl, cl
        je public_65d667c
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_65d6680
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_65d6658
        public_65d667c : nop
        xor eax, eax
        jmp public_65d6685
        public_65d6680 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_65d6685 : nop
        pop esi
        pop ebx
        test eax, eax
        jne public_65d66c2
        push 8
        call public_65d6f71
        add esp, 4
        test eax, eax
        je public_65d66aa
        mov dword ptr ds : [eax], offset public_65e1500
        mov dword ptr ds : [eax+4], 1
        mov ecx, eax
        jmp public_65d66ac
        public_65d66aa : nop
        xor ecx, ecx
        public_65d66ac : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, ecx
        neg eax
        sbb eax, eax
        mov dword ptr ds : [edx], ecx
        and eax, 4
        pop edi
        add eax, 0xFFFFFFFC
        ret 0xC
        public_65d66c2 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [ecx], edi
        pop edi
        ret 0xC
        UNREACHABLE_TRAP(0x65d6640)
    }
}

#undef public_65d6658
#undef public_65d667c
#undef public_65d6680
#undef public_65d6685
#undef public_65d66aa
#undef public_65d66ac
#undef public_65d66c2
