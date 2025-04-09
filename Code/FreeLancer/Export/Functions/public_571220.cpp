#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_571220);

PROC_DECLARE(0x571220, internal_571220, public_571220);
extern "C" NAKED register_t __cdecl internal_571220()
{
    __asm
    {
        mov dl, byte ptr ss : [esp+4]
        push ebx
        mov eax, ecx
        mov cl, byte ptr ds : [eax]
        mov bl, cl
        xor bl, dl
        mov dl, byte ptr ss : [esp+0xC]
        and bl, 1
        xor bl, cl
        mov cl, byte ptr ss : [esp+0x14]
        shl dl, 1
        xor dl, bl
        and dl, 2
        xor dl, bl
        mov bl, byte ptr ss : [esp+0x10]
        and bl, 1
        and dl, 3
        shl bl, 2
        xor bl, dl
        shl cl, 3
        and cl, 0xF8
        xor bl, cl
        mov ecx, dword ptr ds : [eax+1]
        mov byte ptr ds : [eax], bl
        mov ebx, dword ptr ss : [esp+0x18]
        mov edx, ecx
        xor edx, ebx
        and edx, 0xFFFFFF
        xor edx, ecx
        mov dword ptr ds : [eax+1], edx
        pop ebx
        ret 0x14
        UNREACHABLE_TRAP(0x571220)
    }
}
