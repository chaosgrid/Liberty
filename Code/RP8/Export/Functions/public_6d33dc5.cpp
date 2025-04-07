#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d33b86);
CLANG_FORWARD_PROC_SYMBOL(public_6d33dc5);

#define public_6d33ded _public_6d33ded
#define public_6d33e31 _public_6d33e31
#define public_6d33e49 _public_6d33e49
#define public_6d33eba _public_6d33eba
#define public_6d33ed2 _public_6d33ed2

PROC_DECLARE(0x6d33dc5, internal_6d33dc5, public_6d33dc5);
extern "C" NAKED register_t __cdecl internal_6d33dc5()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x1C
        test byte ptr ss : [ebp+0x10], 3
        je public_6d33ded
        push dword ptr ss : [ebp+0x1C]
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6d33b86
        add esp, 0x18
        leave 
        ret 
        public_6d33ded : nop
        mov eax, dword ptr ss : [ebp+0x14]
        imul eax, dword ptr ss : [ebp+0x18]
        add eax, dword ptr ss : [ebp+0xC]
        and dword ptr ss : [ebp-0x14], 0
        and dword ptr ss : [ebp-0x10], 0
        push ebx
        mov dword ptr ss : [ebp-4], eax
        mov eax, 0x20002
        push esi
        push edi
        mov dword ptr ss : [ebp-0x1C], eax
        mov dword ptr ss : [ebp-0x18], eax
        emms 
        mov eax, dword ptr ss : [ebp+0x10]
        shl eax, 2
        mov dword ptr ss : [ebp+0x10], eax
        mov eax, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp+8]
        movq mm4, qword ptr ss : [ebp-0x1C]
        pxor mm6, mm6
        cmp eax, dword ptr ss : [ebp-4]
        jge public_6d33ed2
        public_6d33e31 : nop
        mov edi, eax
        mov esi, eax
        add esi, dword ptr ss : [ebp+0x18]
        mov ebx, edi
        add ebx, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [ebp-0xC], eax
        mov dword ptr ss : [ebp-8], edx
        mov eax, edx
        cmp edi, ebx
        jge public_6d33eba
        public_6d33e49 : nop
        movq mm0, qword ptr ds : [edi]
        movq mm2, qword ptr ds : [esi]
        movq mm4, qword ptr ds : [edi+8]
        movq mm6, qword ptr ds : [esi+8]
        movq mm1, mm0
        movq mm3, mm2
        movq mm5, mm4
        movq mm7, mm6
        punpcklbw mm0, dword ptr ss : [ebp-0x14]
        punpckhbw mm1, mmword ptr ss : [ebp-0x14]
        punpcklbw mm2, dword ptr ss : [ebp-0x14]
        punpckhbw mm3, mmword ptr ss : [ebp-0x14]
        punpcklbw mm4, dword ptr ss : [ebp-0x14]
        punpckhbw mm5, mmword ptr ss : [ebp-0x14]
        punpcklbw mm6, dword ptr ss : [ebp-0x14]
        punpckhbw mm7, mmword ptr ss : [ebp-0x14]
        mov ecx, eax
        paddw mm0, mm1
        add edi, 0x10
        paddw mm4, mm5
        add esi, 0x10
        paddw mm0, mm2
        paddw mm4, mm6
        add eax, 8
        paddw mm0, mm3
        paddw mm4, mm7
        cmp edi, ebx
        paddw mm0, mmword ptr ss : [ebp-0x1C]
        paddw mm4, mmword ptr ss : [ebp-0x1C]
        psraw mm0, 2
        psraw mm4, 2
        packuswb mm0, mm4
        movq qword ptr ds : [ecx], mm0
        jl public_6d33e49
        public_6d33eba : nop
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ss : [ebp-0xC]
        add eax, dword ptr ss : [ebp+0x18]
        add eax, dword ptr ss : [ebp+0x18]
        add edx, dword ptr ss : [ebp+0x1C]
        cmp eax, dword ptr ss : [ebp-4]
        jl public_6d33e31
        public_6d33ed2 : nop
        emms 
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d33dc5)
    }
}

#undef public_6d33ded
#undef public_6d33e31
#undef public_6d33e49
#undef public_6d33eba
#undef public_6d33ed2
