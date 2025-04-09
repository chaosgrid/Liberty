#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42e290);

#define public_42e2e6 _public_42e2e6

PROC_DECLARE(0x42e290, internal_42e290, public_42e290);
extern "C" NAKED register_t __cdecl internal_42e290()
{
    __asm
    {
        mov al, byte ptr ds : [public_667e14]
        test al, al
        jne public_42e2e6
        mov eax, dword ptr ds : [public_5c6d78]
        mov byte ptr ds : [public_667e14], 1
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_42e2e6
        mov edx, dword ptr ds : [public_5c6ddc]
        mov edx, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [public_5c6ddc]
        mov eax, dword ptr ds : [public_5c6d78]
        mov edx, dword ptr ds : [edx]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ds : [public_5c6dd4]
        mov eax, dword ptr ds : [public_5c6d78]
        mov edx, dword ptr ds : [edx]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x14]
        public_42e2e6 : nop
        ret 
        UNREACHABLE_TRAP(0x42e290)
    }
}

#undef public_42e2e6
