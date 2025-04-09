#include "FreeLancer-PCH.h"


#define public_564982 _public_564982
#define public_564995 _public_564995
#define public_5649b0 _public_5649b0
#define public_5649c8 _public_5649c8

PROC_DECLARE(0x564970, internal_564970, public_564970);
extern "C" NAKED register_t __cdecl internal_564970()
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
        public_564982 : nop
        mov edi, dword ptr ds : [edx+esi]
        mov dword ptr ds : [esi], edi
        add esi, 4
        dec ecx
        jne public_564982
        lea esi, ds:[eax+0x14]
        mov ecx, 2
        public_564995 : nop
        mov edi, dword ptr ds : [esi+edx]
        mov dword ptr ds : [esi], edi
        add esi, 4
        dec ecx
        jne public_564995
        mov edi, 0xFFFFFFE4
        lea esi, ds:[eax+0x1C]
        sub edi, eax
        lea ebx, ds:[ebx]
        public_5649b0 : nop
        mov cl, byte ptr ds : [esi+edx]
        mov byte ptr ds : [esi], cl
        inc esi
        lea ecx, ds:[edi+esi]
        cmp ecx, 0x40
        jb public_5649b0
        mov edi, 0xFFFFFFA4
        lea esi, ds:[eax+0x5C]
        sub edi, eax
        public_5649c8 : nop
        mov cl, byte ptr ds : [esi+edx]
        mov byte ptr ds : [esi], cl
        inc esi
        lea ecx, ds:[edi+esi]
        cmp ecx, 0x80
        jb public_5649c8
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x564970)
    }
}

#undef public_564982
#undef public_564995
#undef public_5649b0
#undef public_5649c8
