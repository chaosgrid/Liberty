#include "Shading-PCH.h"


#define public_6ecba83 _public_6ecba83
#define public_6ecba85 _public_6ecba85
#define public_6ecbaa9 _public_6ecbaa9
#define public_6ecbaad _public_6ecbaad
#define public_6ecbab2 _public_6ecbab2
#define public_6ecbac2 _public_6ecbac2
#define public_6ecbad8 _public_6ecbad8
#define public_6ecbb07 _public_6ecbb07

PROC_DECLARE(0x6ecba70, internal_6ecba70, public_6ecba70);
extern "C" NAKED register_t __cdecl internal_6ecba70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6ed2e34]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6ecbac2
        mov ebp, dword ptr ss : [esp+0x18]
        public_6ecba83 : nop
        mov esi, ebp
        public_6ecba85 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6ecbaad
        test cl, cl
        je public_6ecbaa9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6ecbaad
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6ecba85
        public_6ecbaa9 : nop
        xor eax, eax
        jmp public_6ecbab2
        public_6ecbaad : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ecbab2 : nop
        test eax, eax
        je public_6ecbad8
        mov eax, dword ptr ds : [edi*8+public_6ed2e3c]
        inc edi
        test eax, eax
        jne public_6ecba83
        public_6ecbac2 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6ecbad8 : nop
        mov eax, dword ptr ds : [edi*8+public_6ed2e38]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_6ecbb07
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
        public_6ecbb07 : nop
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
        UNREACHABLE_TRAP(0x6ecba70)
    }
}

#undef public_6ecba83
#undef public_6ecba85
#undef public_6ecbaa9
#undef public_6ecbaad
#undef public_6ecbab2
#undef public_6ecbac2
#undef public_6ecbad8
#undef public_6ecbb07
