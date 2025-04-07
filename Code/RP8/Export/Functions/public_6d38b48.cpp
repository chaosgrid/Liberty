#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37335);
CLANG_FORWARD_PROC_SYMBOL(public_6d37ac6);

#define public_6d38b6c _public_6d38b6c
#define public_6d38baa _public_6d38baa
#define public_6d38c06 _public_6d38c06

PROC_DECLARE(0x6d38b48, internal_6d38b48, public_6d38b48);
extern "C" NAKED register_t __cdecl internal_6d38b48()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x14
        push ebx
        push esi
        push edi
        xor edi, edi
        mov dword ptr ss : [ebp-4], ecx
        cmp dword ptr ds : [ecx+0x1048], edi
        je public_6d38b6c
        push dword ptr ss : [ebp+0x10]
        call public_6d37335
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+0x10], eax
        public_6d38b6c : nop
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
        lea esi, ds:[ecx+eax*4]
        call public_6d37ac6
        mov eax, dword ptr ss : [ebp-4]
        cmp dword ptr ds : [eax+0x1058], edi
        jbe public_6d38c06
        xor ecx, ecx
        public_6d38baa : nop
        mov eax, edi
        and eax, 3
        fld dword ptr ds : [esi+eax*4]
        mov eax, dword ptr ss : [ebp+0x10]
        fst dword ptr ss : [ebp-0x10]
        fld dword ptr ds : [ecx+eax]
        fmul dword ptr ds : [public_6d5f5fc]
        fadd st, st(1)
        fstp dword ptr ss : [ebp-8]
        fstp st(0)
        fld dword ptr ss : [ebp-8]
        fistp dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp+0x10]
        fld dword ptr ds : [ecx+eax+4]
        mov ebx, dword ptr ss : [ebp-0xC]
        fmul dword ptr ds : [public_6d5f5fc]
        fadd dword ptr ss : [ebp-0x10]
        fstp dword ptr ss : [ebp-0x10]
        fld dword ptr ss : [ebp-0x10]
        fistp dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ss : [ebp-0x14]
        shl eax, 0x10
        or eax, ebx
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [ebp-4]
        add edx, 4
        inc edi
        add ecx, 0x10
        cmp edi, dword ptr ds : [eax+0x1058]
        jb public_6d38baa
        public_6d38c06 : nop
        mov eax, dword ptr ds : [public_6d72920]
        mov dword ptr ss : [ebp-0x14], eax
        fldcw word ptr ss : [ebp-0x14]
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x6d38b48)
    }
}

#undef public_6d38b6c
#undef public_6d38baa
#undef public_6d38c06
