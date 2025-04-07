#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633e730);

#define public_633e743 _public_633e743
#define public_633e752 _public_633e752
#define public_633e763 _public_633e763

PROC_DECLARE(0x633e730, internal_633e730, public_633e730);
extern "C" NAKED register_t __cdecl internal_633e730()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp edx, ebx
        je public_633e763
        push esi
        push edi
        public_633e743 : nop
        test eax, eax
        je public_633e752
        mov ecx, 0x46
        mov esi, edx
        mov edi, eax
        rep movsd
        public_633e752 : nop
        add edx, 0x118
        add eax, 0x118
        cmp edx, ebx
        jne public_633e743
        pop edi
        pop esi
        public_633e763 : nop
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x633e730)
    }
}

#undef public_633e743
#undef public_633e752
#undef public_633e763
