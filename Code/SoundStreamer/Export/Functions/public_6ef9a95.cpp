#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef9a95);

#define public_6ef9adc _public_6ef9adc
#define public_6ef9ae3 _public_6ef9ae3
#define public_6ef9afb _public_6ef9afb
#define public_6ef9b04 _public_6ef9b04
#define public_6ef9b1c _public_6ef9b1c
#define public_6ef9b3d _public_6ef9b3d
#define public_6ef9b46 _public_6ef9b46

PROC_DECLARE(0x6ef9a95, internal_6ef9a95, public_6ef9a95);
extern "C" NAKED register_t __cdecl internal_6ef9a95()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov edx, dword ptr ss : [ebp+0xC]
        push ebx
        push esi
        push edi
        mov ax, word ptr ds : [edx+6]
        mov edi, 0x7FF
        mov ecx, eax
        and eax, 0x8000
        shr ecx, 4
        and ecx, edi
        mov dword ptr ss : [ebp+0xC], eax
        mov eax, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx]
        movzx ebx, cx
        mov esi, 0x80000000
        and eax, 0xFFFFF
        test ebx, ebx
        mov dword ptr ss : [ebp-4], esi
        je public_6ef9ae3
        cmp ebx, edi
        je public_6ef9adc
        lea edi, ds:[ecx+0x3C00]
        jmp public_6ef9b04
        public_6ef9adc : nop
        mov edi, 0x7FFF
        jmp public_6ef9b04
        public_6ef9ae3 : nop
        xor ebx, ebx
        cmp eax, ebx
        jne public_6ef9afb
        cmp edx, ebx
        jne public_6ef9afb
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax], ebx
        mov word ptr ds : [eax+8], bx
        jmp public_6ef9b46
        public_6ef9afb : nop
        lea edi, ds:[ecx+0x3C01]
        mov dword ptr ss : [ebp-4], ebx
        public_6ef9b04 : nop
        mov ecx, edx
        shr ecx, 0x15
        shl eax, 0xB
        or ecx, eax
        mov eax, dword ptr ss : [ebp+8]
        or ecx, dword ptr ss : [ebp-4]
        shl edx, 0xB
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax], edx
        public_6ef9b1c : nop
        test esi, ecx
        jne public_6ef9b3d
        mov edx, dword ptr ds : [eax]
        add ecx, ecx
        mov ebx, edx
        shr ebx, 0x1F
        or ebx, ecx
        lea ecx, ds:[edx+edx]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ebx
        add edi, 0xFFFF
        mov ecx, ebx
        jmp public_6ef9b1c
        public_6ef9b3d : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        or ecx, edi
        mov word ptr ds : [eax+8], cx
        public_6ef9b46 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ef9a95)
    }
}

#undef public_6ef9adc
#undef public_6ef9ae3
#undef public_6ef9afb
#undef public_6ef9b04
#undef public_6ef9b1c
#undef public_6ef9b3d
#undef public_6ef9b46
