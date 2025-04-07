#include "Alchemy-PCH.h"


#define public_621c843 _public_621c843
#define public_621c845 _public_621c845
#define public_621c869 _public_621c869
#define public_621c86d _public_621c86d
#define public_621c872 _public_621c872
#define public_621c882 _public_621c882
#define public_621c898 _public_621c898
#define public_621c8c4 _public_621c8c4

PROC_DECLARE(0x621c830, internal_621c830, public_621c830);
extern "C" NAKED register_t __cdecl internal_621c830()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624d4e4]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_621c882
        mov ebp, dword ptr ss : [esp+0x18]
        public_621c843 : nop
        mov esi, ebp
        public_621c845 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_621c86d
        test cl, cl
        je public_621c869
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_621c86d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_621c845
        public_621c869 : nop
        xor eax, eax
        jmp public_621c872
        public_621c86d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_621c872 : nop
        test eax, eax
        je public_621c898
        mov eax, dword ptr ds : [edi*8+public_624d4ec]
        inc edi
        test eax, eax
        jne public_621c843
        public_621c882 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_621c898 : nop
        mov eax, dword ptr ds : [edi*8+public_624d4e8]
        test eax, eax
        jns public_621c8c4
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
        public_621c8c4 : nop
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
        UNREACHABLE_TRAP(0x621c830)
    }
}

#undef public_621c843
#undef public_621c845
#undef public_621c869
#undef public_621c86d
#undef public_621c872
#undef public_621c882
#undef public_621c898
#undef public_621c8c4
