#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac1500);
CLANG_FORWARD_PROC_SYMBOL(public_6ad984f);
CLANG_FORWARD_PROC_SYMBOL(public_6ad99d1);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9c32);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9c54);
CLANG_FORWARD_JUMP_SYMBOL(public_6ad9cf8);

PROC_DECLARE(0x6ad984f, internal_6ad984f, public_6ad984f);
extern "C" NAKED register_t __cdecl internal_6ad984f()
{
    __asm
    {
        mov eax, public_6ad9cf8
        call public_6ad9c54
        push ecx
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        push esi
        push edi
        mov esi, ecx
        push ebx
        mov dword ptr ss : [ebp-0x10], esi
        call public_6ad9c32
        mov al, byte ptr ds : [ebx+0xC]
        and dword ptr ss : [ebp-4], 0
        add ebx, 0xC
        lea edi, ds:[esi+0xC]
        push 0
        mov ecx, edi
        mov byte ptr ds : [edi], al
        call public_6ac1500
        push dword ptr ds : [public_6adb180]
        mov ecx, edi
        push 0
        push ebx
        call public_6ad99d1
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [esi], offset public_6adb174
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        leave 
        ret 4
        UNREACHABLE_TRAP(0x6ad984f)
    }
}
