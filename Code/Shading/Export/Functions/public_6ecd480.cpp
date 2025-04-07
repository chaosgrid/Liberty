#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6ecd491 _public_6ecd491
#define public_6ecd4a1 _public_6ecd4a1
#define public_6ecd4c1 _public_6ecd4c1
#define public_6ecd4c5 _public_6ecd4c5
#define public_6ecd4ca _public_6ecd4ca
#define public_6ecd4ce _public_6ecd4ce
#define public_6ecd4d4 _public_6ecd4d4
#define public_6ecd4dd _public_6ecd4dd
#define public_6ecd506 _public_6ecd506
#define public_6ecd51a _public_6ecd51a
#define public_6ecd52e _public_6ecd52e

PROC_DECLARE(0x6ecd480, internal_6ecd480, public_6ecd480);
extern "C" NAKED register_t __cdecl internal_6ecd480()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebp
        mov ebp, dword ptr ds : [eax+0xC]
        push esi
        push edi
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_6ecd4d4
        public_6ecd491 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        cmp dword ptr ds : [edi+0xC], ecx
        jne public_6ecd4ce
        mov esi, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ss : [esp+0x18]
        public_6ecd4a1 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6ecd4c5
        test cl, cl
        je public_6ecd4c1
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6ecd4c5
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6ecd4a1
        public_6ecd4c1 : nop
        xor eax, eax
        jmp public_6ecd4ca
        public_6ecd4c5 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ecd4ca : nop
        test eax, eax
        je public_6ecd4dd
        public_6ecd4ce : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, ebp
        jne public_6ecd491
        public_6ecd4d4 : nop
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebp
        ret 0xC
        public_6ecd4dd : nop
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi]
        mov esi, dword ptr ds : [public_6ed1054]
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        je public_6ecd506
        push eax
        call esi
        add esp, 4
        mov dword ptr ds : [edi+8], 0
        public_6ecd506 : nop
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        je public_6ecd51a
        push eax
        call esi
        add esp, 4
        mov dword ptr ds : [edi+0x10], 0
        public_6ecd51a : nop
        mov eax, dword ptr ds : [edi+0x14]
        test eax, eax
        je public_6ecd52e
        push eax
        call esi
        add esp, 4
        mov dword ptr ds : [edi+0x14], 0
        public_6ecd52e : nop
        push edi
        call public_6ed0c50
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0x10]
        add esp, 4
        pop edi
        dec ecx
        pop esi
        mov dword ptr ds : [eax+0x10], ecx
        xor eax, eax
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6ecd480)
    }
}

#undef public_6ecd491
#undef public_6ecd4a1
#undef public_6ecd4c1
#undef public_6ecd4c5
#undef public_6ecd4ca
#undef public_6ecd4ce
#undef public_6ecd4d4
#undef public_6ecd4dd
#undef public_6ecd506
#undef public_6ecd51a
#undef public_6ecd52e
