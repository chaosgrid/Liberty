#include "Server-PCH.h"


#define public_6ce1562 _public_6ce1562
#define public_6ce1575 _public_6ce1575
#define public_6ce1590 _public_6ce1590
#define public_6ce15a8 _public_6ce15a8

PROC_DECLARE(0x6ce1550, internal_6ce1550, public_6ce1550);
extern "C" NAKED register_t __cdecl internal_6ce1550()
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
        public_6ce1562 : nop
        mov edi, dword ptr ds : [edx+esi]
        mov dword ptr ds : [esi], edi
        add esi, 4
        dec ecx
        jne public_6ce1562
        lea esi, ds:[eax+0x14]
        mov ecx, 2
        public_6ce1575 : nop
        mov edi, dword ptr ds : [esi+edx]
        mov dword ptr ds : [esi], edi
        add esi, 4
        dec ecx
        jne public_6ce1575
        mov edi, 0xFFFFFFE4
        lea esi, ds:[eax+0x1C]
        sub edi, eax
        lea ebx, ds:[ebx]
        public_6ce1590 : nop
        mov cl, byte ptr ds : [esi+edx]
        mov byte ptr ds : [esi], cl
        inc esi
        lea ecx, ds:[edi+esi]
        cmp ecx, 0x40
        jb public_6ce1590
        mov edi, 0xFFFFFFA4
        lea esi, ds:[eax+0x5C]
        sub edi, eax
        public_6ce15a8 : nop
        mov cl, byte ptr ds : [esi+edx]
        mov byte ptr ds : [esi], cl
        inc esi
        lea ecx, ds:[edi+esi]
        cmp ecx, 0x80
        jb public_6ce15a8
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ce1550)
    }
}

#undef public_6ce1562
#undef public_6ce1575
#undef public_6ce1590
#undef public_6ce15a8
