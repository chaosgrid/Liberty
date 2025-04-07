#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37e98);

#define public_6d39c90 _public_6d39c90
#define public_6d39cc5 _public_6d39cc5
#define public_6d39ce6 _public_6d39ce6
#define public_6d39cfe _public_6d39cfe

PROC_DECLARE(0x6d39c5c, internal_6d39c5c, public_6d39c5c);
extern "C" NAKED register_t __cdecl internal_6d39c5c()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ds : [ecx+0x1050]
        imul eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x1054]
        imul edx, dword ptr ss : [ebp+0xC]
        add eax, edx
        add eax, dword ptr ds : [ecx+0x18]
        mov edx, dword ptr ds : [ecx+0x1058]
        push esi
        lea esi, ds:[eax+edx*4]
        cmp eax, esi
        mov edx, dword ptr ss : [ebp+0x10]
        jae public_6d39ce6
        fld dword ptr ds : [public_6d5f5cc]
        push edi
        public_6d39c90 : nop
        movzx edi, byte ptr ds : [eax+2]
        mov dword ptr ss : [ebp+0x10], edi
        fild dword ptr ss : [ebp+0x10]
        fmul st, st(1)
        fstp dword ptr ds : [edx]
        movzx edi, byte ptr ds : [eax+1]
        mov dword ptr ss : [ebp+0x10], edi
        fild dword ptr ss : [ebp+0x10]
        fmul st, st(1)
        fstp dword ptr ds : [edx+4]
        mov edi, dword ptr ds : [eax]
        and edi, 0xFF
        test edi, edi
        mov dword ptr ss : [ebp+0x10], edi
        fild dword ptr ss : [ebp+0x10]
        jge public_6d39cc5
        fadd dword ptr ds : [public_6d5f200]
        public_6d39cc5 : nop
        fmul st, st(1)
        add eax, 4
        add edx, 0x10
        cmp eax, esi
        fstp dword ptr ds : [edx-8]
        movzx edi, byte ptr ds : [eax-1]
        mov dword ptr ss : [ebp+0x10], edi
        fild dword ptr ss : [ebp+0x10]
        fmul st, st(1)
        fstp dword ptr ds : [edx-4]
        jb public_6d39c90
        fstp st(0)
        pop edi
        public_6d39ce6 : nop
        cmp dword ptr ds : [ecx+0x10], 0
        pop esi
        je public_6d39cfe
        mov eax, dword ptr ds : [ecx+0x1058]
        shl eax, 4
        sub edx, eax
        push edx
        call public_6d37e98
        public_6d39cfe : nop
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d39c5c)
    }
}

#undef public_6d39c90
#undef public_6d39cc5
#undef public_6d39ce6
#undef public_6d39cfe
