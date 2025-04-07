#include "Alchemy-PCH.h"


#define public_6218573 _public_6218573
#define public_6218575 _public_6218575
#define public_6218599 _public_6218599
#define public_621859d _public_621859d
#define public_62185a2 _public_62185a2
#define public_62185b2 _public_62185b2
#define public_62185c8 _public_62185c8
#define public_62185f4 _public_62185f4

PROC_DECLARE(0x6218560, internal_6218560, public_6218560);
extern "C" NAKED register_t __cdecl internal_6218560()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624ce60]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_62185b2
        mov ebp, dword ptr ss : [esp+0x18]
        public_6218573 : nop
        mov esi, ebp
        public_6218575 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_621859d
        test cl, cl
        je public_6218599
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_621859d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6218575
        public_6218599 : nop
        xor eax, eax
        jmp public_62185a2
        public_621859d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_62185a2 : nop
        test eax, eax
        je public_62185c8
        mov eax, dword ptr ds : [edi*8+public_624ce68]
        inc edi
        test eax, eax
        jne public_6218573
        public_62185b2 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_62185c8 : nop
        mov eax, dword ptr ds : [edi*8+public_624ce64]
        test eax, eax
        jns public_62185f4
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
        public_62185f4 : nop
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
        UNREACHABLE_TRAP(0x6218560)
    }
}

#undef public_6218573
#undef public_6218575
#undef public_6218599
#undef public_621859d
#undef public_62185a2
#undef public_62185b2
#undef public_62185c8
#undef public_62185f4
