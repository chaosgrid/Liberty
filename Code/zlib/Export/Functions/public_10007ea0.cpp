#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10007ad0);
CLANG_FORWARD_PROC_SYMBOL(public_10007ea0);

#define public_10007f19 _public_10007f19

PROC_DECLARE(0x10007ea0, internal_10007ea0, public_10007ea0);
extern "C" NAKED register_t __cdecl internal_10007ea0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x16B4]
        cmp ecx, 0xD
        jle public_10007f19
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov edx, esi
        shl edx, cl
        mov ecx, dword ptr ds : [eax+8]
        or word ptr ds : [eax+0x16B0], dx
        mov edx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B0]
        mov byte ptr ds : [ecx+edx], bl
        mov ecx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B1]
        mov edx, dword ptr ds : [eax+8]
        inc ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov byte ptr ds : [ecx+edx], bl
        mov edx, dword ptr ds : [eax+0x16B4]
        mov ebx, dword ptr ds : [eax+0x14]
        mov cl, 0x10
        sub cl, dl
        shr si, cl
        mov ecx, dword ptr ss : [esp+0x14]
        inc ebx
        add edx, 0xFFFFFFF3
        mov word ptr ds : [eax+0x16B0], si
        pop esi
        mov dword ptr ds : [eax+0x14], ebx
        mov dword ptr ds : [eax+0x16B4], edx
        mov edx, dword ptr ss : [esp+0xC]
        pop ebx
        push 1
        call public_10007ad0
        pop ecx
        ret 
        public_10007f19 : nop
        mov edx, dword ptr ss : [esp+0x10]
        shl edx, cl
        add ecx, 3
        mov dword ptr ds : [eax+0x16B4], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        or word ptr ds : [eax+0x16B0], dx
        mov edx, dword ptr ss : [esp+8]
        push 1
        call public_10007ad0
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x10007ea0)
    }
}

#undef public_10007f19
