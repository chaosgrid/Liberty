#include "Shading-PCH.h"


#define public_6ebcfa3 _public_6ebcfa3
#define public_6ebcfa5 _public_6ebcfa5
#define public_6ebcfc9 _public_6ebcfc9
#define public_6ebcfcd _public_6ebcfcd
#define public_6ebcfd2 _public_6ebcfd2
#define public_6ebcfe2 _public_6ebcfe2
#define public_6ebcff8 _public_6ebcff8
#define public_6ebd027 _public_6ebd027

PROC_DECLARE(0x6ebcf90, internal_6ebcf90, public_6ebcf90);
extern "C" NAKED register_t __cdecl internal_6ebcf90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6ed2658]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6ebcfe2
        mov ebp, dword ptr ss : [esp+0x18]
        public_6ebcfa3 : nop
        mov esi, ebp
        public_6ebcfa5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6ebcfcd
        test cl, cl
        je public_6ebcfc9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6ebcfcd
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6ebcfa5
        public_6ebcfc9 : nop
        xor eax, eax
        jmp public_6ebcfd2
        public_6ebcfcd : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ebcfd2 : nop
        test eax, eax
        je public_6ebcff8
        mov eax, dword ptr ds : [edi*8+public_6ed2660]
        inc edi
        test eax, eax
        jne public_6ebcfa3
        public_6ebcfe2 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6ebcff8 : nop
        mov eax, dword ptr ds : [edi*8+public_6ed265c]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_6ebd027
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
        public_6ebd027 : nop
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
        UNREACHABLE_TRAP(0x6ebcf90)
    }
}

#undef public_6ebcfa3
#undef public_6ebcfa5
#undef public_6ebcfc9
#undef public_6ebcfcd
#undef public_6ebcfd2
#undef public_6ebcfe2
#undef public_6ebcff8
#undef public_6ebd027
