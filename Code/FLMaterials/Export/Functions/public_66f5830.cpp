#include "FLMaterials-PCH.h"


#define public_66f5843 _public_66f5843
#define public_66f5845 _public_66f5845
#define public_66f5869 _public_66f5869
#define public_66f586d _public_66f586d
#define public_66f5872 _public_66f5872
#define public_66f5882 _public_66f5882
#define public_66f5898 _public_66f5898
#define public_66f58c7 _public_66f58c7

PROC_DECLARE(0x66f5830, internal_66f5830, public_66f5830);
extern "C" NAKED register_t __cdecl internal_66f5830()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6701980]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_66f5882
        mov ebp, dword ptr ss : [esp+0x18]
        public_66f5843 : nop
        mov esi, ebp
        public_66f5845 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_66f586d
        test cl, cl
        je public_66f5869
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_66f586d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_66f5845
        public_66f5869 : nop
        xor eax, eax
        jmp public_66f5872
        public_66f586d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_66f5872 : nop
        test eax, eax
        je public_66f5898
        mov eax, dword ptr ds : [edi*8+public_6701988]
        inc edi
        test eax, eax
        jne public_66f5843
        public_66f5882 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_66f5898 : nop
        mov eax, dword ptr ds : [edi*8+public_6701984]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_66f58c7
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
        public_66f58c7 : nop
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
        UNREACHABLE_TRAP(0x66f5830)
    }
}

#undef public_66f5843
#undef public_66f5845
#undef public_66f5869
#undef public_66f586d
#undef public_66f5872
#undef public_66f5882
#undef public_66f5898
#undef public_66f58c7
