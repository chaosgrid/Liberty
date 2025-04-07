#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d45f1d);
CLANG_FORWARD_PROC_SYMBOL(public_6d4c7ad);

#define public_6d4c7cf _public_6d4c7cf
#define public_6d4c7e0 _public_6d4c7e0
#define public_6d4c7f0 _public_6d4c7f0
#define public_6d4c812 _public_6d4c812

PROC_DECLARE(0x6d4c7ad, internal_6d4c7ad, public_6d4c7ad);
extern "C" NAKED register_t __cdecl internal_6d4c7ad()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr ss : [ebp+0x14]
        push ebx
        mov ebx, dword ptr ds : [eax]
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+8]
        xor esi, esi
        cmp dword ptr ds : [edi+0x110], esi
        mov dword ptr ss : [ebp-4], ebx
        jle public_6d4c812
        mov eax, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [ebp+0x14], eax
        public_6d4c7cf : nop
        mov eax, dword ptr ss : [ebp+0x14]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ebx+esi*4]
        mov eax, dword ptr ds : [edi+0x5C]
        add eax, ecx
        cmp ecx, eax
        jae public_6d4c7f0
        public_6d4c7e0 : nop
        mov bl, byte ptr ds : [edx]
        inc edx
        mov byte ptr ds : [ecx], bl
        inc ecx
        mov byte ptr ds : [ecx], bl
        inc ecx
        cmp ecx, eax
        jb public_6d4c7e0
        mov ebx, dword ptr ss : [ebp-4]
        public_6d4c7f0 : nop
        push dword ptr ds : [edi+0x5C]
        lea eax, ds:[esi+1]
        push 1
        push eax
        push ebx
        push esi
        push ebx
        call public_6d45f1d
        add dword ptr ss : [ebp+0x14], 4
        add esp, 0x18
        inc esi
        inc esi
        cmp esi, dword ptr ds : [edi+0x110]
        jl public_6d4c7cf
        public_6d4c812 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4c7ad)
    }
}

#undef public_6d4c7cf
#undef public_6d4c7e0
#undef public_6d4c7f0
#undef public_6d4c812
