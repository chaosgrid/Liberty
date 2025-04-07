#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4af00);

#define public_6f4af14 _public_6f4af14
#define public_6f4af1e _public_6f4af1e
#define public_6f4af22 _public_6f4af22
#define public_6f4af27 _public_6f4af27

PROC_DECLARE(0x6f4af00, internal_6f4af00, public_6f4af00);
extern "C" NAKED register_t __cdecl internal_6f4af00()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_6f4af27
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_6f4af14 : nop
        cmp dword ptr ds : [edx+0xC], esi
        jge public_6f4af1e
        mov edx, dword ptr ds : [edx+8]
        jmp public_6f4af22
        public_6f4af1e : nop
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        public_6f4af22 : nop
        cmp edx, ecx
        jne public_6f4af14
        pop esi
        public_6f4af27 : nop
        ret 4
        UNREACHABLE_TRAP(0x6f4af00)
    }
}

#undef public_6f4af14
#undef public_6f4af1e
#undef public_6f4af22
#undef public_6f4af27
