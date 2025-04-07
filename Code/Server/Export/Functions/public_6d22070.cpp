#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d22070);

#define public_6d22093 _public_6d22093
#define public_6d220a7 _public_6d220a7
#define public_6d220af _public_6d220af
#define public_6d220b8 _public_6d220b8

PROC_DECLARE(0x6d22070, internal_6d22070, public_6d22070);
extern "C" NAKED register_t __cdecl internal_6d22070()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        cmp esi, edi
        je public_6d220b8
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        je public_6d220a7
        cmp byte ptr ds : [esi], 0
        je public_6d22093
        test ecx, ecx
        je public_6d22093
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6d22093 : nop
        mov cl, byte ptr ds : [edi]
        mov byte ptr ds : [esi], cl
        mov edx, dword ptr ds : [edi+4]
        mov byte ptr ds : [edi], 0
        pop edi
        mov dword ptr ds : [esi+4], edx
        mov eax, esi
        pop esi
        ret 4
        public_6d220a7 : nop
        cmp byte ptr ds : [edi], 0
        je public_6d220af
        mov byte ptr ds : [esi], 1
        public_6d220af : nop
        mov edx, dword ptr ds : [edi+4]
        mov byte ptr ds : [edi], 0
        mov dword ptr ds : [esi+4], edx
        public_6d220b8 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d22070)
    }
}

#undef public_6d22093
#undef public_6d220a7
#undef public_6d220af
#undef public_6d220b8
