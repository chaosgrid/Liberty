#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f300);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f380);

#define public_6f4f31b _public_6f4f31b
#define public_6f4f32f _public_6f4f32f
#define public_6f4f346 _public_6f4f346
#define public_6f4f358 _public_6f4f358
#define public_6f4f35f _public_6f4f35f

PROC_DECLARE(0x6f4f300, internal_6f4f300, public_6f4f300);
extern "C" NAKED register_t __cdecl internal_6f4f300()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f61e28]
        push ebx
        push ebp
        push esi
        push edi
        add eax, 0x58
        push eax
        xor ebp, ebp
        xor edi, edi
        call public_6f4f380
        add esp, 4
        xor ebx, ebx
        public_6f4f31b : nop
        mov ecx, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [ecx+0x60]
        mov eax, dword ptr ds : [ecx+ebx]
        add ecx, ebx
        xor edx, edx
        cmp eax, ebp
        jle public_6f4f35f
        public_6f4f32f : nop
        mov eax, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [eax+edx*4]
        cmp eax, ebp
        je public_6f4f358
        mov esi, dword ptr ds : [eax+4]
        cmp esi, 1
        jne public_6f4f346
        mov dword ptr ds : [eax+4], ebp
        jmp public_6f4f358
        public_6f4f346 : nop
        cmp esi, ebp
        jne public_6f4f358
        mov dword ptr ds : [eax], edi
        mov edi, eax
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+edx*4], offset public_6f608b0
        public_6f4f358 : nop
        mov eax, dword ptr ds : [ecx]
        inc edx
        cmp edx, eax
        jl public_6f4f32f
        public_6f4f35f : nop
        add ebx, 0xC
        cmp ebx, 0x2E8
        jl public_6f4f31b
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f4f300)
    }
}

#undef public_6f4f31b
#undef public_6f4f32f
#undef public_6f4f346
#undef public_6f4f358
#undef public_6f4f35f
