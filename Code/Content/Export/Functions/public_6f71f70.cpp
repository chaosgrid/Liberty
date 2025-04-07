#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f71f70);

#define public_6f71f86 _public_6f71f86
#define public_6f71f91 _public_6f71f91
#define public_6f71f99 _public_6f71f99

PROC_DECLARE(0x6f71f70, internal_6f71f70, public_6f71f70);
extern "C" NAKED register_t __cdecl internal_6f71f70()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp edx, esi
        je public_6f71f99
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_6f71f86 : nop
        mov ecx, dword ptr ds : [edx]
        cmp ecx, dword ptr ds : [edi]
        je public_6f71f91
        mov dword ptr ds : [eax], ecx
        add eax, 4
        public_6f71f91 : nop
        add edx, 4
        cmp edx, esi
        jne public_6f71f86
        pop edi
        public_6f71f99 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f71f70)
    }
}

#undef public_6f71f86
#undef public_6f71f91
#undef public_6f71f99
