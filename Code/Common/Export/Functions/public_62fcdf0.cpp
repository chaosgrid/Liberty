#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcdf0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62fce02 _public_62fce02
#define public_62fce21 _public_62fce21

PROC_DECLARE(0x62fcdf0, internal_62fcdf0, public_62fcdf0);
extern "C" NAKED register_t __cdecl internal_62fcdf0()
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
        je public_62fce21
        public_62fce02 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_62fcdf0
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_62fce02
        public_62fce21 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62fcdf0)
    }
}

#undef public_62fce02
#undef public_62fce21
