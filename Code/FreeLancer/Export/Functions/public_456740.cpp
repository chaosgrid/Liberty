#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44f970);
CLANG_FORWARD_PROC_SYMBOL(public_456740);

#define public_456757 _public_456757
#define public_456781 _public_456781
#define public_45678a _public_45678a

PROC_DECLARE(0x456740, internal_456740, public_456740);
extern "C" NAKED register_t __cdecl internal_456740()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_45678a
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        public_456757 : nop
        mov eax, dword ptr ds : [esi+8]
        cmp dword ptr ds : [eax+0xB0], ebx
        jne public_456781
        mov cl, byte ptr ds : [eax+0x2D]
        test cl, cl
        je public_456781
        mov ecx, dword ptr ds : [eax+0xC0]
        mov edx, dword ptr ds : [eax+0xB4]
        shl ecx, 6
        mov ecx, dword ptr ds : [ecx+edx]
        push ebp
        call public_44f970
        public_456781 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+8]
        jne public_456757
        pop ebp
        pop ebx
        public_45678a : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x456740)
    }
}

#undef public_456757
#undef public_456781
#undef public_45678a
