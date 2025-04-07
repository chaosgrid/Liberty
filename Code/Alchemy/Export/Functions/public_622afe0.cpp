#include "Alchemy-PCH.h"


#define public_622aff3 _public_622aff3
#define public_622aff5 _public_622aff5
#define public_622b019 _public_622b019
#define public_622b01d _public_622b01d
#define public_622b022 _public_622b022
#define public_622b032 _public_622b032
#define public_622b048 _public_622b048
#define public_622b074 _public_622b074

PROC_DECLARE(0x622afe0, internal_622afe0, public_622afe0);
extern "C" NAKED register_t __cdecl internal_622afe0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624e10c]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_622b032
        mov ebp, dword ptr ss : [esp+0x18]
        public_622aff3 : nop
        mov esi, ebp
        public_622aff5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_622b01d
        test cl, cl
        je public_622b019
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_622b01d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_622aff5
        public_622b019 : nop
        xor eax, eax
        jmp public_622b022
        public_622b01d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_622b022 : nop
        test eax, eax
        je public_622b048
        mov eax, dword ptr ds : [edi*8+public_624e114]
        inc edi
        test eax, eax
        jne public_622aff3
        public_622b032 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_622b048 : nop
        mov eax, dword ptr ds : [edi*8+public_624e110]
        test eax, eax
        jns public_622b074
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
        public_622b074 : nop
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
        UNREACHABLE_TRAP(0x622afe0)
    }
}

#undef public_622aff3
#undef public_622aff5
#undef public_622b019
#undef public_622b01d
#undef public_622b022
#undef public_622b032
#undef public_622b048
#undef public_622b074
