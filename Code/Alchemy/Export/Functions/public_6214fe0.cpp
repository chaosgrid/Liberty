#include "Alchemy-PCH.h"


#define public_6214ff3 _public_6214ff3
#define public_6214ff5 _public_6214ff5
#define public_6215019 _public_6215019
#define public_621501d _public_621501d
#define public_6215022 _public_6215022
#define public_6215032 _public_6215032
#define public_6215048 _public_6215048
#define public_6215074 _public_6215074

PROC_DECLARE(0x6214fe0, internal_6214fe0, public_6214fe0);
extern "C" NAKED register_t __cdecl internal_6214fe0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624ca6c]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6215032
        mov ebp, dword ptr ss : [esp+0x18]
        public_6214ff3 : nop
        mov esi, ebp
        public_6214ff5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_621501d
        test cl, cl
        je public_6215019
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_621501d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6214ff5
        public_6215019 : nop
        xor eax, eax
        jmp public_6215022
        public_621501d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6215022 : nop
        test eax, eax
        je public_6215048
        mov eax, dword ptr ds : [edi*8+public_624ca74]
        inc edi
        test eax, eax
        jne public_6214ff3
        public_6215032 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6215048 : nop
        mov eax, dword ptr ds : [edi*8+public_624ca70]
        test eax, eax
        jns public_6215074
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
        public_6215074 : nop
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
        UNREACHABLE_TRAP(0x6214fe0)
    }
}

#undef public_6214ff3
#undef public_6214ff5
#undef public_6215019
#undef public_621501d
#undef public_6215022
#undef public_6215032
#undef public_6215048
#undef public_6215074
