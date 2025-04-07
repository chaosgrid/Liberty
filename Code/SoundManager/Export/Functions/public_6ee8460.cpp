#include "SoundManager-PCH.h"


#define public_6ee8473 _public_6ee8473
#define public_6ee8475 _public_6ee8475
#define public_6ee8499 _public_6ee8499
#define public_6ee849d _public_6ee849d
#define public_6ee84a2 _public_6ee84a2
#define public_6ee84b2 _public_6ee84b2
#define public_6ee84c8 _public_6ee84c8
#define public_6ee84f7 _public_6ee84f7

PROC_DECLARE(0x6ee8460, internal_6ee8460, public_6ee8460);
extern "C" NAKED register_t __cdecl internal_6ee8460()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6ee95cc]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6ee84b2
        mov ebp, dword ptr ss : [esp+0x18]
        public_6ee8473 : nop
        mov esi, ebp
        public_6ee8475 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6ee849d
        test cl, cl
        je public_6ee8499
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6ee849d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6ee8475
        public_6ee8499 : nop
        xor eax, eax
        jmp public_6ee84a2
        public_6ee849d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ee84a2 : nop
        test eax, eax
        je public_6ee84c8
        mov eax, dword ptr ds : [edi*8+public_6ee95d4]
        inc edi
        test eax, eax
        jne public_6ee8473
        public_6ee84b2 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6ee84c8 : nop
        mov eax, dword ptr ds : [edi*8+public_6ee95d0]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_6ee84f7
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
        public_6ee84f7 : nop
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
        UNREACHABLE_TRAP(0x6ee8460)
    }
}

#undef public_6ee8473
#undef public_6ee8475
#undef public_6ee8499
#undef public_6ee849d
#undef public_6ee84a2
#undef public_6ee84b2
#undef public_6ee84c8
#undef public_6ee84f7
