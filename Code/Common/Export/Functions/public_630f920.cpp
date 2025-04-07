#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630f920);

#define public_630f950 _public_630f950
#define public_630f957 _public_630f957
#define public_630f965 _public_630f965

PROC_DECLARE(0x630f920, internal_630f920, public_630f920);
extern "C" NAKED register_t __cdecl internal_630f920()
{
    __asm
    {
        mov dl, byte ptr ds : [ecx+0x1564]
        xor eax, eax
        cmp dl, al
        je public_630f957
        cmp dword ptr ds : [ecx+0x1440], eax
        mov dword ptr ds : [ecx+0x1454], eax
        mov dword ptr ds : [ecx+0x145C], eax
        je public_630f965
        mov eax, dword ptr ds : [ecx+0x1444]
        cmp eax, 0xC
        jb public_630f950
        mov eax, 0xC
        public_630f950 : nop
        mov dword ptr ds : [ecx+0x1448], eax
        ret 
        public_630f957 : nop
        cmp dword ptr ds : [ecx+0x18], eax
        mov dword ptr ds : [ecx+0x24], eax
        mov byte ptr ds : [ecx+0x28], al
        je public_630f965
        mov dword ptr ds : [ecx+0x20], eax
        public_630f965 : nop
        ret 
        UNREACHABLE_TRAP(0x630f920)
    }
}

#undef public_630f950
#undef public_630f957
#undef public_630f965
