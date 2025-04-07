#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d20f0);
CLANG_FORWARD_PROC_SYMBOL(public_62d21c0);

#define public_62cf507 _public_62cf507
#define public_62cf51b _public_62cf51b

PROC_DECLARE(0x62cf4f0, internal_62cf4f0, public_62cf4f0);
extern "C" NAKED register_t __cdecl internal_62cf4f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x60]
        test ecx, ecx
        je public_62cf507
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [esi+0x60]
        call public_62d21c0
        public_62cf507 : nop
        mov ecx, dword ptr ds : [esi+0x64]
        test ecx, ecx
        je public_62cf51b
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ds : [esi+0x64]
        call public_62d21c0
        public_62cf51b : nop
        mov ecx, esi
        pop esi
        jmp public_62d20f0
        UNREACHABLE_TRAP(0x62cf4f0)
    }
}

#undef public_62cf507
#undef public_62cf51b
