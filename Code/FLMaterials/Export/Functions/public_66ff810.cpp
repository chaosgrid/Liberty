#include "FLMaterials-PCH.h"


#define public_66ff823 _public_66ff823
#define public_66ff825 _public_66ff825
#define public_66ff849 _public_66ff849
#define public_66ff84d _public_66ff84d
#define public_66ff852 _public_66ff852
#define public_66ff862 _public_66ff862
#define public_66ff878 _public_66ff878
#define public_66ff8a7 _public_66ff8a7

PROC_DECLARE(0x66ff810, internal_66ff810, public_66ff810);
extern "C" NAKED register_t __cdecl internal_66ff810()
{
    __asm
    {
        mov eax, dword ptr ds : [public_670302c]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_66ff862
        mov ebp, dword ptr ss : [esp+0x18]
        public_66ff823 : nop
        mov esi, ebp
        public_66ff825 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_66ff84d
        test cl, cl
        je public_66ff849
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_66ff84d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_66ff825
        public_66ff849 : nop
        xor eax, eax
        jmp public_66ff852
        public_66ff84d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_66ff852 : nop
        test eax, eax
        je public_66ff878
        mov eax, dword ptr ds : [edi*8+public_6703034]
        inc edi
        test eax, eax
        jne public_66ff823
        public_66ff862 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_66ff878 : nop
        mov eax, dword ptr ds : [edi*8+public_6703030]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_66ff8a7
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
        public_66ff8a7 : nop
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
        UNREACHABLE_TRAP(0x66ff810)
    }
}

#undef public_66ff823
#undef public_66ff825
#undef public_66ff849
#undef public_66ff84d
#undef public_66ff852
#undef public_66ff862
#undef public_66ff878
#undef public_66ff8a7
