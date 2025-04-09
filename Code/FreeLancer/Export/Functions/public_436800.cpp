#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_436800);
CLANG_FORWARD_PROC_SYMBOL(public_455e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_436812 _public_436812
#define public_436839 _public_436839

PROC_DECLARE(0x436800, internal_436800, public_436800);
extern "C" NAKED register_t __cdecl internal_436800()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, eax
        mov esi, edi
        je public_436839
        public_436812 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_436800
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_455e90
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_436812
        public_436839 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x436800)
    }
}

#undef public_436812
#undef public_436839
