#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7ef0);
CLANG_FORWARD_PROC_SYMBOL(public_65d7f23);
CLANG_FORWARD_PROC_SYMBOL(public_65d8120);
CLANG_FORWARD_PROC_SYMBOL(public_65d8535);
CLANG_FORWARD_PROC_SYMBOL(public_65db3c4);
CLANG_FORWARD_PROC_SYMBOL(public_65dd010);
CLANG_FORWARD_PROC_SYMBOL(public_65de299);

#define public_65db3d6 _public_65db3d6
#define public_65db3de _public_65db3de
#define public_65db3e9 _public_65db3e9
#define public_65db3f6 _public_65db3f6
#define public_65db418 _public_65db418
#define public_65db423 _public_65db423
#define public_65db447 _public_65db447
#define public_65db454 _public_65db454
#define public_65db45b _public_65db45b

PROC_DECLARE(0x65db3c4, internal_65db3c4, public_65db3c4);
extern "C" NAKED register_t __cdecl internal_65db3c4()
{
    __asm
    {
        push ebx
        xor ebx, ebx
        cmp dword ptr ds : [public_65e7a48], ebx
        push esi
        push edi
        jne public_65db3d6
        call public_65de299
        public_65db3d6 : nop
        mov esi, dword ptr ds : [public_65e6124]
        xor edi, edi
        public_65db3de : nop
        mov al, byte ptr ds : [esi]
        cmp al, bl
        je public_65db3f6
        cmp al, 0x3D
        je public_65db3e9
        inc edi
        public_65db3e9 : nop
        push esi
        call public_65d8120
        pop ecx
        lea esi, ds:[esi+eax+1]
        jmp public_65db3de
        public_65db3f6 : nop
        lea eax, ds:[edi*4+4]
        push eax
        call public_65d8535
        mov esi, eax
        pop ecx
        cmp esi, ebx
        mov dword ptr ds : [public_65e6154], esi
        jne public_65db418
        push 9
        call public_65d7ef0
        pop ecx
        public_65db418 : nop
        mov edi, dword ptr ds : [public_65e6124]
        cmp byte ptr ds : [edi], bl
        je public_65db45b
        push ebp
        public_65db423 : nop
        push edi
        call public_65d8120
        mov ebp, eax
        pop ecx
        inc ebp
        cmp byte ptr ds : [edi], 0x3D
        je public_65db454
        push ebp
        call public_65d8535
        cmp eax, ebx
        pop ecx
        mov dword ptr ds : [esi], eax
        jne public_65db447
        push 9
        call public_65d7ef0
        pop ecx
        public_65db447 : nop
        push edi
        push dword ptr ds : [esi]
        call public_65dd010
        pop ecx
        add esi, 4
        pop ecx
        public_65db454 : nop
        add edi, ebp
        cmp byte ptr ds : [edi], bl
        jne public_65db423
        pop ebp
        public_65db45b : nop
        push dword ptr ds : [public_65e6124]
        call public_65d7f23
        pop ecx
        mov dword ptr ds : [public_65e6124], ebx
        mov dword ptr ds : [esi], ebx
        pop edi
        pop esi
        mov dword ptr ds : [public_65e7a44], 1
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x65db3c4)
    }
}

#undef public_65db3d6
#undef public_65db3de
#undef public_65db3e9
#undef public_65db3f6
#undef public_65db418
#undef public_65db423
#undef public_65db447
#undef public_65db454
#undef public_65db45b
