#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ba6f0);
CLANG_FORWARD_PROC_SYMBOL(public_62bb590);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62ba702 _public_62ba702
#define public_62ba729 _public_62ba729

PROC_DECLARE(0x62ba6f0, internal_62ba6f0, public_62ba6f0);
extern "C" NAKED register_t __cdecl internal_62ba6f0()
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
        je public_62ba729
        public_62ba702 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_62ba6f0
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_62bb590
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_62ba702
        public_62ba729 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62ba6f0)
    }
}

#undef public_62ba702
#undef public_62ba729
