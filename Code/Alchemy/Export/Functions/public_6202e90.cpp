#include "Alchemy-PCH.h"


#define public_6202ea3 _public_6202ea3
#define public_6202ea5 _public_6202ea5
#define public_6202ec9 _public_6202ec9
#define public_6202ecd _public_6202ecd
#define public_6202ed2 _public_6202ed2
#define public_6202ee2 _public_6202ee2
#define public_6202ef8 _public_6202ef8
#define public_6202f24 _public_6202f24

PROC_DECLARE(0x6202e90, internal_6202e90, public_6202e90);
extern "C" NAKED register_t __cdecl internal_6202e90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624b31c]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6202ee2
        mov ebp, dword ptr ss : [esp+0x18]
        public_6202ea3 : nop
        mov esi, ebp
        public_6202ea5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6202ecd
        test cl, cl
        je public_6202ec9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6202ecd
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6202ea5
        public_6202ec9 : nop
        xor eax, eax
        jmp public_6202ed2
        public_6202ecd : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6202ed2 : nop
        test eax, eax
        je public_6202ef8
        mov eax, dword ptr ds : [edi*8+public_624b324]
        inc edi
        test eax, eax
        jne public_6202ea3
        public_6202ee2 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6202ef8 : nop
        mov eax, dword ptr ds : [edi*8+public_624b320]
        test eax, eax
        jns public_6202f24
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
        public_6202f24 : nop
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
        UNREACHABLE_TRAP(0x6202e90)
    }
}

#undef public_6202ea3
#undef public_6202ea5
#undef public_6202ec9
#undef public_6202ecd
#undef public_6202ed2
#undef public_6202ee2
#undef public_6202ef8
#undef public_6202f24
