#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37335);
CLANG_FORWARD_PROC_SYMBOL(public_6d37ac6);

#define public_6d398b7 _public_6d398b7
#define public_6d398fa _public_6d398fa
#define public_6d39974 _public_6d39974

PROC_DECLARE(0x6d39897, internal_6d39897, public_6d39897);
extern "C" NAKED register_t __cdecl internal_6d39897()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x14
        mov dword ptr ss : [ebp-4], ecx
        cmp dword ptr ds : [ecx+0x1048], 0
        je public_6d398b7
        push dword ptr ss : [ebp+0x10]
        call public_6d37335
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+0x10], eax
        public_6d398b7 : nop
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
        jbe public_6d39974
        xor ecx, ecx
        push ebx
        public_6d398fa : nop
        mov eax, esi
        and eax, 3
        fld dword ptr ds : [edi+eax*4]
        mov eax, dword ptr ss : [ebp+0x10]
        fst dword ptr ss : [ebp-0x10]
        add eax, ecx
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [public_6d5f20c]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [public_6d5f208]
        faddp 
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [public_6d5f204]
        faddp 
        fmul dword ptr ds : [public_6d5f5fc]
        fadd st, st(1)
        fstp dword ptr ss : [ebp-8]
        fstp st(0)
        fld dword ptr ss : [ebp-8]
        fistp dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp+0x10]
        fld dword ptr ds : [ecx+eax+0xC]
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
        inc esi
        add ecx, 0x10
        cmp esi, dword ptr ds : [eax+0x1058]
        jb public_6d398fa
        pop ebx
        public_6d39974 : nop
        mov eax, dword ptr ds : [public_6d72920]
        mov dword ptr ss : [ebp-0x14], eax
        fldcw word ptr ss : [ebp-0x14]
        pop edi
        pop esi
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x6d39897)
    }
}

#undef public_6d398b7
#undef public_6d398fa
#undef public_6d39974
