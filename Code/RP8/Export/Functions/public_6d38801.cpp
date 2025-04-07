#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37335);
CLANG_FORWARD_PROC_SYMBOL(public_6d37ac6);

#define public_6d38821 _public_6d38821
#define public_6d38868 _public_6d38868
#define public_6d38913 _public_6d38913

PROC_DECLARE(0x6d38801, internal_6d38801, public_6d38801);
extern "C" NAKED register_t __cdecl internal_6d38801()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x24
        mov dword ptr ss : [ebp-4], ecx
        cmp dword ptr ds : [ecx+0x1048], 0
        je public_6d38821
        push dword ptr ss : [ebp+0x10]
        call public_6d37335
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+0x10], eax
        public_6d38821 : nop
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
        jbe public_6d38913
        xor eax, eax
        push ebx
        public_6d38868 : nop
        mov ecx, esi
        and ecx, 3
        fld dword ptr ds : [edi+ecx*4]
        mov ecx, dword ptr ss : [ebp+0x10]
        fst dword ptr ss : [ebp-8]
        fld dword ptr ds : [eax+ecx]
        fmul dword ptr ds : [public_6d5f5f4]
        fadd st, st(1)
        fstp dword ptr ss : [ebp-0xC]
        fstp st(0)
        fld dword ptr ss : [ebp-0xC]
        fistp dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ss : [ebp+0x10]
        fld dword ptr ds : [eax+ecx+4]
        mov ebx, dword ptr ss : [ebp-0x10]
        fmul dword ptr ds : [public_6d5f5f4]
        fadd dword ptr ss : [ebp-8]
        fstp dword ptr ss : [ebp-0xC]
        fld dword ptr ss : [ebp-0xC]
        fistp dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ss : [ebp-0x14]
        mov dword ptr ss : [ebp-0x20], ecx
        mov ecx, dword ptr ss : [ebp+0x10]
        fld dword ptr ds : [eax+ecx+8]
        fmul dword ptr ds : [public_6d5f5f0]
        fadd dword ptr ss : [ebp-8]
        fstp dword ptr ss : [ebp-0xC]
        fld dword ptr ss : [ebp-0xC]
        fistp dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ss : [ebp-0x18]
        mov dword ptr ss : [ebp-0x24], ecx
        mov ecx, dword ptr ss : [ebp+0x10]
        fld dword ptr ds : [eax+ecx+0xC]
        fmul dword ptr ds : [public_6d5f5e0]
        fadd dword ptr ss : [ebp-8]
        fstp dword ptr ss : [ebp-0xC]
        fld dword ptr ss : [ebp-0xC]
        fistp dword ptr ss : [ebp-0x1C]
        mov ecx, dword ptr ss : [ebp-0x1C]
        shl ecx, 3
        or ecx, ebx
        shl ecx, 3
        or ecx, dword ptr ss : [ebp-0x20]
        add eax, 0x10
        shl ecx, 2
        or ecx, dword ptr ss : [ebp-0x24]
        mov word ptr ds : [edx], cx
        mov ecx, dword ptr ss : [ebp-4]
        inc edx
        inc edx
        inc esi
        cmp esi, dword ptr ds : [ecx+0x1058]
        jb public_6d38868
        pop ebx
        public_6d38913 : nop
        mov eax, dword ptr ds : [public_6d72920]
        mov dword ptr ss : [ebp-0x24], eax
        fldcw word ptr ss : [ebp-0x24]
        pop edi
        pop esi
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x6d38801)
    }
}

#undef public_6d38821
#undef public_6d38868
#undef public_6d38913
