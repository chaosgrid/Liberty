#include "Alchemy-PCH.h"


#define public_620ab63 _public_620ab63
#define public_620ab65 _public_620ab65
#define public_620ab89 _public_620ab89
#define public_620ab8d _public_620ab8d
#define public_620ab92 _public_620ab92
#define public_620aba2 _public_620aba2
#define public_620abb8 _public_620abb8
#define public_620abe4 _public_620abe4

PROC_DECLARE(0x620ab50, internal_620ab50, public_620ab50);
extern "C" NAKED register_t __cdecl internal_620ab50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624bd20]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_620aba2
        mov ebp, dword ptr ss : [esp+0x18]
        public_620ab63 : nop
        mov esi, ebp
        public_620ab65 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_620ab8d
        test cl, cl
        je public_620ab89
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_620ab8d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_620ab65
        public_620ab89 : nop
        xor eax, eax
        jmp public_620ab92
        public_620ab8d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_620ab92 : nop
        test eax, eax
        je public_620abb8
        mov eax, dword ptr ds : [edi*8+public_624bd28]
        inc edi
        test eax, eax
        jne public_620ab63
        public_620aba2 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_620abb8 : nop
        mov eax, dword ptr ds : [edi*8+public_624bd24]
        test eax, eax
        jns public_620abe4
        mov ecx, dword ptr ss : [esp+0x14]
        and eax, 0x7FFFFFFF
        mov esi, dword ptr ds : [eax+ecx]
        push esi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+4]
        pop edi
        xor eax, eax
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_620abe4 : nop
        mov edx, dword ptr ss : [esp+0x14]
        lea esi, ds:[eax+edx]
        push esi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+4]
        pop edi
        xor eax, eax
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x620ab50)
    }
}

#undef public_620ab63
#undef public_620ab65
#undef public_620ab89
#undef public_620ab8d
#undef public_620ab92
#undef public_620aba2
#undef public_620abb8
#undef public_620abe4
