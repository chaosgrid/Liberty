#include "THORN-PCH.h"


#define public_6f33c03 _public_6f33c03
#define public_6f33c05 _public_6f33c05
#define public_6f33c29 _public_6f33c29
#define public_6f33c2d _public_6f33c2d
#define public_6f33c32 _public_6f33c32
#define public_6f33c42 _public_6f33c42
#define public_6f33c58 _public_6f33c58
#define public_6f33c84 _public_6f33c84

PROC_DECLARE(0x6f33bf0, internal_6f33bf0, public_6f33bf0);
extern "C" NAKED register_t __cdecl internal_6f33bf0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f5aa1c]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6f33c42
        mov ebp, dword ptr ss : [esp+0x18]
        public_6f33c03 : nop
        mov esi, ebp
        public_6f33c05 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6f33c2d
        test cl, cl
        je public_6f33c29
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6f33c2d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6f33c05
        public_6f33c29 : nop
        xor eax, eax
        jmp public_6f33c32
        public_6f33c2d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f33c32 : nop
        test eax, eax
        je public_6f33c58
        mov eax, dword ptr ds : [edi*8+public_6f5aa24]
        inc edi
        test eax, eax
        jne public_6f33c03
        public_6f33c42 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6f33c58 : nop
        mov eax, dword ptr ds : [edi*8+public_6f5aa20]
        test eax, eax
        jns public_6f33c84
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
        public_6f33c84 : nop
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
        UNREACHABLE_TRAP(0x6f33bf0)
    }
}

#undef public_6f33c03
#undef public_6f33c05
#undef public_6f33c29
#undef public_6f33c2d
#undef public_6f33c32
#undef public_6f33c42
#undef public_6f33c58
#undef public_6f33c84
