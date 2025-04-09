#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4ca910);

#define public_4ca923 _public_4ca923

PROC_DECLARE(0x4ca910, internal_4ca910, public_4ca910);
extern "C" NAKED register_t __cdecl internal_4ca910()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        xor ebx, ebx
        cmp eax, ebx
        je public_4ca923
        push ebx
        call dword ptr ds : [public_5c62a8]
        public_4ca923 : nop
        mov al, 1
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        mov byte ptr ds : [esi+0x14], bl
        mov byte ptr ds : [esi+0x15], bl
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov byte ptr ds : [esi+8], al
        mov byte ptr ds : [esi+0x20], al
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4ca910)
    }
}

#undef public_4ca923
