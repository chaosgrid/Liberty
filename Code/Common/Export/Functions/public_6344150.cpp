#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6344150);

#define public_634415b _public_634415b
#define public_6344168 _public_6344168
#define public_6344175 _public_6344175
#define public_634417b _public_634417b

PROC_DECLARE(0x6344150, internal_6344150, public_6344150);
extern "C" NAKED register_t __cdecl internal_6344150()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        push edi
        je public_634417b
        public_634415b : nop
        cmp word ptr ds : [esi+0x12], 0
        mov edi, dword ptr ds : [eax]
        je public_6344168
        cmp eax, dword ptr ds : [esi]
        je public_634417b
        public_6344168 : nop
        test eax, eax
        je public_6344175
        push eax
        call public_6343fb0
        add esp, 4
        public_6344175 : nop
        test edi, edi
        mov eax, edi
        jne public_634415b
        public_634417b : nop
        pop edi
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6344150)
    }
}

#undef public_634415b
#undef public_6344168
#undef public_6344175
#undef public_634417b
