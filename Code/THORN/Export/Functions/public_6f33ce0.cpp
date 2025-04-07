#include "THORN-PCH.h"


#define public_6f33cf3 _public_6f33cf3
#define public_6f33cf5 _public_6f33cf5
#define public_6f33d19 _public_6f33d19
#define public_6f33d1d _public_6f33d1d
#define public_6f33d22 _public_6f33d22
#define public_6f33d32 _public_6f33d32
#define public_6f33d48 _public_6f33d48
#define public_6f33d74 _public_6f33d74

PROC_DECLARE(0x6f33ce0, internal_6f33ce0, public_6f33ce0);
extern "C" NAKED register_t __cdecl internal_6f33ce0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f5aa2c]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6f33d32
        mov ebp, dword ptr ss : [esp+0x18]
        public_6f33cf3 : nop
        mov esi, ebp
        public_6f33cf5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6f33d1d
        test cl, cl
        je public_6f33d19
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6f33d1d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6f33cf5
        public_6f33d19 : nop
        xor eax, eax
        jmp public_6f33d22
        public_6f33d1d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f33d22 : nop
        test eax, eax
        je public_6f33d48
        mov eax, dword ptr ds : [edi*8+public_6f5aa34]
        inc edi
        test eax, eax
        jne public_6f33cf3
        public_6f33d32 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6f33d48 : nop
        mov eax, dword ptr ds : [edi*8+public_6f5aa30]
        test eax, eax
        jns public_6f33d74
        mov ecx, dword ptr ss : [esp+0x14]
        and eax, 0x7FFFFFFF
        mov esi, dword ptr ds : [eax+ecx]
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [ecx], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_6f33d74 : nop
        mov edx, dword ptr ss : [esp+0x14]
        lea esi, ds:[eax+edx]
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [ecx], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f33ce0)
    }
}

#undef public_6f33cf3
#undef public_6f33cf5
#undef public_6f33d19
#undef public_6f33d1d
#undef public_6f33d22
#undef public_6f33d32
#undef public_6f33d48
#undef public_6f33d74
