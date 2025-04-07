#include "Alchemy-PCH.h"


#define public_6218683 _public_6218683
#define public_6218685 _public_6218685
#define public_62186a9 _public_62186a9
#define public_62186ad _public_62186ad
#define public_62186b2 _public_62186b2
#define public_62186c2 _public_62186c2
#define public_62186d8 _public_62186d8
#define public_6218704 _public_6218704

PROC_DECLARE(0x6218670, internal_6218670, public_6218670);
extern "C" NAKED register_t __cdecl internal_6218670()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624ca9c]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_62186c2
        mov ebp, dword ptr ss : [esp+0x18]
        public_6218683 : nop
        mov esi, ebp
        public_6218685 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_62186ad
        test cl, cl
        je public_62186a9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_62186ad
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6218685
        public_62186a9 : nop
        xor eax, eax
        jmp public_62186b2
        public_62186ad : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_62186b2 : nop
        test eax, eax
        je public_62186d8
        mov eax, dword ptr ds : [edi*8+public_624caa4]
        inc edi
        test eax, eax
        jne public_6218683
        public_62186c2 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_62186d8 : nop
        mov eax, dword ptr ds : [edi*8+public_624caa0]
        test eax, eax
        jns public_6218704
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
        public_6218704 : nop
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
        UNREACHABLE_TRAP(0x6218670)
    }
}

#undef public_6218683
#undef public_6218685
#undef public_62186a9
#undef public_62186ad
#undef public_62186b2
#undef public_62186c2
#undef public_62186d8
#undef public_6218704
