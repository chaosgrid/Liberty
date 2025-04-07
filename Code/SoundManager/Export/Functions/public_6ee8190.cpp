#include "SoundManager-PCH.h"


#define public_6ee81a3 _public_6ee81a3
#define public_6ee81a5 _public_6ee81a5
#define public_6ee81c9 _public_6ee81c9
#define public_6ee81cd _public_6ee81cd
#define public_6ee81d2 _public_6ee81d2
#define public_6ee81e2 _public_6ee81e2
#define public_6ee81f8 _public_6ee81f8
#define public_6ee8224 _public_6ee8224

PROC_DECLARE(0x6ee8190, internal_6ee8190, public_6ee8190);
extern "C" NAKED register_t __cdecl internal_6ee8190()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6ee94b0]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6ee81e2
        mov ebp, dword ptr ss : [esp+0x18]
        public_6ee81a3 : nop
        mov esi, ebp
        public_6ee81a5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6ee81cd
        test cl, cl
        je public_6ee81c9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6ee81cd
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6ee81a5
        public_6ee81c9 : nop
        xor eax, eax
        jmp public_6ee81d2
        public_6ee81cd : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ee81d2 : nop
        test eax, eax
        je public_6ee81f8
        mov eax, dword ptr ds : [edi*8+public_6ee94b8]
        inc edi
        test eax, eax
        jne public_6ee81a3
        public_6ee81e2 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6ee81f8 : nop
        mov eax, dword ptr ds : [edi*8+public_6ee94b4]
        test eax, eax
        jns public_6ee8224
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
        public_6ee8224 : nop
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
        UNREACHABLE_TRAP(0x6ee8190)
    }
}

#undef public_6ee81a3
#undef public_6ee81a5
#undef public_6ee81c9
#undef public_6ee81cd
#undef public_6ee81d2
#undef public_6ee81e2
#undef public_6ee81f8
#undef public_6ee8224
