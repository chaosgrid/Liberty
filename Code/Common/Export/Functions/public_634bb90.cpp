#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_634bb90);

#define public_634bbb5 _public_634bbb5
#define public_634bbd0 _public_634bbd0

PROC_DECLARE(0x634bb90, internal_634bb90, public_634bb90);
extern "C" NAKED register_t __cdecl internal_634bb90()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [edi]
        and eax, 0x30
        cmp al, 0x10
        je public_634bbd0
        push esi
        lea esi, ds:[ecx+0xD8]
        mov cx, word ptr ds : [esi+2]
        cmp cx, word ptr ds : [esi]
        jb public_634bbb5
        mov ecx, esi
        call public_63441a0
        public_634bbb5 : nop
        mov eax, dword ptr ds : [esi+4]
        xor edx, edx
        mov dx, word ptr ds : [esi+2]
        mov dword ptr ds : [eax+edx*4], edi
        inc word ptr ds : [esi+2]
        mov ecx, dword ptr ds : [edi]
        and ecx, 0xFFFFFFDF
        or ecx, 0x10
        mov dword ptr ds : [edi], ecx
        pop esi
        public_634bbd0 : nop
        pop edi
        ret 4
        UNREACHABLE_TRAP(0x634bb90)
    }
}

#undef public_634bbb5
#undef public_634bbd0
