#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629ae10);
CLANG_FORWARD_PROC_SYMBOL(public_6309b20);
CLANG_FORWARD_PROC_SYMBOL(public_6309b30);
CLANG_FORWARD_PROC_SYMBOL(public_6309b50);
CLANG_FORWARD_PROC_SYMBOL(public_6332f50);
CLANG_FORWARD_PROC_SYMBOL(public_633bad0);

#define public_629ae72 _public_629ae72

PROC_DECLARE(0x629ae10, internal_629ae10, public_629ae10);
extern "C" NAKED register_t __cdecl internal_629ae10()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        xor bl, bl
        call dword ptr ds : [eax+8]
        test al, al
        jne public_629ae72
        xor ecx, ecx
        mov cx, word ptr ds : [esi+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        push ecx
        mov ecx, edi
        call public_6309b20
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x44]
        push ecx
        mov ecx, edi
        fstp dword ptr ss : [esp]
        call public_6332f50
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax+8]
        push ecx
        mov ecx, edi
        call public_6309b30
        push 1
        mov ecx, edi
        call public_633bad0
        push 1
        mov ecx, edi
        call public_6309b50
        mov dl, byte ptr ds : [esi+0x12]
        mov byte ptr ds : [edi+0x18], dl
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_629ae72 : nop
        pop esi
        mov al, bl
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x629ae10)
    }
}

#undef public_629ae72
