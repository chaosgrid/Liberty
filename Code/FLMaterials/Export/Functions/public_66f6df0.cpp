#include "FLMaterials-PCH.h"


#define public_66f6e03 _public_66f6e03
#define public_66f6e05 _public_66f6e05
#define public_66f6e29 _public_66f6e29
#define public_66f6e2d _public_66f6e2d
#define public_66f6e32 _public_66f6e32
#define public_66f6e42 _public_66f6e42
#define public_66f6e58 _public_66f6e58
#define public_66f6e87 _public_66f6e87

PROC_DECLARE(0x66f6df0, internal_66f6df0, public_66f6df0);
extern "C" NAKED register_t __cdecl internal_66f6df0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6701c68]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_66f6e42
        mov ebp, dword ptr ss : [esp+0x18]
        public_66f6e03 : nop
        mov esi, ebp
        public_66f6e05 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_66f6e2d
        test cl, cl
        je public_66f6e29
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_66f6e2d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_66f6e05
        public_66f6e29 : nop
        xor eax, eax
        jmp public_66f6e32
        public_66f6e2d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_66f6e32 : nop
        test eax, eax
        je public_66f6e58
        mov eax, dword ptr ds : [edi*8+public_6701c70]
        inc edi
        test eax, eax
        jne public_66f6e03
        public_66f6e42 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_66f6e58 : nop
        mov eax, dword ptr ds : [edi*8+public_6701c6c]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_66f6e87
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
        public_66f6e87 : nop
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
        UNREACHABLE_TRAP(0x66f6df0)
    }
}

#undef public_66f6e03
#undef public_66f6e05
#undef public_66f6e29
#undef public_66f6e2d
#undef public_66f6e32
#undef public_66f6e42
#undef public_66f6e58
#undef public_66f6e87
