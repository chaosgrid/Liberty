#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acff50);

#define public_6acff72 _public_6acff72
#define public_6acff80 _public_6acff80
#define public_6acffae _public_6acffae
#define public_6acffaf _public_6acffaf
#define public_6acffb3 _public_6acffb3

PROC_DECLARE(0x6acff50, internal_6acff50, public_6acff50);
extern "C" NAKED register_t __cdecl internal_6acff50()
{
    __asm
    {
        push ebx
        push esi
        mov eax, dword ptr ss : [esp+0x18]
        or eax, eax
        jne public_6acff72
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        xor edx, edx
        div ecx
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0xC]
        div ecx
        mov edx, ebx
        jmp public_6acffb3
        public_6acff72 : nop
        mov ecx, eax
        mov ebx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0xC]
        public_6acff80 : nop
        shr ecx, 1
        rcr ebx, 1
        shr edx, 1
        rcr eax, 1
        or ecx, ecx
        jne public_6acff80
        div ebx
        mov esi, eax
        mul dword ptr ss : [esp+0x18]
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0x14]
        mul esi
        add edx, ecx
        jb public_6acffae
        cmp edx, dword ptr ss : [esp+0x10]
        ja public_6acffae
        jb public_6acffaf
        cmp eax, dword ptr ss : [esp+0xC]
        jbe public_6acffaf
        public_6acffae : nop
        dec esi
        public_6acffaf : nop
        xor edx, edx
        mov eax, esi
        public_6acffb3 : nop
        pop esi
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6acff50)
    }
}

#undef public_6acff72
#undef public_6acff80
#undef public_6acffae
#undef public_6acffaf
#undef public_6acffb3
