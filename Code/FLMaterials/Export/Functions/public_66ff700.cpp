#include "FLMaterials-PCH.h"


#define public_66ff713 _public_66ff713
#define public_66ff715 _public_66ff715
#define public_66ff739 _public_66ff739
#define public_66ff73d _public_66ff73d
#define public_66ff742 _public_66ff742
#define public_66ff752 _public_66ff752
#define public_66ff768 _public_66ff768
#define public_66ff794 _public_66ff794

PROC_DECLARE(0x66ff700, internal_66ff700, public_66ff700);
extern "C" NAKED register_t __cdecl internal_66ff700()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6702fd4]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_66ff752
        mov ebp, dword ptr ss : [esp+0x18]
        public_66ff713 : nop
        mov esi, ebp
        public_66ff715 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_66ff73d
        test cl, cl
        je public_66ff739
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_66ff73d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_66ff715
        public_66ff739 : nop
        xor eax, eax
        jmp public_66ff742
        public_66ff73d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_66ff742 : nop
        test eax, eax
        je public_66ff768
        mov eax, dword ptr ds : [edi*8+public_6702fdc]
        inc edi
        test eax, eax
        jne public_66ff713
        public_66ff752 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_66ff768 : nop
        mov eax, dword ptr ds : [edi*8+public_6702fd8]
        test eax, eax
        jns public_66ff794
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
        public_66ff794 : nop
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
        UNREACHABLE_TRAP(0x66ff700)
    }
}

#undef public_66ff713
#undef public_66ff715
#undef public_66ff739
#undef public_66ff73d
#undef public_66ff742
#undef public_66ff752
#undef public_66ff768
#undef public_66ff794
