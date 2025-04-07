#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d47ccc);

#define public_6d47d07 _public_6d47d07
#define public_6d47d33 _public_6d47d33
#define public_6d47d8e _public_6d47d8e

PROC_DECLARE(0x6d47ccc, internal_6d47ccc, public_6d47ccc);
extern "C" NAKED register_t __cdecl internal_6d47ccc()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push edi
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp+0xC]
        fld dword ptr ds : [edx]
        fmul dword ptr ds : [edx]
        fld dword ptr ds : [edx+4]
        fmul dword ptr ds : [edx+4]
        fld dword ptr ds : [edx+8]
        fmul dword ptr ds : [edx+8]
        fxch st(2)
        faddp 
        faddp 
        fst dword ptr ss : [ebp-8]
        mov eax, dword ptr ss : [ebp-8]
        test eax, eax
        jne public_6d47d07
        ffree st(0)
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], eax
        jmp public_6d47d8e
        public_6d47d07 : nop
        fld1 
        fsubp 
        fstp dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp-4]
        and eax, 0x7FFFFFFF
        cmp eax, 0x3727C5AC
        jg public_6d47d33
        cmp ecx, edx
        je public_6d47d8e
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], eax
        jmp public_6d47d8e
        public_6d47d33 : nop
        mov eax, dword ptr ss : [ebp-8]
        mov edi, eax
        shr edi, 0xC
        and eax, 0xFFFFFF
        and edi, 0xFF8
        or eax, 0x3F000000
        mov dword ptr ss : [ebp-4], eax
        fld dword ptr ss : [ebp-4]
        fmul dword ptr ds : [edi+public_6d6d420]
        mov eax, 0xBEFFFFFF
        sub eax, dword ptr ss : [ebp-8]
        fadd dword ptr ds : [edi+public_6d6d424]
        shr eax, 1
        and eax, 0xFF800000
        mov dword ptr ss : [ebp-4], eax
        fmul dword ptr ss : [ebp-4]
        fld dword ptr ds : [edx]
        fmul st, st(1)
        fld dword ptr ds : [edx+4]
        fmul st, st(2)
        fld dword ptr ds : [edx+8]
        fmul st, st(3)
        fxch st(2)
        fstp dword ptr ds : [ecx]
        fstp dword ptr ds : [ecx+4]
        fstp dword ptr ds : [ecx+8]
        fstp st(0)
        jmp public_6d47d8e
        public_6d47d8e : nop
        mov eax, dword ptr ss : [ebp+8]
        pop edi
        leave 
        ret 8
        UNREACHABLE_TRAP(0x6d47ccc)
    }
}

#undef public_6d47d07
#undef public_6d47d33
#undef public_6d47d8e
