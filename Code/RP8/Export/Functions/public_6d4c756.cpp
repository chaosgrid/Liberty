#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4c756);

#define public_6d4c779 _public_6d4c779
#define public_6d4c787 _public_6d4c787
#define public_6d4c797 _public_6d4c797
#define public_6d4c7a9 _public_6d4c7a9

PROC_DECLARE(0x6d4c756, internal_6d4c756, public_6d4c756);
extern "C" NAKED register_t __cdecl internal_6d4c756()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ss : [ebp+0x14]
        and dword ptr ss : [ebp+0x14], 0
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [ebx+0x110], 0
        push esi
        mov esi, dword ptr ds : [eax]
        jle public_6d4c7a9
        mov edx, dword ptr ss : [ebp+0x10]
        sub edx, esi
        mov dword ptr ss : [ebp+8], edx
        push edi
        public_6d4c779 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [ebx+0x5C]
        mov edi, dword ptr ds : [edx+esi]
        add ecx, eax
        cmp eax, ecx
        jae public_6d4c797
        public_6d4c787 : nop
        mov dl, byte ptr ds : [edi]
        inc edi
        mov byte ptr ds : [eax], dl
        inc eax
        mov byte ptr ds : [eax], dl
        inc eax
        cmp eax, ecx
        jb public_6d4c787
        mov edx, dword ptr ss : [ebp+8]
        public_6d4c797 : nop
        inc dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ss : [ebp+0x14]
        add esi, 4
        cmp eax, dword ptr ds : [ebx+0x110]
        jl public_6d4c779
        pop edi
        public_6d4c7a9 : nop
        pop esi
        pop ebx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d4c756)
    }
}

#undef public_6d4c779
#undef public_6d4c787
#undef public_6d4c797
#undef public_6d4c7a9
