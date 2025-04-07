#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6330d90);

#define public_6330dc0 _public_6330dc0
#define public_6330e28 _public_6330e28
#define public_6330e4c _public_6330e4c
#define public_6330e5e _public_6330e5e

PROC_DECLARE(0x6330d90, internal_6330d90, public_6330d90);
extern "C" NAKED register_t __cdecl internal_6330d90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [eax]
        lea ebp, ds:[ecx+0xC]
        mov edx, ebp
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], esi
        mov eax, dword ptr ds : [eax+0xC]
        push edi
        xor edi, edi
        mov dword ptr ds : [edx+0xC], eax
        mov dword ptr ds : [ecx+8], edi
        mov dword ptr ds : [ecx+4], edi
        mov dword ptr ds : [ecx], edi
        xor ebx, ebx
        nop 
        public_6330dc0 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [eax+4]
        test esi, esi
        je public_6330e5e
        mov edx, dword ptr ds : [eax+8]
        sub edx, esi
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp ebx, edx
        jae public_6330e5e
        fld dword ptr ds : [edi+esi+0x10]
        fld dword ptr ss : [ebp+8]
        fmul dword ptr ds : [edi+esi+0xC]
        fld dword ptr ss : [ebp+4]
        fmul dword ptr ds : [edi+esi+8]
        faddp 
        fld dword ptr ss : [ebp]
        fmul dword ptr ds : [edi+esi+4]
        faddp 
        fsub dword ptr ss : [ebp+0xC]
        fcom 
        fnstsw ax
        test ah, 0x41
        jne public_6330e28
        mov eax, 1
        fstp st(0)
        mov esi, dword ptr ds : [ecx+eax*4]
        fstp st(0)
        inc esi
        inc ebx
        mov dword ptr ds : [ecx+eax*4], esi
        add edi, 0x14
        jmp public_6330dc0
        public_6330e28 : nop
        fxch 
        fchs 
        fxch 
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_6330e4c
        mov eax, 2
        mov esi, dword ptr ds : [ecx+eax*4]
        inc esi
        inc ebx
        mov dword ptr ds : [ecx+eax*4], esi
        add edi, 0x14
        jmp public_6330dc0
        public_6330e4c : nop
        xor eax, eax
        mov esi, dword ptr ds : [ecx+eax*4]
        inc esi
        inc ebx
        mov dword ptr ds : [ecx+eax*4], esi
        add edi, 0x14
        jmp public_6330dc0
        public_6330e5e : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6330d90)
    }
}

#undef public_6330dc0
#undef public_6330e28
#undef public_6330e4c
#undef public_6330e5e
