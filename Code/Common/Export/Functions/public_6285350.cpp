#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62814f0);
CLANG_FORWARD_PROC_SYMBOL(public_6285350);
CLANG_FORWARD_PROC_SYMBOL(public_6345450);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6285366 _public_6285366
#define public_6285384 _public_6285384
#define public_628539d _public_628539d
#define public_62853ab _public_62853ab

PROC_DECLARE(0x6285350, internal_6285350, public_6285350);
extern "C" NAKED register_t __cdecl internal_6285350()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [esi+0x60]
        xor ebx, ebx
        cmp ecx, ebx
        je public_6285366
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x18]
        public_6285366 : nop
        push edi
        mov edi, dword ptr ds : [esi+0x84]
        cmp edi, ebx
        mov dword ptr ds : [esi+0x60], ebx
        je public_6285384
        mov ecx, edi
        call public_62814f0
        push edi
        call public_6391d5a
        add esp, 4
        public_6285384 : nop
        mov ecx, dword ptr ds : [esi+0x54]
        cmp ecx, ebx
        mov dword ptr ds : [esi+0x84], ebx
        pop edi
        je public_628539d
        mov dword ptr ds : [esi+0x54], ebx
        mov dword ptr ds : [esi+0x50], ebx
        call public_6345450
        public_628539d : nop
        mov ecx, dword ptr ds : [esi+0x5C]
        cmp ecx, ebx
        je public_62853ab
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+0x24]
        public_62853ab : nop
        mov dword ptr ds : [esi+0x5C], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6285350)
    }
}

#undef public_6285366
#undef public_6285384
#undef public_628539d
#undef public_62853ab
