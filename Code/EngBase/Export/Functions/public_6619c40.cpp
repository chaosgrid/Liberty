#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6612b20);
CLANG_FORWARD_PROC_SYMBOL(public_6619c40);

#define public_6619c52 _public_6619c52
#define public_6619c68 _public_6619c68
#define public_6619c6c _public_6619c6c
#define public_6619c70 _public_6619c70

PROC_DECLARE(0x6619c40, internal_6619c40, public_6619c40);
extern "C" NAKED register_t __cdecl internal_6619c40()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        push ebx
        push esi
        push edi
        mov esi, dword ptr ds : [eax+4]
        mov edi, dword ptr ds : [ecx+8]
        cmp esi, edi
        mov ebx, eax
        je public_6619c70
        public_6619c52 : nop
        mov eax, dword ptr ss : [esp+0x14]
        lea ecx, ds:[esi+0xC]
        push eax
        call public_6612b20
        test al, al
        je public_6619c68
        mov esi, dword ptr ds : [esi+8]
        jmp public_6619c6c
        public_6619c68 : nop
        mov ebx, esi
        mov esi, dword ptr ds : [esi]
        public_6619c6c : nop
        cmp esi, edi
        jne public_6619c52
        public_6619c70 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6619c40)
    }
}

#undef public_6619c52
#undef public_6619c68
#undef public_6619c6c
#undef public_6619c70
