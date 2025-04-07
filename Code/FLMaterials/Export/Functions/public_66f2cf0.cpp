#include "FLMaterials-PCH.h"


#define public_66f2d01 _public_66f2d01
#define public_66f2d25 _public_66f2d25
#define public_66f2d3a _public_66f2d3a

PROC_DECLARE(0x66f2cf0, internal_66f2cf0, public_66f2cf0);
extern "C" NAKED register_t __cdecl internal_66f2cf0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+4]
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov esi, offset public_6701090
        public_66f2d01 : nop
        mov cl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov dl, cl
        cmp cl, bl
        jne public_66f2d3a
        test dl, dl
        je public_66f2d25
        mov cl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov dl, cl
        cmp cl, bl
        jne public_66f2d3a
        add eax, 2
        add esi, 2
        test dl, dl
        jne public_66f2d01
        public_66f2d25 : nop
        xor eax, eax
        test eax, eax
        sete al
        mov byte ptr ds : [edi+0x68], al
        mov byte ptr ds : [edi+0x69], al
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 4
        public_66f2d3a : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        test eax, eax
        sete al
        mov byte ptr ds : [edi+0x68], al
        mov byte ptr ds : [edi+0x69], al
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x66f2cf0)
    }
}

#undef public_66f2d01
#undef public_66f2d25
#undef public_66f2d3a
