#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37335);
CLANG_FORWARD_PROC_SYMBOL(public_6d37ac6);

#define public_6d395b4 _public_6d395b4
#define public_6d395f9 _public_6d395f9
#define public_6d39688 _public_6d39688

PROC_DECLARE(0x6d39590, internal_6d39590, public_6d39590);
extern "C" NAKED register_t __cdecl internal_6d39590()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x1C
        push ebx
        xor ebx, ebx
        push esi
        mov dword ptr ss : [ebp-4], ecx
        cmp dword ptr ds : [ecx+0x1048], ebx
        push edi
        je public_6d395b4
        push dword ptr ss : [ebp+0x10]
        call public_6d37335
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+0x10], eax
        public_6d395b4 : nop
        mov edx, dword ptr ds : [ecx+0x1050]
        mov eax, dword ptr ss : [ebp+8]
        mov edi, dword ptr ds : [ecx+0x1054]
        imul edx, eax
        mov esi, dword ptr ss : [ebp+0xC]
        imul edi, esi
        and eax, 3
        add edx, edi
        add edx, dword ptr ds : [ecx+0x18]
        mov ecx, dword ptr ds : [ecx+0x2C]
        and esi, 3
        lea eax, ds:[esi+eax*8]
        lea eax, ds:[ecx+eax*4]
        mov dword ptr ss : [ebp-0xC], eax
        call public_6d37ac6
        mov eax, dword ptr ss : [ebp-4]
        cmp dword ptr ds : [eax+0x1058], ebx
        jbe public_6d39688
        xor ecx, ecx
        public_6d395f9 : nop
        mov esi, dword ptr ss : [ebp-0xC]
        mov eax, ebx
        and eax, 3
        fld dword ptr ds : [esi+eax*4]
        mov eax, dword ptr ss : [ebp+0x10]
        fst dword ptr ss : [ebp-8]
        fld dword ptr ds : [ecx+eax]
        fmul dword ptr ds : [public_6d5f614]
        fadd st, st(1)
        fstp dword ptr ss : [ebp-0x10]
        fstp st(0)
        fld dword ptr ss : [ebp-0x10]
        fistp dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ss : [ebp+0x10]
        fld dword ptr ds : [ecx+eax+4]
        mov esi, dword ptr ss : [ebp-0x14]
        fmul dword ptr ds : [public_6d5f610]
        fadd dword ptr ss : [ebp-8]
        fstp dword ptr ss : [ebp-0x10]
        fld dword ptr ss : [ebp-0x10]
        fistp dword ptr ss : [ebp-0x18]
        mov edi, dword ptr ss : [ebp+0x10]
        fld dword ptr ds : [ecx+edi+8]
        mov eax, dword ptr ss : [ebp-0x18]
        fmul dword ptr ds : [public_6d5f610]
        fadd dword ptr ss : [ebp-8]
        fstp dword ptr ss : [ebp-0x10]
        fld dword ptr ss : [ebp-0x10]
        fistp dword ptr ss : [ebp-0x1C]
        mov edi, dword ptr ss : [ebp-0x1C]
        and eax, 0x7FF
        shl edi, 0xB
        or eax, edi
        shl eax, 0xA
        and esi, 0x3FF
        or eax, esi
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [ebp-4]
        add edx, 4
        inc ebx
        add ecx, 0x10
        cmp ebx, dword ptr ds : [eax+0x1058]
        jb public_6d395f9
        public_6d39688 : nop
        mov eax, dword ptr ds : [public_6d72920]
        mov dword ptr ss : [ebp-0x1C], eax
        fldcw word ptr ss : [ebp-0x1C]
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x6d39590)
    }
}

#undef public_6d395b4
#undef public_6d395f9
#undef public_6d39688
