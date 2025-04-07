#include "Shading-PCH.h"


#define public_6eb5b73 _public_6eb5b73
#define public_6eb5b75 _public_6eb5b75
#define public_6eb5b99 _public_6eb5b99
#define public_6eb5b9d _public_6eb5b9d
#define public_6eb5ba2 _public_6eb5ba2
#define public_6eb5bb2 _public_6eb5bb2
#define public_6eb5bc8 _public_6eb5bc8
#define public_6eb5bf7 _public_6eb5bf7

PROC_DECLARE(0x6eb5b60, internal_6eb5b60, public_6eb5b60);
extern "C" NAKED register_t __cdecl internal_6eb5b60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6ed1698]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6eb5bb2
        mov ebp, dword ptr ss : [esp+0x18]
        public_6eb5b73 : nop
        mov esi, ebp
        public_6eb5b75 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6eb5b9d
        test cl, cl
        je public_6eb5b99
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6eb5b9d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6eb5b75
        public_6eb5b99 : nop
        xor eax, eax
        jmp public_6eb5ba2
        public_6eb5b9d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6eb5ba2 : nop
        test eax, eax
        je public_6eb5bc8
        mov eax, dword ptr ds : [edi*8+public_6ed16a0]
        inc edi
        test eax, eax
        jne public_6eb5b73
        public_6eb5bb2 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6eb5bc8 : nop
        mov eax, dword ptr ds : [edi*8+public_6ed169c]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_6eb5bf7
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
        public_6eb5bf7 : nop
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
        UNREACHABLE_TRAP(0x6eb5b60)
    }
}

#undef public_6eb5b73
#undef public_6eb5b75
#undef public_6eb5b99
#undef public_6eb5b9d
#undef public_6eb5ba2
#undef public_6eb5bb2
#undef public_6eb5bc8
#undef public_6eb5bf7
