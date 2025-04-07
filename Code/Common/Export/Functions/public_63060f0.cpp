#include "Common-PCH.h"


#define public_6306102 _public_6306102
#define public_6306115 _public_6306115
#define public_6306130 _public_6306130
#define public_6306148 _public_6306148

PROC_DECLARE(0x63060f0, internal_63060f0, public_63060f0);
extern "C" NAKED register_t __cdecl internal_63060f0()
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
        public_6306102 : nop
        mov edi, dword ptr ds : [edx+esi]
        mov dword ptr ds : [esi], edi
        add esi, 4
        dec ecx
        jne public_6306102
        lea esi, ds:[eax+0x14]
        mov ecx, 2
        public_6306115 : nop
        mov edi, dword ptr ds : [esi+edx]
        mov dword ptr ds : [esi], edi
        add esi, 4
        dec ecx
        jne public_6306115
        mov edi, 0xFFFFFFE4
        lea esi, ds:[eax+0x1C]
        sub edi, eax
        lea ebx, ds:[ebx]
        public_6306130 : nop
        mov cl, byte ptr ds : [esi+edx]
        mov byte ptr ds : [esi], cl
        inc esi
        lea ecx, ds:[edi+esi]
        cmp ecx, 0x40
        jb public_6306130
        mov edi, 0xFFFFFFA4
        lea esi, ds:[eax+0x5C]
        sub edi, eax
        public_6306148 : nop
        mov cl, byte ptr ds : [esi+edx]
        mov byte ptr ds : [esi], cl
        inc esi
        lea ecx, ds:[edi+esi]
        cmp ecx, 0x80
        jb public_6306148
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x63060f0)
    }
}

#undef public_6306102
#undef public_6306115
#undef public_6306130
#undef public_6306148
