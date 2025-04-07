#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d45f1d);
CLANG_FORWARD_PROC_SYMBOL(public_6d4c679);

#define public_6d4c6c6 _public_6d4c6c6
#define public_6d4c6dd _public_6d4c6dd
#define public_6d4c71a _public_6d4c71a
#define public_6d4c71f _public_6d4c71f
#define public_6d4c73b _public_6d4c73b
#define public_6d4c751 _public_6d4c751

PROC_DECLARE(0x6d4c679, internal_6d4c679, public_6d4c679);
extern "C" NAKED register_t __cdecl internal_6d4c679()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x14
        mov ecx, dword ptr ss : [ebp+0x14]
        push ebx
        mov ebx, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [ecx+4]
        push esi
        mov esi, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [esi+0x19C]
        add eax, ecx
        movzx ecx, byte ptr ds : [eax+0x8C]
        movzx eax, byte ptr ds : [eax+0x96]
        push edi
        xor edi, edi
        cmp dword ptr ds : [esi+0x110], edi
        mov dword ptr ss : [ebp-0xC], ebx
        mov dword ptr ss : [ebp+0x14], ecx
        mov dword ptr ss : [ebp-4], eax
        mov dword ptr ss : [ebp-8], edi
        jle public_6d4c751
        mov eax, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [ebp+0xC], eax
        public_6d4c6c6 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ebx+edi*4]
        mov ecx, dword ptr ds : [esi+0x5C]
        add ecx, eax
        cmp eax, ecx
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp-0x14], ecx
        jae public_6d4c71f
        public_6d4c6dd : nop
        mov al, byte ptr ds : [edx]
        inc edx
        cmp dword ptr ss : [ebp+0x14], 0
        mov dword ptr ss : [ebp-0x10], edx
        jle public_6d4c71a
        mov ecx, dword ptr ss : [ebp+0x14]
        mov edi, dword ptr ss : [ebp+8]
        mov bl, al
        mov bh, bl
        mov edx, ecx
        shr ecx, 2
        mov eax, ebx
        shl eax, 0x10
        mov ax, bx
        mov ebx, dword ptr ss : [ebp-0xC]
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        mov edi, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ss : [ebp-0x14]
        mov eax, edx
        add dword ptr ss : [ebp+8], eax
        mov edx, dword ptr ss : [ebp-0x10]
        public_6d4c71a : nop
        cmp dword ptr ss : [ebp+8], ecx
        jb public_6d4c6dd
        public_6d4c71f : nop
        mov eax, dword ptr ss : [ebp-4]
        cmp eax, 1
        jle public_6d4c73b
        push dword ptr ds : [esi+0x5C]
        dec eax
        push eax
        lea eax, ds:[edi+1]
        push eax
        push ebx
        push edi
        push ebx
        call public_6d45f1d
        add esp, 0x18
        public_6d4c73b : nop
        add edi, dword ptr ss : [ebp-4]
        add dword ptr ss : [ebp+0xC], 4
        cmp edi, dword ptr ds : [esi+0x110]
        mov dword ptr ss : [ebp-8], edi
        jl public_6d4c6c6
        public_6d4c751 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4c679)
    }
}

#undef public_6d4c6c6
#undef public_6d4c6dd
#undef public_6d4c71a
#undef public_6d4c71f
#undef public_6d4c73b
#undef public_6d4c751
