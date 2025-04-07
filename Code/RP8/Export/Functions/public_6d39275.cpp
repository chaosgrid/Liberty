#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37335);
CLANG_FORWARD_PROC_SYMBOL(public_6d37ac6);

#define public_6d39295 _public_6d39295
#define public_6d392df _public_6d392df
#define public_6d3936f _public_6d3936f

PROC_DECLARE(0x6d39275, internal_6d39275, public_6d39275);
extern "C" NAKED register_t __cdecl internal_6d39275()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x20
        mov dword ptr ss : [ebp-4], ecx
        cmp dword ptr ds : [ecx+0x1048], 0
        je public_6d39295
        push dword ptr ss : [ebp+0x10]
        call public_6d37335
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+0x10], eax
        public_6d39295 : nop
        mov edx, dword ptr ds : [ecx+0x1050]
        mov eax, dword ptr ss : [ebp+8]
        push esi
        imul edx, eax
        mov esi, dword ptr ss : [ebp+0xC]
        push edi
        mov edi, dword ptr ds : [ecx+0x1054]
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
        mov ecx, dword ptr ss : [ebp-4]
        xor eax, eax
        cmp dword ptr ds : [ecx+0x1058], eax
        jbe public_6d3936f
        xor esi, esi
        push ebx
        public_6d392df : nop
        mov edi, dword ptr ss : [ebp-0xC]
        mov ecx, eax
        and ecx, 3
        fld dword ptr ds : [edi+ecx*4]
        mov ecx, dword ptr ss : [ebp+0x10]
        fst dword ptr ss : [ebp-8]
        fld dword ptr ds : [esi+ecx]
        fmul dword ptr ds : [public_6d5f604]
        fadd st, st(1)
        fstp dword ptr ss : [ebp-0x10]
        fstp st(0)
        fld dword ptr ss : [ebp-0x10]
        fistp dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ss : [ebp+0x10]
        fld dword ptr ds : [esi+ecx+4]
        mov edi, dword ptr ss : [ebp-0x14]
        fmul dword ptr ds : [public_6d5f604]
        fadd dword ptr ss : [ebp-8]
        fstp dword ptr ss : [ebp-0x10]
        fld dword ptr ss : [ebp-0x10]
        fistp dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ss : [ebp-0x18]
        mov dword ptr ss : [ebp-0x20], ecx
        mov ecx, dword ptr ss : [ebp+0x10]
        fld dword ptr ds : [esi+ecx+0xC]
        fmul dword ptr ds : [public_6d5f5e0]
        fadd dword ptr ss : [ebp-8]
        fstp dword ptr ss : [ebp-0x10]
        fld dword ptr ss : [ebp-0x10]
        fistp dword ptr ss : [ebp-0x1C]
        mov ecx, dword ptr ss : [ebp-0x1C]
        xor ebx, ebx
        mov bh, cl
        and edi, 0xFF
        add esi, 0x10
        mov bl, byte ptr ss : [ebp-0x20]
        shl ebx, 8
        or ebx, edi
        mov dword ptr ds : [edx], ebx
        mov ecx, dword ptr ss : [ebp-4]
        add edx, 4
        inc eax
        cmp eax, dword ptr ds : [ecx+0x1058]
        jb public_6d392df
        pop ebx
        public_6d3936f : nop
        mov eax, dword ptr ds : [public_6d72920]
        mov dword ptr ss : [ebp-0x20], eax
        fldcw word ptr ss : [ebp-0x20]
        pop edi
        pop esi
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x6d39275)
    }
}

#undef public_6d39295
#undef public_6d392df
#undef public_6d3936f
