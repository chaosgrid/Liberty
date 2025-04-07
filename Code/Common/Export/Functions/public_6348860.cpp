#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6348860);

#define public_6348874 _public_6348874
#define public_6348882 _public_6348882
#define public_6348888 _public_6348888

PROC_DECLARE(0x6348860, internal_6348860, public_6348860);
extern "C" NAKED register_t __cdecl internal_6348860()
{
    __asm
    {
        xor eax, eax
        mov ax, word ptr ds : [ecx+0x1E]
        push esi
        dec eax
        js public_6348882
        mov ecx, dword ptr ds : [ecx+0x20]
        mov edx, dword ptr ss : [esp+8]
        lea ecx, ds:[ecx+eax*4]
        public_6348874 : nop
        mov esi, dword ptr ds : [ecx]
        cmp dword ptr ds : [esi], edx
        je public_6348888
        dec eax
        sub ecx, 4
        test eax, eax
        jge public_6348874
        public_6348882 : nop
        xor eax, eax
        pop esi
        ret 4
        public_6348888 : nop
        mov eax, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6348860)
    }
}

#undef public_6348874
#undef public_6348882
#undef public_6348888
