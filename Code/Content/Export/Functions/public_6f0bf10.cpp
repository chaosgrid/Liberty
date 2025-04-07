#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f0bf10);

#define public_6f0bf4c _public_6f0bf4c
#define public_6f0bf6b _public_6f0bf6b
#define public_6f0bf7d _public_6f0bf7d
#define public_6f0bf90 _public_6f0bf90
#define public_6f0bfa5 _public_6f0bfa5
#define public_6f0bfbc _public_6f0bfbc
#define public_6f0bfcb _public_6f0bfcb
#define public_6f0bfd0 _public_6f0bfd0

PROC_DECLARE(0x6f0bf10, internal_6f0bf10, public_6f0bf10);
extern "C" NAKED register_t __cdecl internal_6f0bf10()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x14]
        push ebx
        mov ebx, dword ptr ds : [ecx+0x10]
        cmp ebx, eax
        push esi
        push edi
        je public_6f0bfd0
        mov edi, dword ptr ds : [ecx+0xC]
        cmp edi, 0xFFFFFFFF
        jne public_6f0bf7d
        test ebx, ebx
        jne public_6f0bf7d
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x3C]
        test dl, dl
        je public_6f0bf6b
        mov esi, dword ptr ds : [eax+0x18]
        test esi, esi
        jne public_6f0bf4c
        pop edi
        xor edx, edx
        mov edx, 0xFFFFFFFE
        pop esi
        mov dword ptr ds : [ecx+0x10], edx
        pop ebx
        ret 
        public_6f0bf4c : nop
        mov edx, dword ptr ds : [eax+0x1C]
        sub edx, esi
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        pop edi
        add edx, eax
        add edx, 0xFFFFFFFE
        pop esi
        mov dword ptr ds : [ecx+0x10], edx
        pop ebx
        ret 
        public_6f0bf6b : nop
        pop edi
        pop esi
        mov dword ptr ds : [ecx+0xC], 1
        mov dword ptr ds : [ecx+0x10], 1
        pop ebx
        ret 
        public_6f0bf7d : nop
        cmp edi, 1
        jne public_6f0bfcb
        mov esi, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        jne public_6f0bf90
        xor edx, edx
        jmp public_6f0bfa5
        public_6f0bf90 : nop
        mov edx, dword ptr ds : [esi+0x1C]
        sub edx, eax
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f0bfa5 : nop
        dec edx
        cmp ebx, edx
        jne public_6f0bfcb
        mov al, byte ptr ds : [esi+0x3C]
        test al, al
        je public_6f0bfbc
        pop edi
        pop esi
        mov dword ptr ds : [ecx+0x10], 1
        pop ebx
        ret 
        public_6f0bfbc : nop
        pop edi
        dec ebx
        pop esi
        mov dword ptr ds : [ecx+0x10], ebx
        mov dword ptr ds : [ecx+0xC], 0xFFFFFFFF
        pop ebx
        ret 
        public_6f0bfcb : nop
        add edi, ebx
        mov dword ptr ds : [ecx+0x10], edi
        public_6f0bfd0 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f0bf10)
    }
}

#undef public_6f0bf4c
#undef public_6f0bf6b
#undef public_6f0bf7d
#undef public_6f0bf90
#undef public_6f0bfa5
#undef public_6f0bfbc
#undef public_6f0bfcb
#undef public_6f0bfd0
