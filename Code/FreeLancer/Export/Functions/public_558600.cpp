#include "FreeLancer-PCH.h"


#define public_558613 _public_558613
#define public_558615 _public_558615
#define public_558639 _public_558639
#define public_55863d _public_55863d
#define public_558642 _public_558642
#define public_558652 _public_558652
#define public_558668 _public_558668
#define public_558694 _public_558694

PROC_DECLARE(0x558600, internal_558600, public_558600);
extern "C" NAKED register_t __cdecl internal_558600()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e143c]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_558652
        mov ebp, dword ptr ss : [esp+0x18]
        public_558613 : nop
        mov esi, ebp
        public_558615 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_55863d
        test cl, cl
        je public_558639
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_55863d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_558615
        public_558639 : nop
        xor eax, eax
        jmp public_558642
        public_55863d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_558642 : nop
        test eax, eax
        je public_558668
        mov eax, dword ptr ds : [edi*8+public_5e1444]
        inc edi
        test eax, eax
        jne public_558613
        public_558652 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_558668 : nop
        mov eax, dword ptr ds : [edi*8+public_5e1440]
        test eax, eax
        jns public_558694
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
        public_558694 : nop
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
        UNREACHABLE_TRAP(0x558600)
    }
}

#undef public_558613
#undef public_558615
#undef public_558639
#undef public_55863d
#undef public_558642
#undef public_558652
#undef public_558668
#undef public_558694
