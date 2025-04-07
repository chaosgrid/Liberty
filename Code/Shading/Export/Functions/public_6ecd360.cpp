#include "Shading-PCH.h"


#define public_6ecd376 _public_6ecd376
#define public_6ecd384 _public_6ecd384
#define public_6ecd3a4 _public_6ecd3a4
#define public_6ecd3a8 _public_6ecd3a8
#define public_6ecd3ad _public_6ecd3ad
#define public_6ecd3b1 _public_6ecd3b1
#define public_6ecd3b7 _public_6ecd3b7
#define public_6ecd3c1 _public_6ecd3c1
#define public_6ecd3c8 _public_6ecd3c8

PROC_DECLARE(0x6ecd360, internal_6ecd360, public_6ecd360);
extern "C" NAKED register_t __cdecl internal_6ecd360()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        mov ebp, dword ptr ds : [eax+0xC]
        push esi
        push edi
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_6ecd3b7
        mov edx, dword ptr ss : [esp+0x1C]
        public_6ecd376 : nop
        mov ecx, dword ptr ds : [edi+0xC]
        cmp ecx, dword ptr ss : [esp+0x18]
        jne public_6ecd3b1
        mov eax, dword ptr ds : [edi+0x10]
        mov esi, edx
        public_6ecd384 : nop
        mov bl, byte ptr ds : [eax]
        mov cl, bl
        cmp bl, byte ptr ds : [esi]
        jne public_6ecd3a8
        test cl, cl
        je public_6ecd3a4
        mov bl, byte ptr ds : [eax+1]
        mov cl, bl
        cmp bl, byte ptr ds : [esi+1]
        jne public_6ecd3a8
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6ecd384
        public_6ecd3a4 : nop
        xor eax, eax
        jmp public_6ecd3ad
        public_6ecd3a8 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ecd3ad : nop
        test eax, eax
        je public_6ecd3c1
        public_6ecd3b1 : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, ebp
        jne public_6ecd376
        public_6ecd3b7 : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 0x14
        public_6ecd3c1 : nop
        mov ecx, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ss : [esp+0x24]
        public_6ecd3c8 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        test al, al
        jne public_6ecd3c8
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x14
        UNREACHABLE_TRAP(0x6ecd360)
    }
}

#undef public_6ecd376
#undef public_6ecd384
#undef public_6ecd3a4
#undef public_6ecd3a8
#undef public_6ecd3ad
#undef public_6ecd3b1
#undef public_6ecd3b7
#undef public_6ecd3c1
#undef public_6ecd3c8
