#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636c260);
CLANG_FORWARD_PROC_SYMBOL(public_636c800);
CLANG_FORWARD_PROC_SYMBOL(public_636c9a0);

#define public_636c9ca _public_636c9ca
#define public_636c9e6 _public_636c9e6

PROC_DECLARE(0x636c9a0, internal_636c9a0, public_636c9a0);
extern "C" NAKED register_t __cdecl internal_636c9a0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        wait 
        fnstcw word ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp-4]
        or eax, 0x300
        mov dword ptr ss : [ebp-4], eax
        fldcw word ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp+8]
        xor eax, eax
        mov ax, word ptr ds : [ecx+2]
        cmp eax, 3
        jge public_636c9ca
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret 
        public_636c9ca : nop
        jne public_636c9e6
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax]
        push ecx
        push edx
        push eax
        call public_636c800
        add esp, 0xC
        mov esp, ebp
        pop ebp
        ret 
        public_636c9e6 : nop
        push ecx
        call public_636c260
        add esp, 4
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x636c9a0)
    }
}

#undef public_636c9ca
#undef public_636c9e6
