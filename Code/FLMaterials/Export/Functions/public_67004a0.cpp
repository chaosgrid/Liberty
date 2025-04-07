#include "FLMaterials-PCH.h"


#define public_67004b3 _public_67004b3
#define public_67004b5 _public_67004b5
#define public_67004d9 _public_67004d9
#define public_67004dd _public_67004dd
#define public_67004e2 _public_67004e2
#define public_67004f2 _public_67004f2
#define public_6700508 _public_6700508
#define public_6700537 _public_6700537

PROC_DECLARE(0x67004a0, internal_67004a0, public_67004a0);
extern "C" NAKED register_t __cdecl internal_67004a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_67031d8]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_67004f2
        mov ebp, dword ptr ss : [esp+0x18]
        public_67004b3 : nop
        mov esi, ebp
        public_67004b5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_67004dd
        test cl, cl
        je public_67004d9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_67004dd
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_67004b5
        public_67004d9 : nop
        xor eax, eax
        jmp public_67004e2
        public_67004dd : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_67004e2 : nop
        test eax, eax
        je public_6700508
        mov eax, dword ptr ds : [edi*8+public_67031e0]
        inc edi
        test eax, eax
        jne public_67004b3
        public_67004f2 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6700508 : nop
        mov eax, dword ptr ds : [edi*8+public_67031dc]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_6700537
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
        public_6700537 : nop
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
        UNREACHABLE_TRAP(0x67004a0)
    }
}

#undef public_67004b3
#undef public_67004b5
#undef public_67004d9
#undef public_67004dd
#undef public_67004e2
#undef public_67004f2
#undef public_6700508
#undef public_6700537
