#include "Alchemy-PCH.h"


#define public_620e843 _public_620e843
#define public_620e845 _public_620e845
#define public_620e869 _public_620e869
#define public_620e86d _public_620e86d
#define public_620e872 _public_620e872
#define public_620e882 _public_620e882
#define public_620e898 _public_620e898
#define public_620e8c4 _public_620e8c4

PROC_DECLARE(0x620e830, internal_620e830, public_620e830);
extern "C" NAKED register_t __cdecl internal_620e830()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624bfe8]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_620e882
        mov ebp, dword ptr ss : [esp+0x18]
        public_620e843 : nop
        mov esi, ebp
        public_620e845 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_620e86d
        test cl, cl
        je public_620e869
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_620e86d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_620e845
        public_620e869 : nop
        xor eax, eax
        jmp public_620e872
        public_620e86d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_620e872 : nop
        test eax, eax
        je public_620e898
        mov eax, dword ptr ds : [edi*8+public_624bff0]
        inc edi
        test eax, eax
        jne public_620e843
        public_620e882 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_620e898 : nop
        mov eax, dword ptr ds : [edi*8+public_624bfec]
        test eax, eax
        jns public_620e8c4
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
        public_620e8c4 : nop
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
        UNREACHABLE_TRAP(0x620e830)
    }
}

#undef public_620e843
#undef public_620e845
#undef public_620e869
#undef public_620e86d
#undef public_620e872
#undef public_620e882
#undef public_620e898
#undef public_620e8c4
