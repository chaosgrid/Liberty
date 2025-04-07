#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37335);
CLANG_FORWARD_PROC_SYMBOL(public_6d37ac6);

#define public_6d3843a _public_6d3843a
#define public_6d38481 _public_6d38481
#define public_6d38526 _public_6d38526

PROC_DECLARE(0x6d3841a, internal_6d3841a, public_6d3841a);
extern "C" NAKED register_t __cdecl internal_6d3841a()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x24
        mov dword ptr ss : [ebp-4], ecx
        cmp dword ptr ds : [ecx+0x1048], 0
        je public_6d3843a
        push dword ptr ss : [ebp+0x10]
        call public_6d37335
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+0x10], eax
        public_6d3843a : nop
        mov edx, dword ptr ds : [ecx+0x1050]
        mov eax, dword ptr ss : [ebp+8]
        push esi
        imul edx, eax
        mov esi, dword ptr ss : [ebp+0xC]
        push edi
        mov edi, dword ptr ds : [ecx+0x1054]
        imul edi, esi
        add edx, edi
        add edx, dword ptr ds : [ecx+0x18]
        mov ecx, dword ptr ds : [ecx+0x2C]
        and eax, 3
        and esi, 3
        lea eax, ds:[esi+eax*8]
        lea edi, ds:[ecx+eax*4]
        call public_6d37ac6
        mov eax, dword ptr ss : [ebp-4]
        xor esi, esi
        cmp dword ptr ds : [eax+0x1058], esi
        jbe public_6d38526
        xor ecx, ecx
        push ebx
        public_6d38481 : nop
        mov eax, esi
        and eax, 3
        fld dword ptr ds : [edi+eax*4]
        mov eax, dword ptr ss : [ebp+0x10]
        fst dword ptr ss : [ebp-8]
        fld dword ptr ds : [ecx+eax]
        fmul dword ptr ds : [public_6d5f5e8]
        fadd st, st(1)
        fstp dword ptr ss : [ebp-0xC]
        fstp st(0)
        fld dword ptr ss : [ebp-0xC]
        fistp dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ss : [ebp+0x10]
        fld dword ptr ds : [ecx+eax+4]
        mov ebx, dword ptr ss : [ebp-0x10]
        fmul dword ptr ds : [public_6d5f5e8]
        fadd dword ptr ss : [ebp-8]
        fstp dword ptr ss : [ebp-0xC]
        fld dword ptr ss : [ebp-0xC]
        fistp dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ss : [ebp-0x14]
        mov dword ptr ss : [ebp-0x20], eax
        mov eax, dword ptr ss : [ebp+0x10]
        fld dword ptr ds : [ecx+eax+8]
        fmul dword ptr ds : [public_6d5f5e8]
        fadd dword ptr ss : [ebp-8]
        fstp dword ptr ss : [ebp-0xC]
        fld dword ptr ss : [ebp-0xC]
        fistp dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ss : [ebp-0x18]
        fld dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0x24], eax
        mov eax, dword ptr ss : [ebp+0x10]
        fadd dword ptr ds : [ecx+eax+0xC]
        fstp dword ptr ss : [ebp-0xC]
        fld dword ptr ss : [ebp-0xC]
        fistp dword ptr ss : [ebp-0x1C]
        mov eax, dword ptr ss : [ebp-0x1C]
        shl eax, 5
        or eax, ebx
        shl eax, 5
        or eax, dword ptr ss : [ebp-0x20]
        add ecx, 0x10
        shl eax, 5
        or eax, dword ptr ss : [ebp-0x24]
        mov word ptr ds : [edx], ax
        mov eax, dword ptr ss : [ebp-4]
        inc edx
        inc edx
        inc esi
        cmp esi, dword ptr ds : [eax+0x1058]
        jb public_6d38481
        pop ebx
        public_6d38526 : nop
        mov eax, dword ptr ds : [public_6d72920]
        mov dword ptr ss : [ebp-0x24], eax
        fldcw word ptr ss : [ebp-0x24]
        pop edi
        pop esi
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x6d3841a)
    }
}

#undef public_6d3843a
#undef public_6d38481
#undef public_6d38526
