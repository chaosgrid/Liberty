#include "FLMaterials-PCH.h"


#define public_66f81d3 _public_66f81d3
#define public_66f81d5 _public_66f81d5
#define public_66f81f9 _public_66f81f9
#define public_66f81fd _public_66f81fd
#define public_66f8202 _public_66f8202
#define public_66f8212 _public_66f8212
#define public_66f8228 _public_66f8228
#define public_66f8257 _public_66f8257

PROC_DECLARE(0x66f81c0, internal_66f81c0, public_66f81c0);
extern "C" NAKED register_t __cdecl internal_66f81c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6702038]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_66f8212
        mov ebp, dword ptr ss : [esp+0x18]
        public_66f81d3 : nop
        mov esi, ebp
        public_66f81d5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_66f81fd
        test cl, cl
        je public_66f81f9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_66f81fd
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_66f81d5
        public_66f81f9 : nop
        xor eax, eax
        jmp public_66f8202
        public_66f81fd : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_66f8202 : nop
        test eax, eax
        je public_66f8228
        mov eax, dword ptr ds : [edi*8+public_6702040]
        inc edi
        test eax, eax
        jne public_66f81d3
        public_66f8212 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_66f8228 : nop
        mov eax, dword ptr ds : [edi*8+public_670203c]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_66f8257
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
        public_66f8257 : nop
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
        UNREACHABLE_TRAP(0x66f81c0)
    }
}

#undef public_66f81d3
#undef public_66f81d5
#undef public_66f81f9
#undef public_66f81fd
#undef public_66f8202
#undef public_66f8212
#undef public_66f8228
#undef public_66f8257
