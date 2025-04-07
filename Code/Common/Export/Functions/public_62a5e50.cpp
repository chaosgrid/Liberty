#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a47a0);
CLANG_FORWARD_PROC_SYMBOL(public_62a5e50);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62a5e71 _public_62a5e71

PROC_DECLARE(0x62a5e50, internal_62a5e50, public_62a5e50);
extern "C" NAKED register_t __cdecl internal_62a5e50()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        dec ecx
        push edi
        mov edi, ecx
        test edi, edi
        mov dword ptr ds : [esi+0x10], ecx
        ja public_62a5e71
        mov ecx, esi
        call public_62a47a0
        push esi
        call public_6391d5a
        add esp, 4
        public_62a5e71 : nop
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62a5e50)
    }
}

#undef public_62a5e71
