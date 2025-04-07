#include "FLMaterials-PCH.h"


#define public_66fa073 _public_66fa073
#define public_66fa075 _public_66fa075
#define public_66fa099 _public_66fa099
#define public_66fa09d _public_66fa09d
#define public_66fa0a2 _public_66fa0a2
#define public_66fa0b2 _public_66fa0b2
#define public_66fa0c8 _public_66fa0c8
#define public_66fa0f7 _public_66fa0f7

PROC_DECLARE(0x66fa060, internal_66fa060, public_66fa060);
extern "C" NAKED register_t __cdecl internal_66fa060()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6702470]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_66fa0b2
        mov ebp, dword ptr ss : [esp+0x18]
        public_66fa073 : nop
        mov esi, ebp
        public_66fa075 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_66fa09d
        test cl, cl
        je public_66fa099
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_66fa09d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_66fa075
        public_66fa099 : nop
        xor eax, eax
        jmp public_66fa0a2
        public_66fa09d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_66fa0a2 : nop
        test eax, eax
        je public_66fa0c8
        mov eax, dword ptr ds : [edi*8+public_6702478]
        inc edi
        test eax, eax
        jne public_66fa073
        public_66fa0b2 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_66fa0c8 : nop
        mov eax, dword ptr ds : [edi*8+public_6702474]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_66fa0f7
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
        public_66fa0f7 : nop
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
        UNREACHABLE_TRAP(0x66fa060)
    }
}

#undef public_66fa073
#undef public_66fa075
#undef public_66fa099
#undef public_66fa09d
#undef public_66fa0a2
#undef public_66fa0b2
#undef public_66fa0c8
#undef public_66fa0f7
