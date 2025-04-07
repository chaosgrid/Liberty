#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37335);
CLANG_FORWARD_PROC_SYMBOL(public_6d37ac6);

#define public_6d390bb _public_6d390bb
#define public_6d390fe _public_6d390fe
#define public_6d3915f _public_6d3915f

PROC_DECLARE(0x6d3909b, internal_6d3909b, public_6d3909b);
extern "C" NAKED register_t __cdecl internal_6d3909b()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x14
        mov dword ptr ss : [ebp-4], ecx
        cmp dword ptr ds : [ecx+0x1048], 0
        je public_6d390bb
        push dword ptr ss : [ebp+0x10]
        call public_6d37335
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+0x10], eax
        public_6d390bb : nop
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
        mov ecx, dword ptr ss : [ebp-4]
        xor eax, eax
        cmp dword ptr ds : [ecx+0x1058], eax
        jbe public_6d3915f
        xor esi, esi
        push ebx
        public_6d390fe : nop
        mov ecx, eax
        and ecx, 3
        fld dword ptr ds : [edi+ecx*4]
        mov ecx, dword ptr ss : [ebp+0x10]
        fst dword ptr ss : [ebp-0x10]
        fld dword ptr ds : [esi+ecx]
        fmul dword ptr ds : [public_6d5f604]
        fadd st, st(1)
        fstp dword ptr ss : [ebp-8]
        fstp st(0)
        fld dword ptr ss : [ebp-8]
        fistp dword ptr ss : [ebp-0xC]
        mov ebx, dword ptr ss : [ebp+0x10]
        fld dword ptr ds : [esi+ebx+4]
        mov ecx, dword ptr ss : [ebp-0xC]
        fmul dword ptr ds : [public_6d5f604]
        fadd dword ptr ss : [ebp-0x10]
        fstp dword ptr ss : [ebp-0x10]
        fld dword ptr ss : [ebp-0x10]
        fistp dword ptr ss : [ebp-0x14]
        mov ebx, dword ptr ss : [ebp-0x14]
        movzx cx, cl
        mov ch, bl
        add esi, 0x10
        mov dword ptr ss : [ebp-0x10], ebx
        mov word ptr ds : [edx], cx
        mov ecx, dword ptr ss : [ebp-4]
        inc edx
        inc edx
        inc eax
        cmp eax, dword ptr ds : [ecx+0x1058]
        jb public_6d390fe
        pop ebx
        public_6d3915f : nop
        mov eax, dword ptr ds : [public_6d72920]
        mov dword ptr ss : [ebp-0x14], eax
        fldcw word ptr ss : [ebp-0x14]
        pop edi
        pop esi
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x6d3909b)
    }
}

#undef public_6d390bb
#undef public_6d390fe
#undef public_6d3915f
