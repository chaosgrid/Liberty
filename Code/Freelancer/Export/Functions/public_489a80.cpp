#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a3e0);
CLANG_FORWARD_PROC_SYMBOL(public_4285f0);
CLANG_FORWARD_PROC_SYMBOL(public_489a80);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_553590);
CLANG_FORWARD_PROC_SYMBOL(public_553660);

#define public_489ad0 _public_489ad0
#define public_489b41 _public_489b41

PROC_DECLARE(0x489a80, internal_489a80, public_489a80);
extern "C" NAKED register_t __cdecl internal_489a80()
{
    __asm
    {
        sub esp, 0x18
        push esi
        mov esi, ecx
        call public_41a3e0
        test al, al
        jne public_489b41
        mov eax, dword ptr ds : [public_671f70]
        test eax, eax
        je public_489b41
        call public_54baf0
        test eax, eax
        je public_489ad0
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [public_671f5c]
        push eax
        push ecx
        call public_553660
        add esp, 8
        test al, al
        jne public_489ad0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [public_671f5c]
        push edx
        push eax
        call public_553590
        add esp, 8
        public_489ad0 : nop
        mov ecx, dword ptr ds : [public_671f70]
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x14]
        test eax, eax
        je public_489b41
        mov cl, byte ptr ss : [esp+8]
        mov dl, byte ptr ds : [esi+4]
        and cl, 0xF8
        shl dl, 2
        xor dl, cl
        and dl, 4
        xor cl, dl
        mov byte ptr ss : [esp+8], cl
        add esi, 8
        push esi
        lea ecx, ss:[esp+8]
        push ecx
        push eax
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        call public_4285f0
        mov esi, dword ptr ds : [esi]
        add esp, 0xC
        test esi, esi
        je public_489b41
        mov dword ptr ds : [esi+4], 5
        public_489b41 : nop
        pop esi
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x489a80)
    }
}

#undef public_489ad0
#undef public_489b41
