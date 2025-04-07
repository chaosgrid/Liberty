#include "FLMaterials-PCH.h"


#define public_66fc823 _public_66fc823
#define public_66fc825 _public_66fc825
#define public_66fc849 _public_66fc849
#define public_66fc84d _public_66fc84d
#define public_66fc852 _public_66fc852
#define public_66fc862 _public_66fc862
#define public_66fc878 _public_66fc878
#define public_66fc8a7 _public_66fc8a7

PROC_DECLARE(0x66fc810, internal_66fc810, public_66fc810);
extern "C" NAKED register_t __cdecl internal_66fc810()
{
    __asm
    {
        mov eax, dword ptr ds : [public_67029d8]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_66fc862
        mov ebp, dword ptr ss : [esp+0x18]
        public_66fc823 : nop
        mov esi, ebp
        public_66fc825 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_66fc84d
        test cl, cl
        je public_66fc849
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_66fc84d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_66fc825
        public_66fc849 : nop
        xor eax, eax
        jmp public_66fc852
        public_66fc84d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_66fc852 : nop
        test eax, eax
        je public_66fc878
        mov eax, dword ptr ds : [edi*8+public_67029e0]
        inc edi
        test eax, eax
        jne public_66fc823
        public_66fc862 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_66fc878 : nop
        mov eax, dword ptr ds : [edi*8+public_67029dc]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_66fc8a7
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
        public_66fc8a7 : nop
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
        UNREACHABLE_TRAP(0x66fc810)
    }
}

#undef public_66fc823
#undef public_66fc825
#undef public_66fc849
#undef public_66fc84d
#undef public_66fc852
#undef public_66fc862
#undef public_66fc878
#undef public_66fc8a7
