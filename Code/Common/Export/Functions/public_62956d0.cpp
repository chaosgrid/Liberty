#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62956d0);

#define public_62956e6 _public_62956e6
#define public_62956ed _public_62956ed

PROC_DECLARE(0x62956d0, internal_62956d0, public_62956d0);
extern "C" NAKED register_t __cdecl internal_62956d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x28]
        mov ecx, dword ptr ss : [esp+8]
        cmp eax, ecx
        push edi
        jb public_62956e6
        sub eax, ecx
        mov dword ptr ds : [esi+0x28], eax
        jmp public_62956ed
        public_62956e6 : nop
        mov dword ptr ds : [esi+0x28], 0
        public_62956ed : nop
        mov edi, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edi+0x38]
        push ecx
        mov ecx, esi
        fstp dword ptr ss : [esp]
        call dword ptr ds : [edi+0x40]
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62956d0)
    }
}

#undef public_62956e6
#undef public_62956ed
