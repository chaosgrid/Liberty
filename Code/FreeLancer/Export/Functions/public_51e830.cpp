#include "Freelancer-PCH.h"


#define public_51e843 _public_51e843
#define public_51e845 _public_51e845
#define public_51e869 _public_51e869
#define public_51e86d _public_51e86d
#define public_51e872 _public_51e872
#define public_51e882 _public_51e882
#define public_51e898 _public_51e898
#define public_51e8c4 _public_51e8c4

PROC_DECLARE(0x51e830, internal_51e830, public_51e830);
extern "C" NAKED register_t __cdecl internal_51e830()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dc2a8]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_51e882
        mov ebp, dword ptr ss : [esp+0x18]
        public_51e843 : nop
        mov esi, ebp
        public_51e845 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_51e86d
        test cl, cl
        je public_51e869
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_51e86d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_51e845
        public_51e869 : nop
        xor eax, eax
        jmp public_51e872
        public_51e86d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_51e872 : nop
        test eax, eax
        je public_51e898
        mov eax, dword ptr ds : [edi*8+public_5dc2b0]
        inc edi
        test eax, eax
        jne public_51e843
        public_51e882 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_51e898 : nop
        mov eax, dword ptr ds : [edi*8+public_5dc2ac]
        test eax, eax
        jns public_51e8c4
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
        public_51e8c4 : nop
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
        UNREACHABLE_TRAP(0x51e830)
    }
}

#undef public_51e843
#undef public_51e845
#undef public_51e869
#undef public_51e86d
#undef public_51e872
#undef public_51e882
#undef public_51e898
#undef public_51e8c4
