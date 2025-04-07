#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7c9e);
CLANG_FORWARD_PROC_SYMBOL(public_65db0f2);

#define public_65d7d03 _public_65d7d03
#define public_65d7d2c _public_65d7d2c
#define public_65d7d30 _public_65d7d30
#define public_65d7d33 _public_65d7d33
#define public_65d7d48 _public_65d7d48
#define public_65d7d78 _public_65d7d78

PROC_DECLARE(0x65d7c9e, internal_65d7c9e, public_65d7c9e);
extern "C" NAKED register_t __cdecl internal_65d7c9e()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xCC
        lea eax, ss:[ebp-0x10]
        push eax
        call dword ptr ds : [public_65e104c]
        lea eax, ss:[ebp-0x20]
        push eax
        call dword ptr ds : [public_65e1048]
        mov ax, word ptr ss : [ebp-0x16]
        cmp ax, word ptr ds : [public_65e611a]
        jne public_65d7d03
        mov ax, word ptr ss : [ebp-0x18]
        cmp ax, word ptr ds : [public_65e6118]
        jne public_65d7d03
        mov ax, word ptr ss : [ebp-0x1A]
        cmp ax, word ptr ds : [public_65e6116]
        jne public_65d7d03
        mov ax, word ptr ss : [ebp-0x1E]
        cmp ax, word ptr ds : [public_65e6112]
        jne public_65d7d03
        mov ax, word ptr ss : [ebp-0x20]
        cmp ax, word ptr ds : [public_65e6110]
        jne public_65d7d03
        mov eax, dword ptr ds : [public_65e6108]
        jmp public_65d7d48
        public_65d7d03 : nop
        lea eax, ss:[ebp-0xCC]
        push eax
        call dword ptr ds : [public_65e1044]
        cmp eax, 0xFFFFFFFF
        je public_65d7d30
        cmp eax, 2
        jne public_65d7d2c
        cmp word ptr ss : [ebp-0x32], 0
        je public_65d7d2c
        cmp dword ptr ss : [ebp-0x24], 0
        je public_65d7d2c
        push 1
        pop eax
        jmp public_65d7d33
        public_65d7d2c : nop
        xor eax, eax
        jmp public_65d7d33
        public_65d7d30 : nop
        or eax, 0xFFFFFFFF
        public_65d7d33 : nop
        push esi
        push edi
        lea esi, ss:[ebp-0x20]
        mov edi, offset public_65e6110
        movsd 
        movsd 
        movsd 
        movsd 
        pop edi
        mov dword ptr ds : [public_65e6108], eax
        pop esi
        public_65d7d48 : nop
        push eax
        movzx eax, word ptr ss : [ebp-4]
        push eax
        movzx eax, word ptr ss : [ebp-6]
        push eax
        movzx eax, word ptr ss : [ebp-8]
        push eax
        movzx eax, word ptr ss : [ebp-0xA]
        push eax
        movzx eax, word ptr ss : [ebp-0xE]
        push eax
        movzx eax, word ptr ss : [ebp-0x10]
        push eax
        call public_65db0f2
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0x1C
        test ecx, ecx
        je public_65d7d78
        mov dword ptr ds : [ecx], eax
        public_65d7d78 : nop
        leave 
        ret 
        UNREACHABLE_TRAP(0x65d7c9e)
    }
}

#undef public_65d7d03
#undef public_65d7d2c
#undef public_65d7d30
#undef public_65d7d33
#undef public_65d7d48
#undef public_65d7d78
