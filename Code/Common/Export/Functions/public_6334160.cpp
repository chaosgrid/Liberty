#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6334160);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6334172 _public_6334172
#define public_6334191 _public_6334191

PROC_DECLARE(0x6334160, internal_6334160, public_6334160);
extern "C" NAKED register_t __cdecl internal_6334160()
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
        je public_6334191
        public_6334172 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6334160
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6334172
        public_6334191 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6334160)
    }
}

#undef public_6334172
#undef public_6334191
