#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67120f0);
CLANG_FORWARD_PROC_SYMBOL(public_6716af0);

#define public_6712131 _public_6712131
#define public_671215d _public_671215d
#define public_671218a _public_671218a
#define public_6712199 _public_6712199
#define public_67121bc _public_67121bc

PROC_DECLARE(0x67120f0, internal_67120f0, public_67120f0);
extern "C" NAKED register_t __cdecl internal_67120f0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x114
        mov al, byte ptr ds : [public_671b3e8]
        push ebx
        push esi
        push edi
        test al, al
        jne public_6712131
        lea eax, ss:[ebp-0x114]
        mov byte ptr ds : [public_671b3e8], 1
        push eax
        mov dword ptr ss : [ebp-0x114], 0x114
        call dword ptr ds : [public_6719360]
        cmp dword ptr ss : [ebp-0x104], 2
        sete byte ptr ds : [public_671b3e9]
        public_6712131 : nop
        mov al, byte ptr ds : [public_671b3e9]
        mov edx, dword ptr ss : [ebp+0x10]
        test al, al
        je public_671215d
        mov ecx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ss : [ebp+0xC]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        push edx
        push eax
        push ecx
        call dword ptr ds : [public_6719350]
        lea esp, ss:[ebp-0x120]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_671215d : nop
        mov ebx, dword ptr ss : [ebp+0xC]
        push 0
        push 0
        push 0
        push 0
        push edx
        push ebx
        push 0
        push 0
        call dword ptr ds : [public_671936c]
        mov esi, eax
        test esi, esi
        jne public_6712199
        test ebx, ebx
        je public_671218a
        cmp word ptr ds : [ebx], ax
        jne public_671218a
        mov edi, offset public_671b3f0
        jmp public_67121bc
        public_671218a : nop
        xor eax, eax
        lea esp, ss:[ebp-0x120]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6712199 : nop
        mov eax, esi
        add eax, 3
        and al, 0xFC
        call public_6716af0
        mov eax, dword ptr ss : [ebp+0x10]
        mov edi, esp
        push 0
        push 0
        push esi
        push edi
        push eax
        push ebx
        push 0
        push 0
        call dword ptr ds : [public_671936c]
        public_67121bc : nop
        mov ecx, dword ptr ss : [ebp+0x14]
        mov edx, dword ptr ss : [ebp+8]
        push ecx
        push esi
        push edi
        push edx
        call dword ptr ds : [public_6717018]
        lea esp, ss:[ebp-0x120]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x67120f0)
    }
}

#undef public_6712131
#undef public_671215d
#undef public_671218a
#undef public_6712199
#undef public_67121bc
