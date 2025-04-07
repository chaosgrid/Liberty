#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d45f86);
CLANG_FORWARD_PROC_SYMBOL(public_6d4eeb5);

#define public_6d4eefb _public_6d4eefb
#define public_6d4ef26 _public_6d4ef26
#define public_6d4ef60 _public_6d4ef60
#define public_6d4ef72 _public_6d4ef72
#define public_6d4ef9c _public_6d4ef9c
#define public_6d4f000 _public_6d4f000
#define public_6d4f01d _public_6d4f01d
#define public_6d4f036 _public_6d4f036

PROC_DECLARE(0x6d4eeb5, internal_6d4eeb5, public_6d4eeb5);
extern "C" NAKED register_t __cdecl internal_6d4eeb5()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x44
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x64]
        mov dword ptr ss : [ebp-4], ecx
        mov ecx, dword ptr ds : [eax+0x5C]
        push ebx
        mov ebx, dword ptr ds : [eax+0x1A4]
        mov eax, dword ptr ds : [eax+0x11C]
        mov dword ptr ss : [ebp-0xC], ecx
        mov ecx, dword ptr ss : [ebp+0x14]
        test ecx, ecx
        mov dword ptr ss : [ebp-0x40], ebx
        mov dword ptr ss : [ebp-0x2C], eax
        jle public_6d4f036
        mov eax, dword ptr ss : [ebp+0x10]
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        sub esi, eax
        push edi
        mov dword ptr ss : [ebp+0x14], eax
        mov dword ptr ss : [ebp-0x44], esi
        mov dword ptr ss : [ebp-0x24], ecx
        public_6d4eefb : nop
        push dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp+0x14]
        push dword ptr ds : [eax]
        call public_6d45f86
        and dword ptr ss : [ebp+8], 0
        cmp dword ptr ss : [ebp-4], 0
        pop ecx
        pop ecx
        jle public_6d4f01d
        mov eax, dword ptr ss : [ebp+0x14]
        add esi, eax
        lea eax, ds:[ebx+0x44]
        mov dword ptr ss : [ebp-0x28], esi
        mov dword ptr ss : [ebp-8], eax
        public_6d4ef26 : nop
        mov eax, dword ptr ss : [ebp-0x28]
        mov edi, dword ptr ds : [eax]
        add edi, dword ptr ss : [ebp+8]
        cmp byte ptr ds : [ebx+0x54], 0
        mov eax, dword ptr ss : [ebp+0x14]
        mov esi, dword ptr ds : [eax]
        je public_6d4ef60
        mov ecx, dword ptr ss : [ebp-0xC]
        or dword ptr ss : [ebp-0x10], 0xFFFFFFFF
        lea eax, ds:[ecx-1]
        mov edx, eax
        imul edx, dword ptr ss : [ebp-4]
        add esi, eax
        mov eax, dword ptr ss : [ebp-4]
        add edi, edx
        neg eax
        mov dword ptr ss : [ebp-0x1C], eax
        mov eax, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [eax]
        lea ecx, ds:[eax+ecx*2+2]
        jmp public_6d4ef72
        public_6d4ef60 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0x1C], eax
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x10], 1
        public_6d4ef72 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ebx+0x18]
        shl eax, 2
        mov edx, dword ptr ds : [eax+edx]
        mov dword ptr ss : [ebp-0x30], edx
        mov edx, dword ptr ds : [ebx+0x10]
        mov eax, dword ptr ds : [eax+edx]
        mov edx, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-0x34], eax
        xor eax, eax
        and dword ptr ss : [ebp-0x14], eax
        and dword ptr ss : [ebp-0x18], eax
        test edx, edx
        jbe public_6d4f000
        mov dword ptr ss : [ebp-0x20], edx
        public_6d4ef9c : nop
        mov edx, dword ptr ss : [ebp-0x10]
        mov ebx, dword ptr ss : [ebp-0x2C]
        lea edx, ds:[ecx+edx*2]
        mov dword ptr ss : [ebp-0x3C], edx
        movsx edx, word ptr ds : [edx]
        lea eax, ds:[edx+eax+8]
        movzx edx, byte ptr ds : [edi]
        sar eax, 4
        add ebx, eax
        movzx eax, byte ptr ds : [edx+ebx]
        mov edx, dword ptr ss : [ebp-0x30]
        movzx edx, byte ptr ds : [eax+edx]
        add byte ptr ds : [esi], dl
        mov ebx, dword ptr ss : [ebp-0x34]
        movzx edx, byte ptr ds : [edx+ebx]
        mov ebx, dword ptr ss : [ebp-0x14]
        add edi, dword ptr ss : [ebp-0x1C]
        add esi, dword ptr ss : [ebp-0x10]
        sub eax, edx
        mov dword ptr ss : [ebp-0x38], eax
        lea edx, ds:[eax+eax]
        add eax, edx
        add ebx, eax
        mov word ptr ds : [ecx], bx
        mov ecx, dword ptr ss : [ebp-0x18]
        add eax, edx
        add ecx, eax
        mov dword ptr ss : [ebp-0x14], ecx
        mov ecx, dword ptr ss : [ebp-0x38]
        add eax, edx
        dec dword ptr ss : [ebp-0x20]
        mov dword ptr ss : [ebp-0x18], ecx
        mov ecx, dword ptr ss : [ebp-0x3C]
        jne public_6d4ef9c
        mov ebx, dword ptr ss : [ebp-0x40]
        public_6d4f000 : nop
        mov ax, word ptr ss : [ebp-0x14]
        inc dword ptr ss : [ebp+8]
        add dword ptr ss : [ebp-8], 4
        mov word ptr ds : [ecx], ax
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, dword ptr ss : [ebp-4]
        jl public_6d4ef26
        mov esi, dword ptr ss : [ebp-0x44]
        public_6d4f01d : nop
        cmp byte ptr ds : [ebx+0x54], 0
        sete al
        add dword ptr ss : [ebp+0x14], 4
        dec dword ptr ss : [ebp-0x24]
        mov byte ptr ds : [ebx+0x54], al
        jne public_6d4eefb
        pop edi
        pop esi
        public_6d4f036 : nop
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4eeb5)
    }
}

#undef public_6d4eefb
#undef public_6d4ef26
#undef public_6d4ef60
#undef public_6d4ef72
#undef public_6d4ef9c
#undef public_6d4f000
#undef public_6d4f01d
#undef public_6d4f036
