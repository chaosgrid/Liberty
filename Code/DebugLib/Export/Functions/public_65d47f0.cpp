#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6f71);

#define public_65d480b _public_65d480b
#define public_65d482b _public_65d482b
#define public_65d482f _public_65d482f
#define public_65d4834 _public_65d4834
#define public_65d4874 _public_65d4874
#define public_65d4876 _public_65d4876
#define public_65d488c _public_65d488c

PROC_DECLARE(0x65d47f0, internal_65d47f0, public_65d47f0);
extern "C" NAKED register_t __cdecl internal_65d47f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push edi
        xor edi, edi
        cmp dword ptr ds : [eax], 8
        jne public_65d488c
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax+4]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        public_65d480b : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_65d482f
        test cl, cl
        je public_65d482b
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_65d482f
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_65d480b
        public_65d482b : nop
        xor eax, eax
        jmp public_65d4834
        public_65d482f : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_65d4834 : nop
        test eax, eax
        pop esi
        jne public_65d488c
        push 0x18
        call public_65d6f71
        add esp, 4
        test eax, eax
        je public_65d4874
        mov cl, byte ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+8], 0
        mov byte ptr ds : [eax+4], cl
        mov dword ptr ds : [eax+0xC], 0
        mov dword ptr ds : [eax+0x10], 0
        mov dword ptr ds : [eax], offset public_65e13a8
        mov dword ptr ds : [eax+0x14], 1
        mov ecx, eax
        jmp public_65d4876
        public_65d4874 : nop
        xor ecx, ecx
        public_65d4876 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, ecx
        neg eax
        sbb eax, eax
        mov dword ptr ds : [edx], ecx
        and eax, 4
        pop edi
        add eax, 0xFFFFFFFC
        ret 0xC
        public_65d488c : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [ecx], edi
        pop edi
        ret 0xC
        UNREACHABLE_TRAP(0x65d47f0)
    }
}

#undef public_65d480b
#undef public_65d482b
#undef public_65d482f
#undef public_65d4834
#undef public_65d4874
#undef public_65d4876
#undef public_65d488c
