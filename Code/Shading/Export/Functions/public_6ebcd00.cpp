#include "Shading-PCH.h"


#define public_6ebcd13 _public_6ebcd13
#define public_6ebcd15 _public_6ebcd15
#define public_6ebcd39 _public_6ebcd39
#define public_6ebcd3d _public_6ebcd3d
#define public_6ebcd42 _public_6ebcd42
#define public_6ebcd52 _public_6ebcd52
#define public_6ebcd68 _public_6ebcd68
#define public_6ebcd97 _public_6ebcd97

PROC_DECLARE(0x6ebcd00, internal_6ebcd00, public_6ebcd00);
extern "C" NAKED register_t __cdecl internal_6ebcd00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6ed25a0]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6ebcd52
        mov ebp, dword ptr ss : [esp+0x18]
        public_6ebcd13 : nop
        mov esi, ebp
        public_6ebcd15 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6ebcd3d
        test cl, cl
        je public_6ebcd39
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6ebcd3d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6ebcd15
        public_6ebcd39 : nop
        xor eax, eax
        jmp public_6ebcd42
        public_6ebcd3d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ebcd42 : nop
        test eax, eax
        je public_6ebcd68
        mov eax, dword ptr ds : [edi*8+public_6ed25a8]
        inc edi
        test eax, eax
        jne public_6ebcd13
        public_6ebcd52 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6ebcd68 : nop
        mov eax, dword ptr ds : [edi*8+public_6ed25a4]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_6ebcd97
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
        public_6ebcd97 : nop
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
        UNREACHABLE_TRAP(0x6ebcd00)
    }
}

#undef public_6ebcd13
#undef public_6ebcd15
#undef public_6ebcd39
#undef public_6ebcd3d
#undef public_6ebcd42
#undef public_6ebcd52
#undef public_6ebcd68
#undef public_6ebcd97
