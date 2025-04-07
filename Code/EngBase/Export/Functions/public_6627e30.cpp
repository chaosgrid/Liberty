#include "EngBase-PCH.h"


#define public_6627e43 _public_6627e43
#define public_6627e45 _public_6627e45
#define public_6627e69 _public_6627e69
#define public_6627e6d _public_6627e6d
#define public_6627e72 _public_6627e72
#define public_6627e82 _public_6627e82
#define public_6627e98 _public_6627e98
#define public_6627ec7 _public_6627ec7

PROC_DECLARE(0x6627e30, internal_6627e30, public_6627e30);
extern "C" NAKED register_t __cdecl internal_6627e30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6629844]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6627e82
        mov ebp, dword ptr ss : [esp+0x18]
        public_6627e43 : nop
        mov esi, ebp
        public_6627e45 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6627e6d
        test cl, cl
        je public_6627e69
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6627e6d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6627e45
        public_6627e69 : nop
        xor eax, eax
        jmp public_6627e72
        public_6627e6d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6627e72 : nop
        test eax, eax
        je public_6627e98
        mov eax, dword ptr ds : [edi*8+public_662984c]
        inc edi
        test eax, eax
        jne public_6627e43
        public_6627e82 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6627e98 : nop
        mov eax, dword ptr ds : [edi*8+public_6629848]
        mov ecx, dword ptr ss : [esp+0x14]
        test eax, eax
        jns public_6627ec7
        mov edx, dword ptr ds : [ecx+8]
        and eax, 0x7FFFFFFF
        mov esi, dword ptr ds : [eax+edx]
        push esi
        mov edx, dword ptr ds : [esi]
        call dword ptr ds : [edx+4]
        pop edi
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_6627ec7 : nop
        mov esi, dword ptr ds : [ecx+8]
        add esi, eax
        push esi
        mov edx, dword ptr ds : [esi]
        call dword ptr ds : [edx+4]
        pop edi
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6627e30)
    }
}

#undef public_6627e43
#undef public_6627e45
#undef public_6627e69
#undef public_6627e6d
#undef public_6627e72
#undef public_6627e82
#undef public_6627e98
#undef public_6627ec7
