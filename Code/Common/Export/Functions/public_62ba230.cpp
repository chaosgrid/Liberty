#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ba230);
CLANG_FORWARD_PROC_SYMBOL(public_62bb580);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62ba242 _public_62ba242
#define public_62ba269 _public_62ba269

PROC_DECLARE(0x62ba230, internal_62ba230, public_62ba230);
extern "C" NAKED register_t __cdecl internal_62ba230()
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
        je public_62ba269
        public_62ba242 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_62ba230
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_62bb580
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_62ba242
        public_62ba269 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62ba230)
    }
}

#undef public_62ba242
#undef public_62ba269
