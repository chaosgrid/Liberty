#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac4fd0);

#define public_6ac503d _public_6ac503d

PROC_DECLARE(0x6ac4fd0, internal_6ac4fd0, public_6ac4fd0);
extern "C" NAKED register_t __cdecl internal_6ac4fd0()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, dword ptr ss : [esp+0x20]
        mov edx, 0x1F
        push esi
        mov eax, dword ptr ss : [ebp+4]
        mov esi, ebx
        sub edx, eax
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov ecx, edx
        shr esi, 1
        shr esi, cl
        mov ecx, eax
        mov dword ptr ss : [esp+0x14], 0
        shl edi, cl
        mov ecx, edx
        or esi, edi
        mov edi, dword ptr ss : [esp+0x24]
        shr edi, 1
        shr edi, cl
        mov ecx, eax
        shl ebx, cl
        or edi, ebx
        mov dword ptr ss : [esp+0x20], esi
        mov ebx, dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0x28], ebx
        mov eax, dword ptr ss : [esp+0x28]
        mul dword ptr ss : [esp+0x20]
        mov ecx, eax
        mov eax, edx
        add ecx, edi
        adc eax, esi
        test edi, 0x80000000
        je public_6ac503d
        shr ebx, 1
        add ecx, ebx
        adc eax, 0
        public_6ac503d : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0x10
        UNREACHABLE_TRAP(0x6ac4fd0)
    }
}

#undef public_6ac503d
