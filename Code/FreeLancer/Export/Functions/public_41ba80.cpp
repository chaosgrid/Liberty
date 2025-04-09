#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41ba80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_41ba92 _public_41ba92
#define public_41bab1 _public_41bab1

PROC_DECLARE(0x41ba80, internal_41ba80, public_41ba80);
extern "C" NAKED register_t __cdecl internal_41ba80()
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
        je public_41bab1
        public_41ba92 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_41ba80
        mov esi, dword ptr ds : [esi]
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_41ba92
        public_41bab1 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x41ba80)
    }
}

#undef public_41ba92
#undef public_41bab1
