#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfd50);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfdf0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0400);
CLANG_FORWARD_PROC_SYMBOL(public_6ed04b0);

#define public_6ecfd77 _public_6ecfd77
#define public_6ecfdb2 _public_6ecfdb2
#define public_6ecfdbc _public_6ecfdbc
#define public_6ecfdc9 _public_6ecfdc9
#define public_6ecfdcd _public_6ecfdcd
#define public_6ecfdd7 _public_6ecfdd7
#define public_6ecfdde _public_6ecfdde

PROC_DECLARE(0x6ecfd50, internal_6ecfd50, public_6ecfd50);
extern "C" NAKED register_t __cdecl internal_6ecfd50()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        push 6
        mov dword ptr ds : [esi], 0
        call public_6ed0400
        mov ebp, eax
        mov eax, dword ptr ds : [public_6ed5834]
        mov al, byte ptr ds : [eax]
        add esp, 4
        xor edi, edi
        test al, al
        je public_6ecfdcd
        public_6ecfd77 : nop
        cmp al, 0x29
        je public_6ecfdc9
        cmp al, 0xA
        je public_6ecfdc9
        cmp al, 0x7C
        je public_6ecfdc9
        lea ecx, ss:[esp+0x14]
        push ecx
        call public_6ecfdf0
        mov ebx, eax
        add esp, 4
        test ebx, ebx
        je public_6ecfdde
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi]
        mov edx, eax
        and edx, 1
        or ecx, edx
        test edi, edi
        mov dword ptr ds : [esi], ecx
        jne public_6ecfdb2
        and eax, 4
        or eax, ecx
        mov dword ptr ds : [esi], eax
        jmp public_6ecfdbc
        public_6ecfdb2 : nop
        push ebx
        push edi
        call public_6ed04b0
        add esp, 8
        public_6ecfdbc : nop
        mov eax, dword ptr ds : [public_6ed5834]
        mov al, byte ptr ds : [eax]
        test al, al
        mov edi, ebx
        jne public_6ecfd77
        public_6ecfdc9 : nop
        test edi, edi
        jne public_6ecfdd7
        public_6ecfdcd : nop
        push 9
        call public_6ed0400
        add esp, 4
        public_6ecfdd7 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 
        public_6ecfdde : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ecfd50)
    }
}

#undef public_6ecfd77
#undef public_6ecfdb2
#undef public_6ecfdbc
#undef public_6ecfdc9
#undef public_6ecfdcd
#undef public_6ecfdd7
#undef public_6ecfdde
