#include "FLMaterials-PCH.h"


#define public_66f50e3 _public_66f50e3
#define public_66f50e5 _public_66f50e5
#define public_66f5109 _public_66f5109
#define public_66f510d _public_66f510d
#define public_66f5112 _public_66f5112
#define public_66f5122 _public_66f5122
#define public_66f5138 _public_66f5138
#define public_66f5167 _public_66f5167

PROC_DECLARE(0x66f50d0, internal_66f50d0, public_66f50d0);
extern "C" NAKED register_t __cdecl internal_66f50d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_67017b0]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_66f5122
        mov ebp, dword ptr ss : [esp+0x18]
        public_66f50e3 : nop
        mov esi, ebp
        public_66f50e5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_66f510d
        test cl, cl
        je public_66f5109
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_66f510d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_66f50e5
        public_66f5109 : nop
        xor eax, eax
        jmp public_66f5112
        public_66f510d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_66f5112 : nop
        test eax, eax
        je public_66f5138
        mov eax, dword ptr ds : [edi*8+public_67017b8]
        inc edi
        test eax, eax
        jne public_66f50e3
        public_66f5122 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_66f5138 : nop
        mov eax, dword ptr ds : [edi*8+public_67017b4]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_66f5167
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
        public_66f5167 : nop
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
        UNREACHABLE_TRAP(0x66f50d0)
    }
}

#undef public_66f50e3
#undef public_66f50e5
#undef public_66f5109
#undef public_66f510d
#undef public_66f5112
#undef public_66f5122
#undef public_66f5138
#undef public_66f5167
