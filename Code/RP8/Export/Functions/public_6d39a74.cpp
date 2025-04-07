#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37335);
CLANG_FORWARD_PROC_SYMBOL(public_6d37ac6);

#define public_6d39a98 _public_6d39a98
#define public_6d39ae0 _public_6d39ae0
#define public_6d39bbe _public_6d39bbe

PROC_DECLARE(0x6d39a74, internal_6d39a74, public_6d39a74);
extern "C" NAKED register_t __cdecl internal_6d39a74()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x2C
        push ebx
        push esi
        push edi
        xor edi, edi
        mov dword ptr ss : [ebp-4], ecx
        cmp dword ptr ds : [ecx+0x1048], edi
        je public_6d39a98
        push dword ptr ss : [ebp+0x10]
        call public_6d37335
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+0x10], eax
        public_6d39a98 : nop
        mov esi, dword ptr ds : [ecx+0x1050]
        mov eax, dword ptr ss : [ebp+8]
        mov ebx, dword ptr ds : [ecx+0x1054]
        imul esi, eax
        mov edx, dword ptr ss : [ebp+0xC]
        imul ebx, edx
        and eax, 3
        add esi, ebx
        add esi, dword ptr ds : [ecx+0x18]
        mov ecx, dword ptr ds : [ecx+0x2C]
        and edx, 3
        lea eax, ds:[edx+eax*8]
        lea eax, ds:[ecx+eax*4]
        mov dword ptr ss : [ebp-0x10], eax
        call public_6d37ac6
        mov eax, dword ptr ss : [ebp-4]
        cmp dword ptr ds : [eax+0x1058], edi
        mov dword ptr ss : [ebp-8], edi
        jbe public_6d39bbe
        xor ecx, ecx
        public_6d39ae0 : nop
        mov eax, dword ptr ss : [ebp-8]
        mov edx, dword ptr ss : [ebp-0x10]
        and eax, 3
        fld dword ptr ds : [edx+eax*4]
        mov eax, dword ptr ss : [ebp+0x10]
        fst dword ptr ss : [ebp-0xC]
        fld dword ptr ds : [ecx+eax]
        fmul dword ptr ds : [public_6d5f5fc]
        fadd st, st(1)
        fstp dword ptr ss : [ebp-0x14]
        fstp st(0)
        fld dword ptr ss : [ebp-0x14]
        fistp dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ss : [ebp+0x10]
        fld dword ptr ds : [ecx+eax+4]
        mov edi, dword ptr ss : [ebp-0x18]
        fmul dword ptr ds : [public_6d5f5fc]
        fadd dword ptr ss : [ebp-0xC]
        fstp dword ptr ss : [ebp-0x14]
        fld dword ptr ss : [ebp-0x14]
        fistp dword ptr ss : [ebp-0x1C]
        mov eax, dword ptr ss : [ebp-0x1C]
        mov dword ptr ss : [ebp-0x28], eax
        mov eax, dword ptr ss : [ebp+0x10]
        fld dword ptr ds : [ecx+eax+8]
        fmul dword ptr ds : [public_6d5f5fc]
        fadd dword ptr ss : [ebp-0xC]
        fstp dword ptr ss : [ebp-0x14]
        fld dword ptr ss : [ebp-0x14]
        fistp dword ptr ss : [ebp-0x20]
        mov eax, dword ptr ss : [ebp-0x20]
        mov dword ptr ss : [ebp-0x2C], eax
        mov eax, dword ptr ss : [ebp+0x10]
        fld dword ptr ds : [ecx+eax+0xC]
        fmul dword ptr ds : [public_6d5f5fc]
        fadd dword ptr ss : [ebp-0xC]
        fstp dword ptr ss : [ebp-0x14]
        fld dword ptr ss : [ebp-0x14]
        fistp dword ptr ss : [ebp-0x24]
        mov eax, dword ptr ss : [ebp-0x24]
        cdq 
        shld edx, eax, 0x10
        shl eax, 0x10
        mov ebx, eax
        mov eax, edx
        mov dword ptr ss : [ebp-0x14], eax
        mov eax, edi
        cdq 
        or ebx, eax
        mov eax, dword ptr ss : [ebp-0x14]
        or eax, edx
        shld eax, ebx, 0x10
        mov edi, eax
        mov eax, dword ptr ss : [ebp-0x28]
        shl ebx, 0x10
        cdq 
        or ebx, eax
        mov eax, dword ptr ss : [ebp-0x2C]
        or edi, edx
        shld edi, ebx, 0x10
        cdq 
        shl ebx, 0x10
        or ebx, eax
        or edi, edx
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], edi
        mov eax, dword ptr ss : [ebp-4]
        add esi, 8
        inc dword ptr ss : [ebp-8]
        mov edx, dword ptr ss : [ebp-8]
        add ecx, 0x10
        cmp edx, dword ptr ds : [eax+0x1058]
        jb public_6d39ae0
        public_6d39bbe : nop
        mov eax, dword ptr ds : [public_6d72920]
        mov dword ptr ss : [ebp-0x2C], eax
        fldcw word ptr ss : [ebp-0x2C]
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x6d39a74)
    }
}

#undef public_6d39a98
#undef public_6d39ae0
#undef public_6d39bbe
