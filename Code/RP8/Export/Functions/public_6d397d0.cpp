#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37335);
CLANG_FORWARD_PROC_SYMBOL(public_6d37ac6);

#define public_6d397f4 _public_6d397f4
#define public_6d39832 _public_6d39832
#define public_6d39885 _public_6d39885

PROC_DECLARE(0x6d397d0, internal_6d397d0, public_6d397d0);
extern "C" NAKED register_t __cdecl internal_6d397d0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        push ebx
        push esi
        push edi
        xor edi, edi
        mov dword ptr ss : [ebp-4], ecx
        cmp dword ptr ds : [ecx+0x1048], edi
        je public_6d397f4
        push dword ptr ss : [ebp+0x10]
        call public_6d37335
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+0x10], eax
        public_6d397f4 : nop
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
        xor ecx, ecx
        cmp dword ptr ds : [eax+0x1058], edi
        jbe public_6d39885
        public_6d39832 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        add eax, edi
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [public_6d5f20c]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [public_6d5f208]
        faddp 
        fld dword ptr ds : [eax]
        mov eax, ecx
        fmul dword ptr ds : [public_6d5f204]
        and eax, 3
        faddp 
        fmul dword ptr ds : [public_6d5f5fc]
        fld dword ptr ds : [esi+eax*4]
        faddp 
        fstp dword ptr ss : [ebp-8]
        fld dword ptr ss : [ebp-8]
        fistp dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp-0xC]
        mov word ptr ds : [edx], ax
        mov eax, dword ptr ss : [ebp-4]
        inc edx
        inc edx
        inc ecx
        add edi, 0x10
        cmp ecx, dword ptr ds : [eax+0x1058]
        jb public_6d39832
        public_6d39885 : nop
        mov eax, dword ptr ds : [public_6d72920]
        mov dword ptr ss : [ebp-0xC], eax
        fldcw word ptr ss : [ebp-0xC]
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x6d397d0)
    }
}

#undef public_6d397f4
#undef public_6d39832
#undef public_6d39885
