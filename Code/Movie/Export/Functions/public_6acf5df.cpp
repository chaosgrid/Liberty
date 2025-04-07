#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf42b);
CLANG_FORWARD_PROC_SYMBOL(public_6acf5df);
CLANG_FORWARD_PROC_SYMBOL(public_6ad0a8d);

#define public_6acf602 _public_6acf602
#define public_6acf640 _public_6acf640
#define public_6acf64f _public_6acf64f

PROC_DECLARE(0x6acf5df, internal_6acf5df, public_6acf5df);
extern "C" NAKED register_t __cdecl internal_6acf5df()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cld 
        mov eax, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [eax+4]
        and eax, 0x66
        test eax, eax
        je public_6acf602
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax+0x24], 1
        push 1
        pop eax
        jmp public_6acf64f
        public_6acf602 : nop
        push 1
        mov eax, dword ptr ss : [ebp+0xC]
        push dword ptr ds : [eax+0x14]
        mov eax, dword ptr ss : [ebp+0xC]
        push dword ptr ds : [eax+0x10]
        mov eax, dword ptr ss : [ebp+0xC]
        push dword ptr ds : [eax+8]
        push 0
        push dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ss : [ebp+0xC]
        push dword ptr ds : [eax+0xC]
        push dword ptr ss : [ebp+8]
        call public_6ad0a8d
        add esp, 0x20
        mov eax, dword ptr ss : [ebp+0xC]
        cmp dword ptr ds : [eax+0x24], 0
        jne public_6acf640
        push dword ptr ss : [ebp+8]
        push dword ptr ss : [ebp+0xC]
        call public_6acf42b
        public_6acf640 : nop
        mov ebx, dword ptr ss : [ebp+0xC]
        mov esp, dword ptr ds : [ebx+0x1C]
        mov ebp, dword ptr ds : [ebx+0x20]
        jmp dword ptr ds : [ebx+0x18]
        push 1
        pop eax
        public_6acf64f : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6acf5df)
    }
}

#undef public_6acf602
#undef public_6acf640
#undef public_6acf64f
