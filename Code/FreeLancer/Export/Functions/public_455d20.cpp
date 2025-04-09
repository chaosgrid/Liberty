#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_455d20);

#define public_455d35 _public_455d35
#define public_455d51 _public_455d51
#define public_455d5b _public_455d5b

PROC_DECLARE(0x455d20, internal_455d20, public_455d20);
extern "C" NAKED register_t __cdecl internal_455d20()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x134]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_455d5b
        mov ebx, dword ptr ss : [esp+0x10]
        public_455d35 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x18]
        cmp eax, ebx
        je public_455d51
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0x134]
        jne public_455d35
        pop edi
        pop esi
        pop ebx
        ret 8
        public_455d51 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov dl, byte ptr ss : [esp+0x14]
        mov byte ptr ds : [ecx+0x48], dl
        public_455d5b : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x455d20)
    }
}

#undef public_455d35
#undef public_455d51
#undef public_455d5b
