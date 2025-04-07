#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acff18);
CLANG_FORWARD_PROC_SYMBOL(public_6ad07b3);
CLANG_FORWARD_PROC_SYMBOL(public_6ad0953);
CLANG_FORWARD_PROC_SYMBOL(public_6ad23f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ad2700);
CLANG_FORWARD_PROC_SYMBOL(public_6ad3f40);
CLANG_FORWARD_PROC_SYMBOL(public_6ad6402);

#define public_6ad2712 _public_6ad2712
#define public_6ad271a _public_6ad271a
#define public_6ad2725 _public_6ad2725
#define public_6ad2732 _public_6ad2732
#define public_6ad2754 _public_6ad2754
#define public_6ad275f _public_6ad275f
#define public_6ad2783 _public_6ad2783
#define public_6ad2790 _public_6ad2790
#define public_6ad2797 _public_6ad2797

PROC_DECLARE(0x6ad2700, internal_6ad2700, public_6ad2700);
extern "C" NAKED register_t __cdecl internal_6ad2700()
{
    __asm
    {
        push ebx
        xor ebx, ebx
        cmp dword ptr ds : [public_6ae2590], ebx
        push esi
        push edi
        jne public_6ad2712
        call public_6ad6402
        public_6ad2712 : nop
        mov esi, dword ptr ds : [public_6ae0e98]
        xor edi, edi
        public_6ad271a : nop
        mov al, byte ptr ds : [esi]
        cmp al, bl
        je public_6ad2732
        cmp al, 0x3D
        je public_6ad2725
        inc edi
        public_6ad2725 : nop
        push esi
        call public_6ad23f0
        pop ecx
        lea esi, ds:[esi+eax+1]
        jmp public_6ad271a
        public_6ad2732 : nop
        lea eax, ds:[edi*4+4]
        push eax
        call public_6ad0953
        mov esi, eax
        pop ecx
        cmp esi, ebx
        mov dword ptr ds : [public_6ae0ec8], esi
        jne public_6ad2754
        push 9
        call public_6acff18
        pop ecx
        public_6ad2754 : nop
        mov edi, dword ptr ds : [public_6ae0e98]
        cmp byte ptr ds : [edi], bl
        je public_6ad2797
        push ebp
        public_6ad275f : nop
        push edi
        call public_6ad23f0
        mov ebp, eax
        pop ecx
        inc ebp
        cmp byte ptr ds : [edi], 0x3D
        je public_6ad2790
        push ebp
        call public_6ad0953
        cmp eax, ebx
        pop ecx
        mov dword ptr ds : [esi], eax
        jne public_6ad2783
        push 9
        call public_6acff18
        pop ecx
        public_6ad2783 : nop
        push edi
        push dword ptr ds : [esi]
        call public_6ad3f40
        pop ecx
        add esi, 4
        pop ecx
        public_6ad2790 : nop
        add edi, ebp
        cmp byte ptr ds : [edi], bl
        jne public_6ad275f
        pop ebp
        public_6ad2797 : nop
        push dword ptr ds : [public_6ae0e98]
        call public_6ad07b3
        pop ecx
        mov dword ptr ds : [public_6ae0e98], ebx
        mov dword ptr ds : [esi], ebx
        pop edi
        pop esi
        mov dword ptr ds : [public_6ae258c], 1
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ad2700)
    }
}

#undef public_6ad2712
#undef public_6ad271a
#undef public_6ad2725
#undef public_6ad2732
#undef public_6ad2754
#undef public_6ad275f
#undef public_6ad2783
#undef public_6ad2790
#undef public_6ad2797
