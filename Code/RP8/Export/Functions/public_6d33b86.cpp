#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d33b86);

#define public_6d33bbb _public_6d33bbb
#define public_6d33bdd _public_6d33bdd
#define public_6d33c8b _public_6d33c8b
#define public_6d33ca7 _public_6d33ca7

PROC_DECLARE(0x6d33b86, internal_6d33b86, public_6d33b86);
extern "C" NAKED register_t __cdecl internal_6d33b86()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        mov eax, dword ptr ss : [ebp+0x14]
        mov edx, dword ptr ss : [ebp+0xC]
        push edi
        mov edi, dword ptr ss : [ebp+0x18]
        imul eax, edi
        add eax, edx
        cmp edx, eax
        mov dword ptr ss : [ebp-0x18], eax
        jae public_6d33ca7
        mov eax, dword ptr ss : [ebp+0x10]
        lea eax, ds:[edx+eax*4]
        push ebx
        push esi
        mov dword ptr ss : [ebp+0x14], eax
        mov esi, 0xFFC03FC0
        mov eax, 0xFF00FF
        public_6d33bbb : nop
        cmp edx, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-8], ecx
        jae public_6d33c8b
        mov ebx, dword ptr ss : [ebp+0x14]
        sub ebx, edx
        dec ebx
        shr ebx, 3
        lea ecx, ds:[edx+4]
        inc ebx
        mov dword ptr ss : [ebp-0x10], ecx
        mov dword ptr ss : [ebp-0x14], ebx
        public_6d33bdd : nop
        mov edx, dword ptr ds : [ecx+edi]
        mov edi, dword ptr ds : [edi+ecx-4]
        mov dword ptr ss : [ebp-0xC], edi
        shr edi, 2
        and edi, esi
        mov dword ptr ss : [ebp-4], edx
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [ecx-4]
        mov ebx, ecx
        shr ebx, 2
        and ebx, esi
        add ebx, edi
        mov edi, dword ptr ss : [ebp-4]
        shr edi, 2
        and edi, esi
        add ebx, edi
        mov edi, edx
        shr edi, 2
        and edi, esi
        lea ebx, ds:[ebx+edi-0x7FFF80]
        mov edi, dword ptr ss : [ebp-0xC]
        and edi, eax
        mov esi, ecx
        and esi, eax
        add esi, edi
        mov edi, dword ptr ss : [ebp-4]
        and edi, eax
        add esi, edi
        mov edi, edx
        and edi, eax
        lea esi, ds:[esi+edi+0x20002]
        mov edi, dword ptr ss : [ebp-0xC]
        shr ecx, 2
        shr esi, 2
        xor ebx, esi
        shr edi, 2
        mov esi, 0x3FC03FC0
        and ecx, esi
        and edi, esi
        add ecx, edi
        mov edi, dword ptr ss : [ebp-4]
        shr edi, 2
        and edi, esi
        add ecx, edi
        mov edi, dword ptr ss : [ebp+0x18]
        shr edx, 2
        and edx, esi
        lea ecx, ds:[ecx+edx+0x800080]
        and ebx, eax
        xor ebx, ecx
        mov ecx, dword ptr ss : [ebp-8]
        add dword ptr ss : [ebp-8], 4
        mov dword ptr ds : [ecx], ebx
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 8
        dec dword ptr ss : [ebp-0x14]
        mov dword ptr ss : [ebp-0x10], ecx
        mov esi, 0xFFC03FC0
        jne public_6d33bdd
        mov edx, dword ptr ss : [ebp+0xC]
        public_6d33c8b : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        add dword ptr ss : [ebp+8], ecx
        lea ecx, ds:[edi+edi]
        add dword ptr ss : [ebp+0x14], ecx
        add edx, ecx
        cmp edx, dword ptr ss : [ebp-0x18]
        mov dword ptr ss : [ebp+0xC], edx
        jb public_6d33bbb
        pop esi
        pop ebx
        public_6d33ca7 : nop
        xor eax, eax
        pop edi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d33b86)
    }
}

#undef public_6d33bbb
#undef public_6d33bdd
#undef public_6d33c8b
#undef public_6d33ca7
