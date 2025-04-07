#include "Shading-PCH.h"


#define public_6ebc0a3 _public_6ebc0a3
#define public_6ebc0a5 _public_6ebc0a5
#define public_6ebc0c9 _public_6ebc0c9
#define public_6ebc0cd _public_6ebc0cd
#define public_6ebc0d2 _public_6ebc0d2
#define public_6ebc0e2 _public_6ebc0e2
#define public_6ebc0f8 _public_6ebc0f8
#define public_6ebc127 _public_6ebc127

PROC_DECLARE(0x6ebc090, internal_6ebc090, public_6ebc090);
extern "C" NAKED register_t __cdecl internal_6ebc090()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6ed23b8]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6ebc0e2
        mov ebp, dword ptr ss : [esp+0x18]
        public_6ebc0a3 : nop
        mov esi, ebp
        public_6ebc0a5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6ebc0cd
        test cl, cl
        je public_6ebc0c9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6ebc0cd
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6ebc0a5
        public_6ebc0c9 : nop
        xor eax, eax
        jmp public_6ebc0d2
        public_6ebc0cd : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ebc0d2 : nop
        test eax, eax
        je public_6ebc0f8
        mov eax, dword ptr ds : [edi*8+public_6ed23c0]
        inc edi
        test eax, eax
        jne public_6ebc0a3
        public_6ebc0e2 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6ebc0f8 : nop
        mov eax, dword ptr ds : [edi*8+public_6ed23bc]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_6ebc127
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
        public_6ebc127 : nop
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
        UNREACHABLE_TRAP(0x6ebc090)
    }
}

#undef public_6ebc0a3
#undef public_6ebc0a5
#undef public_6ebc0c9
#undef public_6ebc0cd
#undef public_6ebc0d2
#undef public_6ebc0e2
#undef public_6ebc0f8
#undef public_6ebc127
