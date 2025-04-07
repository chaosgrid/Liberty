#include "Shading-PCH.h"


#define public_6eb4653 _public_6eb4653
#define public_6eb4655 _public_6eb4655
#define public_6eb4679 _public_6eb4679
#define public_6eb467d _public_6eb467d
#define public_6eb4682 _public_6eb4682
#define public_6eb4692 _public_6eb4692
#define public_6eb46a8 _public_6eb46a8
#define public_6eb46d7 _public_6eb46d7

PROC_DECLARE(0x6eb4640, internal_6eb4640, public_6eb4640);
extern "C" NAKED register_t __cdecl internal_6eb4640()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6ed1320]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6eb4692
        mov ebp, dword ptr ss : [esp+0x18]
        public_6eb4653 : nop
        mov esi, ebp
        public_6eb4655 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6eb467d
        test cl, cl
        je public_6eb4679
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6eb467d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6eb4655
        public_6eb4679 : nop
        xor eax, eax
        jmp public_6eb4682
        public_6eb467d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6eb4682 : nop
        test eax, eax
        je public_6eb46a8
        mov eax, dword ptr ds : [edi*8+public_6ed1328]
        inc edi
        test eax, eax
        jne public_6eb4653
        public_6eb4692 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6eb46a8 : nop
        mov eax, dword ptr ds : [edi*8+public_6ed1324]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_6eb46d7
        mov edx, dword ptr ds : [ecx+8]
        and eax, 0x7FFFFFFF
        mov esi, dword ptr ds : [eax+edx]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_6eb46d7 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [esi+eax]
        add esi, eax
        push esi
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6eb4640)
    }
}

#undef public_6eb4653
#undef public_6eb4655
#undef public_6eb4679
#undef public_6eb467d
#undef public_6eb4682
#undef public_6eb4692
#undef public_6eb46a8
#undef public_6eb46d7
