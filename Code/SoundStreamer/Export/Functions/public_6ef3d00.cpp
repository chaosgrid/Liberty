#include "SoundStreamer-PCH.h"


#define public_6ef3d13 _public_6ef3d13
#define public_6ef3d15 _public_6ef3d15
#define public_6ef3d39 _public_6ef3d39
#define public_6ef3d3d _public_6ef3d3d
#define public_6ef3d42 _public_6ef3d42
#define public_6ef3d52 _public_6ef3d52
#define public_6ef3d68 _public_6ef3d68
#define public_6ef3d97 _public_6ef3d97

PROC_DECLARE(0x6ef3d00, internal_6ef3d00, public_6ef3d00);
extern "C" NAKED register_t __cdecl internal_6ef3d00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6efc24c]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6ef3d52
        mov ebp, dword ptr ss : [esp+0x18]
        public_6ef3d13 : nop
        mov esi, ebp
        public_6ef3d15 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6ef3d3d
        test cl, cl
        je public_6ef3d39
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6ef3d3d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6ef3d15
        public_6ef3d39 : nop
        xor eax, eax
        jmp public_6ef3d42
        public_6ef3d3d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ef3d42 : nop
        test eax, eax
        je public_6ef3d68
        mov eax, dword ptr ds : [edi*8+public_6efc254]
        inc edi
        test eax, eax
        jne public_6ef3d13
        public_6ef3d52 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6ef3d68 : nop
        mov eax, dword ptr ds : [edi*8+public_6efc250]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_6ef3d97
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
        public_6ef3d97 : nop
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
        UNREACHABLE_TRAP(0x6ef3d00)
    }
}

#undef public_6ef3d13
#undef public_6ef3d15
#undef public_6ef3d39
#undef public_6ef3d3d
#undef public_6ef3d42
#undef public_6ef3d52
#undef public_6ef3d68
#undef public_6ef3d97
