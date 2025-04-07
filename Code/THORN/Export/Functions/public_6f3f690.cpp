#include "THORN-PCH.h"


#define public_6f3f6a3 _public_6f3f6a3
#define public_6f3f6a5 _public_6f3f6a5
#define public_6f3f6c9 _public_6f3f6c9
#define public_6f3f6cd _public_6f3f6cd
#define public_6f3f6d2 _public_6f3f6d2
#define public_6f3f6e2 _public_6f3f6e2
#define public_6f3f6f8 _public_6f3f6f8
#define public_6f3f727 _public_6f3f727

PROC_DECLARE(0x6f3f690, internal_6f3f690, public_6f3f690);
extern "C" NAKED register_t __cdecl internal_6f3f690()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f5b010]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6f3f6e2
        mov ebp, dword ptr ss : [esp+0x18]
        public_6f3f6a3 : nop
        mov esi, ebp
        public_6f3f6a5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6f3f6cd
        test cl, cl
        je public_6f3f6c9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6f3f6cd
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6f3f6a5
        public_6f3f6c9 : nop
        xor eax, eax
        jmp public_6f3f6d2
        public_6f3f6cd : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f3f6d2 : nop
        test eax, eax
        je public_6f3f6f8
        mov eax, dword ptr ds : [edi*8+public_6f5b018]
        inc edi
        test eax, eax
        jne public_6f3f6a3
        public_6f3f6e2 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6f3f6f8 : nop
        mov eax, dword ptr ds : [edi*8+public_6f5b014]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_6f3f727
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
        public_6f3f727 : nop
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
        UNREACHABLE_TRAP(0x6f3f690)
    }
}

#undef public_6f3f6a3
#undef public_6f3f6a5
#undef public_6f3f6c9
#undef public_6f3f6cd
#undef public_6f3f6d2
#undef public_6f3f6e2
#undef public_6f3f6f8
#undef public_6f3f727
