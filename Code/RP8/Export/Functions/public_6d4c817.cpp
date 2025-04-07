#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4c817);

#define public_6d4c83c _public_6d4c83c
#define public_6d4c865 _public_6d4c865
#define public_6d4c88c _public_6d4c88c
#define public_6d4c8b8 _public_6d4c8b8

PROC_DECLARE(0x6d4c817, internal_6d4c817, public_6d4c817);
extern "C" NAKED register_t __cdecl internal_6d4c817()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr ss : [ebp+0x14]
        and dword ptr ss : [ebp+0x14], 0
        push esi
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x110], 0
        jle public_6d4c8b8
        push ebx
        mov ebx, dword ptr ss : [ebp+0x10]
        push edi
        sub ebx, esi
        public_6d4c83c : nop
        mov eax, dword ptr ds : [ebx+esi]
        movzx edx, byte ptr ds : [eax]
        mov ecx, dword ptr ds : [esi]
        mov byte ptr ds : [ecx], dl
        inc eax
        movzx edi, byte ptr ds : [eax]
        lea edx, ds:[edx+edx*2]
        lea edx, ds:[edx+edi+2]
        sar edx, 2
        inc ecx
        mov byte ptr ds : [ecx], dl
        mov edx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [edx+0x28]
        inc ecx
        dec edx
        dec edx
        je public_6d4c88c
        mov dword ptr ss : [ebp-4], edx
        public_6d4c865 : nop
        movzx edi, byte ptr ds : [eax]
        movzx edx, byte ptr ds : [eax-1]
        inc eax
        lea edi, ds:[edi+edi*2]
        lea edx, ds:[edx+edi+1]
        sar edx, 2
        mov byte ptr ds : [ecx], dl
        movzx edx, byte ptr ds : [eax]
        inc ecx
        lea edx, ds:[edx+edi+2]
        sar edx, 2
        mov byte ptr ds : [ecx], dl
        inc ecx
        dec dword ptr ss : [ebp-4]
        jne public_6d4c865
        public_6d4c88c : nop
        movzx edx, byte ptr ds : [eax]
        movzx eax, byte ptr ds : [eax-1]
        lea edi, ds:[edx+edx*2]
        lea eax, ds:[eax+edi+1]
        sar eax, 2
        inc dword ptr ss : [ebp+0x14]
        mov byte ptr ds : [ecx], al
        mov eax, dword ptr ss : [ebp+8]
        mov byte ptr ds : [ecx+1], dl
        mov ecx, dword ptr ss : [ebp+0x14]
        add esi, 4
        cmp ecx, dword ptr ds : [eax+0x110]
        jl public_6d4c83c
        pop edi
        pop ebx
        public_6d4c8b8 : nop
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4c817)
    }
}

#undef public_6d4c83c
#undef public_6d4c865
#undef public_6d4c88c
#undef public_6d4c8b8
