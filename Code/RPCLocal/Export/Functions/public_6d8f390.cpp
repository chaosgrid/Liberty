#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d85b60);
CLANG_FORWARD_PROC_SYMBOL(public_6d88280);

#define public_6d8f3bb _public_6d8f3bb

PROC_DECLARE(0x6d8f390, internal_6d8f390, public_6d8f390);
extern "C" NAKED register_t __cdecl internal_6d8f390()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6dbbd58]
        test eax, eax
        jne public_6d8f3bb
        call public_6d88280
        test eax, eax
        mov dword ptr ds : [public_6dbbd58], eax
        je public_6d8f3bb
        push 1
        mov ecx, eax
        call public_6d85b60
        test eax, eax
        jne public_6d8f3bb
        mov byte ptr ds : [public_6dbbd19], 1
        public_6d8f3bb : nop
        mov ecx, dword ptr ds : [public_6dbbd5c]
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0x3C]
        UNREACHABLE_TRAP(0x6d8f390)
    }
}

#undef public_6d8f3bb
