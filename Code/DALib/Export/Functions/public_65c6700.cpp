#include "DALib-PCH.h"


#define public_65c6712 _public_65c6712
#define public_65c6725 _public_65c6725
#define public_65c6740 _public_65c6740
#define public_65c6758 _public_65c6758

PROC_DECLARE(0x65c6700, internal_65c6700, public_65c6700);
extern "C" NAKED register_t __cdecl internal_65c6700()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, ecx
        push esi
        push edi
        lea esi, ds:[eax+4]
        sub edx, eax
        mov ecx, 4
        public_65c6712 : nop
        mov edi, dword ptr ds : [edx+esi]
        mov dword ptr ds : [esi], edi
        add esi, 4
        dec ecx
        jne public_65c6712
        lea esi, ds:[eax+0x14]
        mov ecx, 2
        public_65c6725 : nop
        mov edi, dword ptr ds : [esi+edx]
        mov dword ptr ds : [esi], edi
        add esi, 4
        dec ecx
        jne public_65c6725
        mov edi, 0xFFFFFFE4
        lea esi, ds:[eax+0x1C]
        sub edi, eax
        lea ebx, ds:[ebx]
        public_65c6740 : nop
        mov cl, byte ptr ds : [esi+edx]
        mov byte ptr ds : [esi], cl
        inc esi
        lea ecx, ds:[edi+esi]
        cmp ecx, 0x40
        jb public_65c6740
        mov edi, 0xFFFFFFA4
        lea esi, ds:[eax+0x5C]
        sub edi, eax
        public_65c6758 : nop
        mov cl, byte ptr ds : [esi+edx]
        mov byte ptr ds : [esi], cl
        inc esi
        lea ecx, ds:[edi+esi]
        cmp ecx, 0x80
        jb public_65c6758
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65c6700)
    }
}

#undef public_65c6712
#undef public_65c6725
#undef public_65c6740
#undef public_65c6758
