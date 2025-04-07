#include "Shading-PCH.h"


#define public_6eb7a63 _public_6eb7a63
#define public_6eb7a65 _public_6eb7a65
#define public_6eb7a89 _public_6eb7a89
#define public_6eb7a8d _public_6eb7a8d
#define public_6eb7a92 _public_6eb7a92
#define public_6eb7aa2 _public_6eb7aa2
#define public_6eb7ab8 _public_6eb7ab8
#define public_6eb7ae7 _public_6eb7ae7

PROC_DECLARE(0x6eb7a50, internal_6eb7a50, public_6eb7a50);
extern "C" NAKED register_t __cdecl internal_6eb7a50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6ed1a48]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6eb7aa2
        mov ebp, dword ptr ss : [esp+0x18]
        public_6eb7a63 : nop
        mov esi, ebp
        public_6eb7a65 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6eb7a8d
        test cl, cl
        je public_6eb7a89
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6eb7a8d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6eb7a65
        public_6eb7a89 : nop
        xor eax, eax
        jmp public_6eb7a92
        public_6eb7a8d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6eb7a92 : nop
        test eax, eax
        je public_6eb7ab8
        mov eax, dword ptr ds : [edi*8+public_6ed1a50]
        inc edi
        test eax, eax
        jne public_6eb7a63
        public_6eb7aa2 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6eb7ab8 : nop
        mov eax, dword ptr ds : [edi*8+public_6ed1a4c]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_6eb7ae7
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
        public_6eb7ae7 : nop
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
        UNREACHABLE_TRAP(0x6eb7a50)
    }
}

#undef public_6eb7a63
#undef public_6eb7a65
#undef public_6eb7a89
#undef public_6eb7a8d
#undef public_6eb7a92
#undef public_6eb7aa2
#undef public_6eb7ab8
#undef public_6eb7ae7
