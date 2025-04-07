#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661a260);

#define public_661a274 _public_661a274
#define public_661a27e _public_661a27e
#define public_661a282 _public_661a282
#define public_661a287 _public_661a287

PROC_DECLARE(0x661a260, internal_661a260, public_661a260);
extern "C" NAKED register_t __cdecl internal_661a260()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [eax+4]
        cmp edx, ecx
        je public_661a287
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_661a274 : nop
        cmp dword ptr ds : [edx+0xC], esi
        jae public_661a27e
        mov edx, dword ptr ds : [edx+8]
        jmp public_661a282
        public_661a27e : nop
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        public_661a282 : nop
        cmp edx, ecx
        jne public_661a274
        pop esi
        public_661a287 : nop
        ret 4
        UNREACHABLE_TRAP(0x661a260)
    }
}

#undef public_661a274
#undef public_661a27e
#undef public_661a282
#undef public_661a287
