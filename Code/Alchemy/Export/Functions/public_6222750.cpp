#include "Alchemy-PCH.h"


#define public_6222763 _public_6222763
#define public_6222765 _public_6222765
#define public_6222789 _public_6222789
#define public_622278d _public_622278d
#define public_6222792 _public_6222792
#define public_62227a2 _public_62227a2
#define public_62227b8 _public_62227b8
#define public_62227e4 _public_62227e4

PROC_DECLARE(0x6222750, internal_6222750, public_6222750);
extern "C" NAKED register_t __cdecl internal_6222750()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624d9ec]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_62227a2
        mov ebp, dword ptr ss : [esp+0x18]
        public_6222763 : nop
        mov esi, ebp
        public_6222765 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_622278d
        test cl, cl
        je public_6222789
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_622278d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6222765
        public_6222789 : nop
        xor eax, eax
        jmp public_6222792
        public_622278d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6222792 : nop
        test eax, eax
        je public_62227b8
        mov eax, dword ptr ds : [edi*8+public_624d9f4]
        inc edi
        test eax, eax
        jne public_6222763
        public_62227a2 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_62227b8 : nop
        mov eax, dword ptr ds : [edi*8+public_624d9f0]
        test eax, eax
        jns public_62227e4
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
        public_62227e4 : nop
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
        UNREACHABLE_TRAP(0x6222750)
    }
}

#undef public_6222763
#undef public_6222765
#undef public_6222789
#undef public_622278d
#undef public_6222792
#undef public_62227a2
#undef public_62227b8
#undef public_62227e4
