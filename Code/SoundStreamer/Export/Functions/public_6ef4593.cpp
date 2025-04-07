#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4593);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6b4c);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6c0c);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6f11);

PROC_DECLARE(0x6ef4593, internal_6ef4593, public_6ef4593);
extern "C" NAKED register_t __cdecl internal_6ef4593()
{
    __asm
    {
        mov eax, offset _public_6ef6f11
        mov dword ptr ds : [public_6f00534], offset public_6ef6ba6
        mov dword ptr ds : [public_6f00530], eax
        mov dword ptr ds : [public_6f00538], offset _public_6ef6c0c
        mov dword ptr ds : [public_6f0053c], offset _public_6ef6b4c
        mov dword ptr ds : [public_6f00540], offset public_6ef6bf4
        mov dword ptr ds : [public_6f00544], eax
        ret 
        UNREACHABLE_TRAP(0x6ef4593)
    }
}
