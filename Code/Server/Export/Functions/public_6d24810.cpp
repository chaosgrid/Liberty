#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d24810);

#define public_6d24827 _public_6d24827
#define public_6d2484f _public_6d2484f
#define public_6d24851 _public_6d24851
#define public_6d2486a _public_6d2486a

PROC_DECLARE(0x6d24810, internal_6d24810, public_6d24810);
extern "C" NAKED register_t __cdecl internal_6d24810()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        xor ecx, ecx
        cmp eax, edi
        je public_6d2486a
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        public_6d24827 : nop
        mov edx, dword ptr ds : [esi]
        mov ax, word ptr ds : [edx]
        cmp ax, 0x30
        jb public_6d2484f
        cmp ax, 0x39
        ja public_6d2484f
        cmp ebx, ecx
        jbe public_6d24851
        movzx eax, ax
        lea ecx, ds:[ecx+ecx*4]
        lea ecx, ds:[eax+ecx*2-0x30]
        lea eax, ds:[edx+2]
        cmp eax, edi
        mov dword ptr ds : [esi], eax
        jne public_6d24827
        public_6d2484f : nop
        cmp ebx, ecx
        public_6d24851 : nop
        pop ebx
        jae public_6d2486a
        mov eax, 0xCCCCCCCD
        mul ecx
        mov ecx, dword ptr ds : [esi]
        mov eax, edx
        shr eax, 3
        add ecx, 0xFFFFFFFE
        pop edi
        mov dword ptr ds : [esi], ecx
        pop esi
        ret 
        public_6d2486a : nop
        pop edi
        mov eax, ecx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d24810)
    }
}

#undef public_6d24827
#undef public_6d2484f
#undef public_6d24851
#undef public_6d2486a
