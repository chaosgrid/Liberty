#include "Movie-PCH.h"


#define public_6acd574 _public_6acd574
#define public_6acd578 _public_6acd578
#define public_6acd5f8 _public_6acd5f8
#define public_6acd61e _public_6acd61e
#define public_6acd622 _public_6acd622
#define public_6acd6d3 _public_6acd6d3

PROC_DECLARE(0x6acd540, internal_6acd540, public_6acd540);
extern "C" NAKED register_t __cdecl internal_6acd540()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        sub esp, 0x14
        cmp eax, edx
        push ebx
        push ebp
        push esi
        push edi
        jne public_6acd5f8
        mov edx, dword ptr ss : [esp+0x34]
        test edx, edx
        je public_6acd6d3
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x34], eax
        add ecx, 8
        mov dword ptr ss : [esp+0x30], edx
        jmp public_6acd578
        public_6acd574 : nop
        mov eax, dword ptr ss : [esp+0x34]
        public_6acd578 : nop
        mov esi, dword ptr ds : [eax]
        mov edi, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x2C], esi
        mov dword ptr ss : [esp+0x28], esi
        mov eax, dword ptr ss : [esp+0x28]
        mul dword ptr ss : [esp+0x2C]
        mov ebp, eax
        mov ebx, edx
        mov dword ptr ss : [esp+0x2C], esi
        mov dword ptr ss : [esp+0x28], edi
        mov eax, dword ptr ss : [esp+0x28]
        mul dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ecx-8], ebp
        xor ebp, ebp
        mov esi, edx
        add ebx, eax
        adc ebp, esi
        add eax, ebx
        adc esi, 0
        mov dword ptr ds : [ecx-4], eax
        mov dword ptr ss : [esp+0x2C], edi
        mov dword ptr ss : [esp+0x28], edi
        mov eax, dword ptr ss : [esp+0x28]
        mul dword ptr ss : [esp+0x2C]
        xor edi, edi
        add eax, esi
        adc edx, edi
        xor esi, esi
        add eax, ebp
        adc edx, esi
        mov esi, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [ecx+4], edx
        add esi, 8
        add ecx, 0x10
        dec eax
        mov dword ptr ss : [esp+0x34], esi
        mov dword ptr ss : [esp+0x30], eax
        jne public_6acd574
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 0x10
        public_6acd5f8 : nop
        mov edi, dword ptr ss : [esp+0x34]
        test edi, edi
        jbe public_6acd6d3
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x34], eax
        add ecx, 8
        sub eax, edx
        lea esi, ds:[edx+4]
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x28], edi
        jmp public_6acd622
        public_6acd61e : nop
        mov eax, dword ptr ss : [esp+0x2C]
        public_6acd622 : nop
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [eax+esi]
        mov ebx, dword ptr ds : [esi]
        mov ebp, dword ptr ds : [esi-4]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x10], ebp
        mov eax, dword ptr ss : [esp+0x10]
        mul dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ds : [ecx-8], eax
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x14], ebx
        mov eax, dword ptr ss : [esp+0x14]
        mul dword ptr ss : [esp+0x10]
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x20]
        mov ebx, edx
        xor edx, edx
        add edi, eax
        mov eax, dword ptr ss : [esp+0x30]
        adc ebx, edx
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], ebp
        mov eax, dword ptr ss : [esp+0x14]
        mul dword ptr ss : [esp+0x10]
        mov ebp, edx
        xor edx, edx
        add eax, edi
        mov dword ptr ds : [ecx-4], eax
        mov eax, dword ptr ss : [esp+0x30]
        adc ebp, edx
        mov dword ptr ss : [esp+0x14], eax
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x30], edx
        mov eax, dword ptr ss : [esp+0x30]
        mul dword ptr ss : [esp+0x14]
        xor edi, edi
        add eax, ebx
        mov ebx, dword ptr ss : [esp+0x34]
        adc edx, edi
        add eax, ebp
        adc edx, edi
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [ecx+4], edx
        add ebx, 8
        add esi, 8
        add ecx, 0x10
        dec eax
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x28], eax
        jne public_6acd61e
        public_6acd6d3 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 0x10
        UNREACHABLE_TRAP(0x6acd540)
    }
}

#undef public_6acd574
#undef public_6acd578
#undef public_6acd5f8
#undef public_6acd61e
#undef public_6acd622
#undef public_6acd6d3
