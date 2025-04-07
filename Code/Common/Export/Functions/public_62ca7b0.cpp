#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d20f0);
CLANG_FORWARD_PROC_SYMBOL(public_62d6710);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62ca7cd _public_62ca7cd

PROC_DECLARE(0x62ca7b0, internal_62ca7b0, public_62ca7b0);
extern "C" NAKED register_t __cdecl internal_62ca7b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        lea ecx, ds:[esi+0x1D4]
        mov byte ptr ds : [esi+0x1E0], 0
        cmp dword ptr ds : [ecx], 0
        push edi
        je public_62ca7cd
        push 0
        call public_6341610
        public_62ca7cd : nop
        mov eax, dword ptr ds : [esi+0x88]
        lea ecx, ds:[esi+0x88]
        call dword ptr ds : [eax+0x10]
        lea edi, ds:[esi+0x2C]
        push 1
        mov ecx, edi
        call public_62d6710
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [esi+0x148]
        lea ecx, ds:[esi+0x148]
        call dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [esi+0x1C0]
        lea ecx, ds:[esi+0x1C0]
        call dword ptr ds : [edx+0x10]
        pop edi
        mov ecx, esi
        pop esi
        jmp public_62d20f0
        UNREACHABLE_TRAP(0x62ca7b0)
    }
}

#undef public_62ca7cd
