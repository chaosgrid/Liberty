#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629ae80);

PROC_DECLARE(0x629ae80, internal_629ae80, public_629ae80);
extern "C" NAKED register_t __cdecl internal_629ae80()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        call dword ptr ds : [eax+8]
        mov edi, dword ptr ss : [esp+0xC]
        mov cl, byte ptr ds : [edi]
        shl al, 1
        xor al, cl
        and al, 2
        xor al, cl
        mov byte ptr ds : [edi], al
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+4]
        mov cl, byte ptr ds : [edi]
        mov dl, cl
        xor dl, al
        and dl, 1
        xor dl, cl
        mov byte ptr ds : [edi], dl
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x10]
        mov cl, byte ptr ds : [edi]
        shl al, 2
        xor al, cl
        and al, 4
        xor al, cl
        mov byte ptr ds : [edi], al
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x629ae80)
    }
}
