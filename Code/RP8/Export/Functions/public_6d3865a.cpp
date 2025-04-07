#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37335);
CLANG_FORWARD_PROC_SYMBOL(public_6d37ac6);

#define public_6d3867e _public_6d3867e
#define public_6d386c0 _public_6d386c0
#define public_6d38746 _public_6d38746

PROC_DECLARE(0x6d3865a, internal_6d3865a, public_6d3865a);
extern "C" NAKED register_t __cdecl internal_6d3865a()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x1C
        push ebx
        push esi
        push edi
        xor edi, edi
        mov dword ptr ss : [ebp-4], ecx
        cmp dword ptr ds : [ecx+0x1048], edi
        je public_6d3867e
        push dword ptr ss : [ebp+0x10]
        call public_6d37335
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+0x10], eax
        public_6d3867e : nop
        mov edx, dword ptr ds : [ecx+0x1050]
        mov eax, dword ptr ss : [ebp+8]
        mov ebx, dword ptr ds : [ecx+0x1054]
        imul edx, eax
        mov esi, dword ptr ss : [ebp+0xC]
        imul ebx, esi
        add edx, ebx
        add edx, dword ptr ds : [ecx+0x18]
        mov ecx, dword ptr ds : [ecx+0x2C]
        and eax, 3
        and esi, 3
        lea eax, ds:[esi+eax*8]
        lea ebx, ds:[ecx+eax*4]
        call public_6d37ac6
        mov eax, dword ptr ss : [ebp-4]
        cmp dword ptr ds : [eax+0x1058], edi
        jbe public_6d38746
        xor esi, esi
        public_6d386c0 : nop
        mov eax, edi
        and eax, 3
        fld dword ptr ds : [ebx+eax*4]
        mov eax, dword ptr ss : [ebp+0x10]
        fst dword ptr ss : [ebp-8]
        fld dword ptr ds : [esi+eax]
        fmul dword ptr ds : [public_6d5f5f4]
        fadd st, st(1)
        fstp dword ptr ss : [ebp-0xC]
        fstp st(0)
        fld dword ptr ss : [ebp-0xC]
        fistp dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ss : [ebp+0x10]
        fld dword ptr ds : [esi+ecx+4]
        mov eax, dword ptr ss : [ebp-0x10]
        fmul dword ptr ds : [public_6d5f5f4]
        fadd dword ptr ss : [ebp-8]
        fstp dword ptr ss : [ebp-0xC]
        fld dword ptr ss : [ebp-0xC]
        fistp dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ss : [ebp-0x14]
        mov dword ptr ss : [ebp-0x1C], ecx
        mov ecx, dword ptr ss : [ebp+0x10]
        fld dword ptr ds : [esi+ecx+8]
        fmul dword ptr ds : [public_6d5f5f0]
        fadd dword ptr ss : [ebp-8]
        fstp dword ptr ss : [ebp-0xC]
        fld dword ptr ss : [ebp-0xC]
        fistp dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ss : [ebp-0x18]
        shl al, 3
        or al, byte ptr ss : [ebp-0x1C]
        add esi, 0x10
        shl al, 2
        or al, cl
        mov byte ptr ds : [edx], al
        mov eax, dword ptr ss : [ebp-4]
        inc edx
        inc edi
        cmp edi, dword ptr ds : [eax+0x1058]
        mov dword ptr ss : [ebp-0xC], ecx
        jb public_6d386c0
        public_6d38746 : nop
        mov eax, dword ptr ds : [public_6d72920]
        mov dword ptr ss : [ebp-0x1C], eax
        fldcw word ptr ss : [ebp-0x1C]
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x6d3865a)
    }
}

#undef public_6d3867e
#undef public_6d386c0
#undef public_6d38746
