#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d33cdd);

#define public_6d33d12 _public_6d33d12
#define public_6d33d31 _public_6d33d31
#define public_6d33da4 _public_6d33da4
#define public_6d33dc0 _public_6d33dc0

PROC_DECLARE(0x6d33cdd, internal_6d33cdd, public_6d33cdd);
extern "C" NAKED register_t __cdecl internal_6d33cdd()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        mov ecx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ss : [ebp+0x18]
        imul ecx, eax
        push edi
        mov edi, dword ptr ss : [ebp+0xC]
        add ecx, edi
        cmp edi, ecx
        mov dword ptr ss : [ebp-0x18], ecx
        jae public_6d33dc0
        mov ecx, dword ptr ss : [ebp+0x10]
        lea ecx, ds:[edi+ecx*4]
        push ebx
        mov dword ptr ss : [ebp+0x14], ecx
        push esi
        mov edx, 0xFF00FF
        mov ecx, 0xFF00
        public_6d33d12 : nop
        cmp edi, dword ptr ss : [ebp+0x14]
        mov esi, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-4], esi
        jae public_6d33da4
        mov ebx, dword ptr ss : [ebp+0x14]
        sub ebx, edi
        dec ebx
        shr ebx, 3
        inc ebx
        lea esi, ds:[edi+4]
        mov dword ptr ss : [ebp-0x10], ebx
        public_6d33d31 : nop
        mov edi, dword ptr ds : [esi+eax]
        mov dword ptr ss : [ebp-8], edi
        mov edi, dword ptr ds : [esi]
        mov dword ptr ss : [ebp-0xC], edi
        mov edi, dword ptr ds : [eax+esi-4]
        mov eax, dword ptr ds : [esi-4]
        mov dword ptr ss : [ebp-0x14], edi
        and edi, edx
        mov ebx, eax
        and ebx, edx
        add ebx, edi
        mov edi, dword ptr ss : [ebp-8]
        and edi, edx
        add ebx, edi
        mov edi, dword ptr ss : [ebp-0xC]
        and edi, edx
        lea ebx, ds:[ebx+edi+0x20002]
        mov edi, dword ptr ss : [ebp-0x14]
        and eax, ecx
        and edi, ecx
        add eax, edi
        mov edi, dword ptr ss : [ebp-8]
        and edi, ecx
        add eax, edi
        mov edi, dword ptr ss : [ebp-0xC]
        and edi, ecx
        lea eax, ds:[eax+edi+0x200]
        and eax, 0x3FC00
        and ebx, 0x3FC03FC
        or ebx, eax
        mov eax, dword ptr ss : [ebp-4]
        add dword ptr ss : [ebp-4], 4
        shr ebx, 2
        add esi, 8
        dec dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [eax], ebx
        mov eax, dword ptr ss : [ebp+0x18]
        jne public_6d33d31
        mov edi, dword ptr ss : [ebp+0xC]
        public_6d33da4 : nop
        mov esi, dword ptr ss : [ebp+0x1C]
        add dword ptr ss : [ebp+8], esi
        lea esi, ds:[eax+eax]
        add dword ptr ss : [ebp+0x14], esi
        add edi, esi
        cmp edi, dword ptr ss : [ebp-0x18]
        mov dword ptr ss : [ebp+0xC], edi
        jb public_6d33d12
        pop esi
        pop ebx
        public_6d33dc0 : nop
        xor eax, eax
        pop edi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d33cdd)
    }
}

#undef public_6d33d12
#undef public_6d33d31
#undef public_6d33da4
#undef public_6d33dc0
