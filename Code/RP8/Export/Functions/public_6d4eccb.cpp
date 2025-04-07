#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d45f86);
CLANG_FORWARD_PROC_SYMBOL(public_6d4eccb);

#define public_6d4ed05 _public_6d4ed05
#define public_6d4ed32 _public_6d4ed32
#define public_6d4ed5d _public_6d4ed5d
#define public_6d4ed86 _public_6d4ed86
#define public_6d4ed9b _public_6d4ed9b
#define public_6d4edb3 _public_6d4edb3

PROC_DECLARE(0x6d4eccb, internal_6d4eccb, public_6d4eccb);
extern "C" NAKED register_t __cdecl internal_6d4eccb()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x2C
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x64]
        push esi
        mov esi, dword ptr ds : [eax+0x1A4]
        mov eax, dword ptr ds : [eax+0x5C]
        mov dword ptr ss : [ebp-0xC], eax
        mov eax, dword ptr ss : [ebp+0x14]
        test eax, eax
        mov dword ptr ss : [ebp-8], ecx
        jle public_6d4edb3
        push ebx
        mov ebx, dword ptr ss : [ebp+0x10]
        push edi
        mov edi, dword ptr ss : [ebp+0xC]
        sub edi, ebx
        mov dword ptr ss : [ebp-0x14], ebx
        mov dword ptr ss : [ebp-0x28], edi
        mov dword ptr ss : [ebp-0x18], eax
        public_6d4ed05 : nop
        push dword ptr ss : [ebp-0xC]
        push dword ptr ds : [ebx]
        call public_6d45f86
        mov eax, dword ptr ds : [esi+0x30]
        and dword ptr ss : [ebp+8], 0
        cmp dword ptr ss : [ebp-8], 0
        pop ecx
        pop ecx
        mov dword ptr ss : [ebp-0x2C], eax
        jle public_6d4ed9b
        add edi, ebx
        shl eax, 6
        mov dword ptr ss : [ebp-0x20], eax
        lea eax, ds:[esi+0x34]
        mov dword ptr ss : [ebp-0x1C], edi
        mov dword ptr ss : [ebp-4], eax
        public_6d4ed32 : nop
        mov eax, dword ptr ss : [ebp-0x1C]
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [esi+0x18]
        and dword ptr ss : [ebp+0x14], 0
        mov edi, dword ptr ds : [ebx]
        add eax, ecx
        mov ecx, dword ptr ds : [edx+ecx*4]
        mov edx, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-0x24], ecx
        mov ecx, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [ecx]
        add ecx, dword ptr ss : [ebp-0x20]
        test edx, edx
        jbe public_6d4ed86
        mov dword ptr ss : [ebp-0x10], edx
        public_6d4ed5d : nop
        movzx edx, byte ptr ds : [eax]
        mov ebx, dword ptr ss : [ebp+0x14]
        mov ebx, dword ptr ds : [ecx+ebx*4]
        add eax, dword ptr ss : [ebp-8]
        add ebx, edx
        mov edx, dword ptr ss : [ebp-0x24]
        mov dl, byte ptr ds : [ebx+edx]
        add byte ptr ds : [edi], dl
        mov edx, dword ptr ss : [ebp+0x14]
        inc edi
        inc edx
        and edx, 0xF
        dec dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp+0x14], edx
        jne public_6d4ed5d
        mov ebx, dword ptr ss : [ebp-0x14]
        public_6d4ed86 : nop
        inc dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+8]
        add dword ptr ss : [ebp-4], 4
        cmp eax, dword ptr ss : [ebp-8]
        jl public_6d4ed32
        mov edi, dword ptr ss : [ebp-0x28]
        mov eax, dword ptr ss : [ebp-0x2C]
        public_6d4ed9b : nop
        inc eax
        and eax, 0xF
        add ebx, 4
        dec dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [esi+0x30], eax
        mov dword ptr ss : [ebp-0x14], ebx
        jne public_6d4ed05
        pop edi
        pop ebx
        public_6d4edb3 : nop
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4eccb)
    }
}

#undef public_6d4ed05
#undef public_6d4ed32
#undef public_6d4ed5d
#undef public_6d4ed86
#undef public_6d4ed9b
#undef public_6d4edb3
