#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f93f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4f941f _public_4f941f
#define public_4f944d _public_4f944d

PROC_DECLARE(0x4f93f0, internal_4f93f0, public_4f93f0);
extern "C" NAKED register_t __cdecl internal_4f93f0()
{
    __asm
    {
        mov cl, byte ptr ds : [public_674c78]
        mov al, 1
        test al, cl
        jne public_4f944d
        mov dl, cl
        or dl, al
        mov eax, dword ptr ds : [public_674c94]
        test eax, eax
        mov byte ptr ds : [public_674c78], dl
        je public_4f941f
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_674c94], 0
        public_4f941f : nop
        mov edx, dword ptr ds : [public_674c80]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ds : [public_674c8c]
        push eax
        mov dword ptr ds : [public_674c80], 0
        call public_5b7e1d
        add esp, 8
        mov dword ptr ds : [public_674c8c], 0
        public_4f944d : nop
        ret 
        UNREACHABLE_TRAP(0x4f93f0)
    }
}

#undef public_4f941f
#undef public_4f944d
