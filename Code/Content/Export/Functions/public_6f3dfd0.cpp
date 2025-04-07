#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3df10);
CLANG_FORWARD_PROC_SYMBOL(public_6f3dfd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3e020);

#define public_6f3dffd _public_6f3dffd
#define public_6f3e010 _public_6f3e010

PROC_DECLARE(0x6f3dfd0, internal_6f3dfd0, public_6f3dfd0);
extern "C" NAKED register_t __cdecl internal_6f3dfd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        push edi
        push eax
        call public_6f3e020
        add esp, 8
        test al, al
        je public_6f3e010
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, esi
        call dword ptr ds : [public_6fb3050]
        test al, al
        je public_6f3dffd
        pop edi
        mov al, 1
        pop esi
        ret 
        public_6f3dffd : nop
        push edi
        push esi
        call public_6f3df10
        add esp, 8
        test al, al
        je public_6f3e010
        pop edi
        mov al, 1
        pop esi
        ret 
        public_6f3e010 : nop
        pop edi
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f3dfd0)
    }
}

#undef public_6f3dffd
#undef public_6f3e010
