#include "FLMaterials-PCH.h"


#define public_66f3233 _public_66f3233
#define public_66f3235 _public_66f3235
#define public_66f3259 _public_66f3259
#define public_66f325d _public_66f325d
#define public_66f3262 _public_66f3262
#define public_66f3272 _public_66f3272
#define public_66f3288 _public_66f3288
#define public_66f32b7 _public_66f32b7

PROC_DECLARE(0x66f3220, internal_66f3220, public_66f3220);
extern "C" NAKED register_t __cdecl internal_66f3220()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6701418]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_66f3272
        mov ebp, dword ptr ss : [esp+0x18]
        public_66f3233 : nop
        mov esi, ebp
        public_66f3235 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_66f325d
        test cl, cl
        je public_66f3259
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_66f325d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_66f3235
        public_66f3259 : nop
        xor eax, eax
        jmp public_66f3262
        public_66f325d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_66f3262 : nop
        test eax, eax
        je public_66f3288
        mov eax, dword ptr ds : [edi*8+public_6701420]
        inc edi
        test eax, eax
        jne public_66f3233
        public_66f3272 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_66f3288 : nop
        mov eax, dword ptr ds : [edi*8+public_670141c]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_66f32b7
        mov edx, dword ptr ds : [ecx+8]
        and eax, 0x7FFFFFFF
        mov esi, dword ptr ds : [eax+edx]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_66f32b7 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [esi+eax]
        add esi, eax
        push esi
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x66f3220)
    }
}

#undef public_66f3233
#undef public_66f3235
#undef public_66f3259
#undef public_66f325d
#undef public_66f3262
#undef public_66f3272
#undef public_66f3288
#undef public_66f32b7
