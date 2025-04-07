#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f31d40);

#define public_6f31d54 _public_6f31d54
#define public_6f31d5e _public_6f31d5e
#define public_6f31d62 _public_6f31d62
#define public_6f31d67 _public_6f31d67

PROC_DECLARE(0x6f31d40, internal_6f31d40, public_6f31d40);
extern "C" NAKED register_t __cdecl internal_6f31d40()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_6f31d67
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_6f31d54 : nop
        cmp dword ptr ds : [edx+0xC], esi
        jge public_6f31d5e
        mov edx, dword ptr ds : [edx+8]
        jmp public_6f31d62
        public_6f31d5e : nop
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        public_6f31d62 : nop
        cmp edx, ecx
        jne public_6f31d54
        pop esi
        public_6f31d67 : nop
        ret 4
        UNREACHABLE_TRAP(0x6f31d40)
    }
}

#undef public_6f31d54
#undef public_6f31d5e
#undef public_6f31d62
#undef public_6f31d67
