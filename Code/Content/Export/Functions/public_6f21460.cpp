#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f21460);

#define public_6f21474 _public_6f21474
#define public_6f2147e _public_6f2147e
#define public_6f21482 _public_6f21482
#define public_6f21487 _public_6f21487

PROC_DECLARE(0x6f21460, internal_6f21460, public_6f21460);
extern "C" NAKED register_t __cdecl internal_6f21460()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_6f21487
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_6f21474 : nop
        cmp dword ptr ds : [edx+0xC], esi
        jge public_6f2147e
        mov edx, dword ptr ds : [edx+8]
        jmp public_6f21482
        public_6f2147e : nop
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        public_6f21482 : nop
        cmp edx, ecx
        jne public_6f21474
        pop esi
        public_6f21487 : nop
        ret 4
        UNREACHABLE_TRAP(0x6f21460)
    }
}

#undef public_6f21474
#undef public_6f2147e
#undef public_6f21482
#undef public_6f21487
