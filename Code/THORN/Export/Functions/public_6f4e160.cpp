#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4e160);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e210);

#define public_6f4e17d _public_6f4e17d
#define public_6f4e1c6 _public_6f4e1c6

PROC_DECLARE(0x6f4e160, internal_6f4e160, public_6f4e160);
extern "C" NAKED register_t __cdecl internal_6f4e160()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        push edi
        call public_6f4e210
        mov ebx, dword ptr ss : [esp+0x1C]
        push ebx
        call public_6f4e210
        add esp, 8
        xor esi, esi
        public_6f4e17d : nop
        push esi
        push edi
        call public_6f4e1e0
        add esp, 8
        test eax, eax
        je public_6f4e1c6
        mov eax, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [eax+0x64]
        lea ecx, ds:[ebx+ebx*8]
        shl ecx, 1
        mov edx, esi
        sub edx, ecx
        lea ecx, ds:[edi+edi*8]
        shl ecx, 1
        shl edx, 4
        mov ebp, esi
        sub ebp, ecx
        shl ebp, 4
        add edx, eax
        add ebp, eax
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp+4], ecx
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp+8], eax
        mov ecx, dword ptr ds : [edx+0xC]
        mov dword ptr ss : [ebp+0xC], ecx
        public_6f4e1c6 : nop
        inc esi
        cmp esi, 0x12
        jl public_6f4e17d
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f4e160)
    }
}

#undef public_6f4e17d
#undef public_6f4e1c6
