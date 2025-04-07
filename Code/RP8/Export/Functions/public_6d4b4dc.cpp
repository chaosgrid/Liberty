#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4b4dc);

#define public_6d4b518 _public_6d4b518
#define public_6d4b522 _public_6d4b522
#define public_6d4b533 _public_6d4b533

PROC_DECLARE(0x6d4b4dc, internal_6d4b4dc, public_6d4b4dc);
extern "C" NAKED register_t __cdecl internal_6d4b4dc()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [edi+0x194]
        mov eax, dword ptr ds : [esi+0x14]
        cdq 
        push 8
        pop ebp
        idiv ebp
        lea ecx, ds:[edi+0x190]
        mov ebx, dword ptr ds : [ecx]
        push edi
        add dword ptr ds : [ebx+0x58], eax
        xor ebx, ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        test al, al
        pop ecx
        je public_6d4b533
        lea eax, ds:[edi+0x120]
        xor edx, edx
        cmp dword ptr ds : [eax], ebx
        jle public_6d4b522
        lea ecx, ds:[esi+0x24]
        public_6d4b518 : nop
        mov dword ptr ds : [ecx], ebx
        inc edx
        add ecx, 4
        cmp edx, dword ptr ds : [eax]
        jl public_6d4b518
        public_6d4b522 : nop
        mov dword ptr ds : [esi+0x20], ebx
        mov eax, dword ptr ds : [edi+0xFC]
        mov dword ptr ds : [esi+0x34], eax
        mov byte ptr ds : [esi+0x18], bl
        mov al, 1
        public_6d4b533 : nop
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d4b4dc)
    }
}

#undef public_6d4b518
#undef public_6d4b522
#undef public_6d4b533
