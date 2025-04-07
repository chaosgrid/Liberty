#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37e98);

#define public_6d39d36 _public_6d39d36
#define public_6d39d6b _public_6d39d6b
#define public_6d39d82 _public_6d39d82
#define public_6d39d9a _public_6d39d9a

PROC_DECLARE(0x6d39d02, internal_6d39d02, public_6d39d02);
extern "C" NAKED register_t __cdecl internal_6d39d02()
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
        jae public_6d39d82
        fld dword ptr ds : [public_6d5f5cc]
        push edi
        public_6d39d36 : nop
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
        jge public_6d39d6b
        fadd dword ptr ds : [public_6d5f200]
        public_6d39d6b : nop
        fmul st, st(1)
        add eax, 4
        add edx, 0x10
        cmp eax, esi
        fstp dword ptr ds : [edx-8]
        fld1 
        fstp dword ptr ds : [edx-4]
        jb public_6d39d36
        fstp st(0)
        pop edi
        public_6d39d82 : nop
        cmp dword ptr ds : [ecx+0x10], 0
        pop esi
        je public_6d39d9a
        mov eax, dword ptr ds : [ecx+0x1058]
        shl eax, 4
        sub edx, eax
        push edx
        call public_6d37e98
        public_6d39d9a : nop
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d39d02)
    }
}

#undef public_6d39d36
#undef public_6d39d6b
#undef public_6d39d82
#undef public_6d39d9a
