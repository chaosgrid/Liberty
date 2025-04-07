#include "Alchemy-PCH.h"


#define public_621c733 _public_621c733
#define public_621c735 _public_621c735
#define public_621c759 _public_621c759
#define public_621c75d _public_621c75d
#define public_621c762 _public_621c762
#define public_621c772 _public_621c772
#define public_621c788 _public_621c788
#define public_621c7b4 _public_621c7b4

PROC_DECLARE(0x621c720, internal_621c720, public_621c720);
extern "C" NAKED register_t __cdecl internal_621c720()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624d4cc]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_621c772
        mov ebp, dword ptr ss : [esp+0x18]
        public_621c733 : nop
        mov esi, ebp
        public_621c735 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_621c75d
        test cl, cl
        je public_621c759
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_621c75d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_621c735
        public_621c759 : nop
        xor eax, eax
        jmp public_621c762
        public_621c75d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_621c762 : nop
        test eax, eax
        je public_621c788
        mov eax, dword ptr ds : [edi*8+public_624d4d4]
        inc edi
        test eax, eax
        jne public_621c733
        public_621c772 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_621c788 : nop
        mov eax, dword ptr ds : [edi*8+public_624d4d0]
        test eax, eax
        jns public_621c7b4
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
        public_621c7b4 : nop
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
        UNREACHABLE_TRAP(0x621c720)
    }
}

#undef public_621c733
#undef public_621c735
#undef public_621c759
#undef public_621c75d
#undef public_621c762
#undef public_621c772
#undef public_621c788
#undef public_621c7b4
