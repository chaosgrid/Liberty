#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37335);
CLANG_FORWARD_PROC_SYMBOL(public_6d37ac6);

#define public_6d3877c _public_6d3877c
#define public_6d387ba _public_6d387ba
#define public_6d387ef _public_6d387ef

PROC_DECLARE(0x6d38758, internal_6d38758, public_6d38758);
extern "C" NAKED register_t __cdecl internal_6d38758()
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
        je public_6d3877c
        push dword ptr ss : [ebp+0x10]
        call public_6d37335
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+0x10], eax
        public_6d3877c : nop
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
        jbe public_6d387ef
        public_6d387ba : nop
        mov eax, ecx
        and eax, 3
        fld dword ptr ds : [esi+eax*4]
        mov eax, dword ptr ss : [ebp+0x10]
        fld dword ptr ds : [edi+eax+0xC]
        fmul dword ptr ds : [public_6d5f5e0]
        faddp 
        fstp dword ptr ss : [ebp-8]
        fld dword ptr ss : [ebp-8]
        fistp dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp-0xC]
        mov byte ptr ds : [edx], al
        mov eax, dword ptr ss : [ebp-4]
        inc edx
        inc ecx
        add edi, 0x10
        cmp ecx, dword ptr ds : [eax+0x1058]
        jb public_6d387ba
        public_6d387ef : nop
        mov eax, dword ptr ds : [public_6d72920]
        mov dword ptr ss : [ebp-0xC], eax
        fldcw word ptr ss : [ebp-0xC]
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x6d38758)
    }
}

#undef public_6d3877c
#undef public_6d387ba
#undef public_6d387ef
