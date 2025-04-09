#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_553340);

PROC_DECLARE(0x553340, internal_553340, public_553340);
extern "C" NAKED register_t __cdecl internal_553340()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [public_6798e4], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [public_6798d8], eax
        mov al, byte ptr ss : [esp+0x18]
        test al, al
        mov dword ptr ds : [public_6798e0], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [public_6798dc], edx
        sete dl
        mov dword ptr ds : [public_6798d4], ecx
        mov byte ptr ds : [public_6798d0], dl
        ret 
        UNREACHABLE_TRAP(0x553340)
    }
}
