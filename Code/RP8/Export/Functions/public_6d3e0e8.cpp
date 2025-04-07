#include "RP8-PCH.h"


#define public_6d3e147 _public_6d3e147
#define public_6d3e188 _public_6d3e188
#define public_6d3e19e _public_6d3e19e
#define public_6d3e216 _public_6d3e216

PROC_DECLARE(0x6d3e0e8, internal_6d3e0e8, public_6d3e0e8);
extern "C" NAKED register_t __cdecl internal_6d3e0e8()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x1C
        mov ecx, dword ptr ss : [ebp+0xC]
        fld dword ptr ds : [ecx+0x14]
        fadd dword ptr ds : [ecx]
        fadd dword ptr ds : [ecx+0x28]
        fcom dword ptr ds : [public_6d5e48c]
        fnstsw ax
        test ah, 0x41
        jne public_6d3e147
        fadd dword ptr ds : [public_6d5e488]
        mov eax, dword ptr ss : [ebp+8]
        fsqrt 
        fmul dword ptr ds : [public_6d5f1fc]
        fld st(0)
        fstp dword ptr ds : [eax+0xC]
        fdivr dword ptr ds : [public_6d5f5b4]
        fld dword ptr ds : [ecx+0x18]
        fsub dword ptr ds : [ecx+0x24]
        fmul st, st(1)
        fstp dword ptr ds : [eax]
        fld dword ptr ds : [ecx+0x20]
        fsub dword ptr ds : [ecx+8]
        fmul st, st(1)
        fstp dword ptr ds : [eax+4]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [ecx+0x10]
        fmul st, st(1)
        fstp dword ptr ds : [eax+8]
        jmp public_6d3e216
        public_6d3e147 : nop
        fstp st(0)
        and dword ptr ss : [ebp-0x14], 0
        fld dword ptr ds : [ecx]
        push ebx
        fsub dword ptr ds : [ecx+0x14]
        push esi
        push edi
        xor ebx, ebx
        fsub dword ptr ds : [ecx+0x28]
        inc ebx
        push 2
        pop edx
        fst dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-0x1C], ebx
        fld dword ptr ds : [ecx+0x14]
        mov dword ptr ss : [ebp-0x18], edx
        fsub dword ptr ds : [ecx]
        fsub dword ptr ds : [ecx+0x28]
        fstp dword ptr ss : [ebp-0xC]
        fld dword ptr ds : [ecx+0x14]
        fadd dword ptr ds : [ecx]
        fsubr dword ptr ds : [ecx+0x28]
        fstp dword ptr ss : [ebp-8]
        fcomp dword ptr ss : [ebp-0xC]
        fnstsw ax
        test bl, ah
        jne public_6d3e188
        xor ebx, ebx
        public_6d3e188 : nop
        fld dword ptr ss : [ebp+ebx*4-0x10]
        mov dword ptr ss : [ebp+0xC], ebx
        fcomp dword ptr ss : [ebp-8]
        fnstsw ax
        test ah, 1
        je public_6d3e19e
        mov ebx, edx
        mov dword ptr ss : [ebp+0xC], ebx
        public_6d3e19e : nop
        mov edx, ebx
        shl edx, 2
        fld dword ptr ss : [ebp+edx-0x10]
        mov edi, dword ptr ss : [ebp+edx-0x1C]
        fadd dword ptr ds : [public_6d5e488]
        mov eax, dword ptr ss : [ebp+8]
        mov esi, edi
        shl esi, 2
        fsqrt 
        add ebx, esi
        mov dword ptr ss : [ebp-4], edi
        add edi, edx
        fmul dword ptr ds : [public_6d5f1fc]
        fld st(0)
        fstp dword ptr ds : [edx+eax]
        fdivr dword ptr ds : [public_6d5f5b4]
        fld dword ptr ds : [ecx+ebx*4]
        fadd dword ptr ds : [ecx+edi*4]
        mov ebx, dword ptr ss : [ebp+0xC]
        mov edi, dword ptr ss : [ebp+esi-0x1C]
        shl edi, 2
        add ebx, edi
        fmul st, st(1)
        mov dword ptr ss : [ebp+8], edi
        mov edi, dword ptr ss : [ebp+esi-0x1C]
        fstp dword ptr ds : [esi+eax]
        add edx, edi
        fld dword ptr ds : [ecx+ebx*4]
        add esi, edi
        fadd dword ptr ds : [ecx+edx*4]
        mov edx, dword ptr ss : [ebp+8]
        mov edi, dword ptr ss : [ebp-4]
        fmul st, st(1)
        fstp dword ptr ds : [edx+eax]
        add edx, edi
        fld dword ptr ds : [ecx+esi*4]
        pop edi
        fsub dword ptr ds : [ecx+edx*4]
        pop esi
        pop ebx
        fmul st, st(1)
        fstp dword ptr ds : [eax+0xC]
        public_6d3e216 : nop
        fstp st(0)
        leave 
        ret 8
        UNREACHABLE_TRAP(0x6d3e0e8)
    }
}

#undef public_6d3e147
#undef public_6d3e188
#undef public_6d3e19e
#undef public_6d3e216
