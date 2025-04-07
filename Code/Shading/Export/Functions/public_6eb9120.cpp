#include "Shading-PCH.h"


#define public_6eb9133 _public_6eb9133
#define public_6eb9135 _public_6eb9135
#define public_6eb9159 _public_6eb9159
#define public_6eb915d _public_6eb915d
#define public_6eb9162 _public_6eb9162
#define public_6eb9172 _public_6eb9172
#define public_6eb9188 _public_6eb9188
#define public_6eb91b7 _public_6eb91b7

PROC_DECLARE(0x6eb9120, internal_6eb9120, public_6eb9120);
extern "C" NAKED register_t __cdecl internal_6eb9120()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6ed1e28]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6eb9172
        mov ebp, dword ptr ss : [esp+0x18]
        public_6eb9133 : nop
        mov esi, ebp
        public_6eb9135 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6eb915d
        test cl, cl
        je public_6eb9159
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6eb915d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6eb9135
        public_6eb9159 : nop
        xor eax, eax
        jmp public_6eb9162
        public_6eb915d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6eb9162 : nop
        test eax, eax
        je public_6eb9188
        mov eax, dword ptr ds : [edi*8+public_6ed1e30]
        inc edi
        test eax, eax
        jne public_6eb9133
        public_6eb9172 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6eb9188 : nop
        mov eax, dword ptr ds : [edi*8+public_6ed1e2c]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_6eb91b7
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
        public_6eb91b7 : nop
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
        UNREACHABLE_TRAP(0x6eb9120)
    }
}

#undef public_6eb9133
#undef public_6eb9135
#undef public_6eb9159
#undef public_6eb915d
#undef public_6eb9162
#undef public_6eb9172
#undef public_6eb9188
#undef public_6eb91b7
