#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37335);
CLANG_FORWARD_PROC_SYMBOL(public_6d37ac6);

#define public_6d38c3c _public_6d38c3c
#define public_6d38c83 _public_6d38c83
#define public_6d38c85 _public_6d38c85
#define public_6d38c99 _public_6d38c99
#define public_6d38cd2 _public_6d38cd2
#define public_6d38d1e _public_6d38d1e

PROC_DECLARE(0x6d38c18, internal_6d38c18, public_6d38c18);
extern "C" NAKED register_t __cdecl internal_6d38c18()
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
        je public_6d38c3c
        push dword ptr ss : [ebp+0x10]
        call public_6d37335
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+0x10], eax
        public_6d38c3c : nop
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
        xor esi, esi
        cmp dword ptr ds : [eax+0x1058], edi
        jbe public_6d38d1e
        mov dword ptr ss : [ebp-0xC], edi
        jmp public_6d38c85
        public_6d38c83 : nop
        xor edi, edi
        public_6d38c85 : nop
        mov ecx, esi
        and ecx, 3
        fld dword ptr ds : [ebx+ecx*4]
        mov dword ptr ss : [ebp-0x10], edi
        mov dword ptr ss : [ebp-8], edi
        mov edi, dword ptr ss : [ebp+0x10]
        lea ecx, ds:[eax+0x38]
        public_6d38c99 : nop
        fld dword ptr ds : [edi]
        fsub dword ptr ds : [ecx-8]
        fld dword ptr ds : [edi+4]
        fsub dword ptr ds : [ecx-4]
        fld dword ptr ds : [edi+8]
        fsub dword ptr ds : [ecx]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fcomp dword ptr ds : [public_6d5f600]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 5
        fstp st(0)
        jp public_6d38cd2
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0x10], eax
        public_6d38cd2 : nop
        inc dword ptr ss : [ebp-8]
        add ecx, 0x10
        cmp dword ptr ss : [ebp-8], 0x100
        jb public_6d38c99
        mov eax, dword ptr ss : [ebp-0xC]
        fld dword ptr ds : [eax+edi+0xC]
        fmul dword ptr ds : [public_6d5f5e0]
        fadd st, st(1)
        fstp dword ptr ss : [ebp-8]
        fstp st(0)
        fld dword ptr ss : [ebp-8]
        fistp dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ss : [ebp-0x14]
        add dword ptr ss : [ebp-0xC], 0x10
        xor ecx, ecx
        mov ch, al
        or ecx, dword ptr ss : [ebp-0x10]
        mov word ptr ds : [edx], cx
        mov eax, dword ptr ss : [ebp-4]
        inc edx
        inc edx
        inc esi
        cmp esi, dword ptr ds : [eax+0x1058]
        jb public_6d38c83
        public_6d38d1e : nop
        mov eax, dword ptr ds : [public_6d72920]
        mov dword ptr ss : [ebp-0x14], eax
        fldcw word ptr ss : [ebp-0x14]
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x6d38c18)
    }
}

#undef public_6d38c3c
#undef public_6d38c83
#undef public_6d38c85
#undef public_6d38c99
#undef public_6d38cd2
#undef public_6d38d1e
