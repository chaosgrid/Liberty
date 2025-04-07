#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37335);
CLANG_FORWARD_PROC_SYMBOL(public_6d37ac6);

#define public_6d399a5 _public_6d399a5
#define public_6d399e7 _public_6d399e7
#define public_6d39a63 _public_6d39a63

PROC_DECLARE(0x6d39985, internal_6d39985, public_6d39985);
extern "C" NAKED register_t __cdecl internal_6d39985()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        mov dword ptr ss : [ebp-4], ecx
        cmp dword ptr ds : [ecx+0x1048], 0
        je public_6d399a5
        push dword ptr ss : [ebp+0x10]
        call public_6d37335
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+0x10], eax
        public_6d399a5 : nop
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
        jbe public_6d39a63
        xor eax, eax
        public_6d399e7 : nop
        mov ecx, esi
        and ecx, 3
        fld dword ptr ds : [edi+ecx*4]
        mov ecx, dword ptr ss : [ebp+0x10]
        fst dword ptr ss : [ebp-8]
        fld dword ptr ds : [eax+ecx+8]
        fmul dword ptr ds : [public_6d5f5fc]
        fadd st, st(1)
        fstp dword ptr ss : [ebp-0xC]
        fstp st(0)
        fld dword ptr ss : [ebp-0xC]
        fistp dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ss : [ebp-0x10]
        mov word ptr ds : [edx], cx
        mov ecx, dword ptr ss : [ebp+0x10]
        fld dword ptr ds : [eax+ecx+4]
        fmul dword ptr ds : [public_6d5f5fc]
        fadd dword ptr ss : [ebp-8]
        fstp dword ptr ss : [ebp-0xC]
        fld dword ptr ss : [ebp-0xC]
        fistp dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ss : [ebp-0x14]
        mov word ptr ds : [edx+2], cx
        mov ecx, dword ptr ss : [ebp+0x10]
        fld dword ptr ds : [eax+ecx]
        fmul dword ptr ds : [public_6d5f5fc]
        fadd dword ptr ss : [ebp-8]
        fstp dword ptr ss : [ebp-0xC]
        fld dword ptr ss : [ebp-0xC]
        fistp dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ss : [ebp-0x18]
        mov word ptr ds : [edx+4], cx
        mov ecx, dword ptr ss : [ebp-4]
        add edx, 6
        inc esi
        add eax, 0x10
        cmp esi, dword ptr ds : [ecx+0x1058]
        jb public_6d399e7
        public_6d39a63 : nop
        mov eax, dword ptr ds : [public_6d72920]
        mov dword ptr ss : [ebp-0x18], eax
        fldcw word ptr ss : [ebp-0x18]
        pop edi
        pop esi
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x6d39985)
    }
}

#undef public_6d399a5
#undef public_6d399e7
#undef public_6d39a63
