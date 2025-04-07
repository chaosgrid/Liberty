#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6accbd0);
CLANG_FORWARD_PROC_SYMBOL(public_6accca6);
CLANG_FORWARD_PROC_SYMBOL(public_6ace834);
CLANG_FORWARD_PROC_SYMBOL(public_6ace860);
CLANG_FORWARD_PROC_SYMBOL(public_6acea30);
CLANG_FORWARD_PROC_SYMBOL(public_6acea91);

#define public_6accc38 _public_6accc38
#define public_6accc3c _public_6accc3c
#define public_6accc6c _public_6accc6c
#define public_6accc86 _public_6accc86
#define public_6accc8c _public_6accc8c
#define public_6accc9f _public_6accc9f

PROC_DECLARE(0x6accbd0, internal_6accbd0, public_6accbd0);
extern "C" NAKED register_t __cdecl internal_6accbd0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x108
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        push edi
        mov edi, offset public_6ae0c38
        push dword ptr ds : [esi]
        push dword ptr ss : [ebp+8]
        push edi
        call public_6ace860
        test eax, eax
        je public_6accc38
        mov eax, dword ptr ds : [public_6add3c4]
        mov ebx, offset public_6ae0b30
        cmp eax, dword ptr ds : [public_6add3c0]
        jb public_6accc6c
        lea eax, ss:[ebp-8]
        mov dword ptr ss : [ebp+0xC], 0x100
        push eax
        lea eax, ss:[ebp-4]
        push eax
        push edi
        call public_6ace834
        test eax, eax
        je public_6accc38
        lea eax, ss:[ebp+0xC]
        push eax
        lea eax, ss:[ebp-0x108]
        push eax
        push dword ptr ss : [ebp-8]
        push dword ptr ss : [ebp-4]
        call public_6accca6
        test eax, eax
        jne public_6accc3c
        public_6accc38 : nop
        xor eax, eax
        jmp public_6accc9f
        public_6accc3c : nop
        lea eax, ss:[ebp-0x108]
        push eax
        push dword ptr ss : [ebp+0xC]
        push ebx
        call public_6acea91
        mov ecx, dword ptr ss : [ebp+0xC]
        and dword ptr ds : [public_6add3c4], 0
        mov edx, ecx
        xor eax, eax
        lea edi, ss:[ebp-0x108]
        shr ecx, 2
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        public_6accc6c : nop
        mov ecx, dword ptr ds : [public_6add3c0]
        mov eax, ecx
        sub eax, dword ptr ds : [public_6add3c4]
        cmp eax, ecx
        jbe public_6accc86
        and dword ptr ds : [esi], 0
        push 1
        pop eax
        jmp public_6accc9f
        public_6accc86 : nop
        cmp dword ptr ds : [esi], eax
        jbe public_6accc8c
        mov dword ptr ds : [esi], eax
        public_6accc8c : nop
        push dword ptr ss : [ebp+8]
        push dword ptr ds : [esi]
        push ebx
        call public_6acea30
        mov eax, dword ptr ds : [esi]
        add dword ptr ds : [public_6add3c4], eax
        public_6accc9f : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 8
        UNREACHABLE_TRAP(0x6accbd0)
    }
}

#undef public_6accc38
#undef public_6accc3c
#undef public_6accc6c
#undef public_6accc86
#undef public_6accc8c
#undef public_6accc9f
