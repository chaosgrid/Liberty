#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d47d96);

#define public_6d47dbc _public_6d47dbc
#define public_6d47dd1 _public_6d47dd1
#define public_6d47e0c _public_6d47e0c
#define public_6d47e1a _public_6d47e1a
#define public_6d47e28 _public_6d47e28
#define public_6d47e38 _public_6d47e38
#define public_6d47e72 _public_6d47e72

PROC_DECLARE(0x6d47d96, internal_6d47d96, public_6d47d96);
extern "C" NAKED register_t __cdecl internal_6d47d96()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x40
        mov eax, dword ptr ss : [ebp+8]
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+0x10]
        cmp esi, eax
        push edi
        jne public_6d47e1a
        cmp dword ptr ss : [ebp+0xC], eax
        je public_6d47e0c
        mov ebx, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp+0x10]
        mov edi, 0xFFFFFFFC
        public_6d47dbc : nop
        mov esi, 0xFFFFFFF0
        fld dword ptr ds : [edx+edi*4+0x10]
        fld dword ptr ds : [edx+edi*4+0x20]
        fld dword ptr ds : [edx+edi*4+0x30]
        fld dword ptr ds : [edx+edi*4+0x40]
        public_6d47dd1 : nop
        fld st(3)
        fmul dword ptr ds : [ecx+esi*4+0x40]
        fld st(3)
        fmul dword ptr ds : [ecx+esi*4+0x44]
        fld st(3)
        fmul dword ptr ds : [ecx+esi*4+0x48]
        fld st(3)
        fmul dword ptr ds : [ecx+esi*4+0x4C]
        fxch st(3)
        faddp 
        fxch st(2)
        faddp 
        faddp 
        fstp dword ptr ds : [ebx+esi*4+0x40]
        add esi, 4
        jne public_6d47dd1
        ffree st(3)
        ffree st(2)
        ffree st(1)
        ffree st(0)
        lea ebx, ds:[ebx+4]
        inc edi
        jne public_6d47dbc
        jmp public_6d47e72
        public_6d47e0c : nop
        push 0x10
        pop ecx
        lea edi, ss:[ebp-0x40]
        rep movsd
        lea ecx, ss:[ebp-0x40]
        mov dword ptr ss : [ebp+0x10], ecx
        public_6d47e1a : nop
        mov ebx, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp+0x10]
        mov edi, 0xFFFFFFFC
        public_6d47e28 : nop
        mov esi, 0xFFFFFFFC
        fld dword ptr ds : [ecx]
        fld dword ptr ds : [ecx+4]
        fld dword ptr ds : [ecx+8]
        fld dword ptr ds : [ecx+0xC]
        public_6d47e38 : nop
        fld st(3)
        fmul dword ptr ds : [edx+esi*4+0x10]
        fld st(3)
        fmul dword ptr ds : [edx+esi*4+0x20]
        fld st(3)
        fmul dword ptr ds : [edx+esi*4+0x30]
        fld st(3)
        fmul dword ptr ds : [edx+esi*4+0x40]
        fxch st(3)
        faddp 
        fxch st(2)
        faddp 
        faddp 
        fstp dword ptr ds : [ebx+esi*4+0x10]
        inc esi
        jne public_6d47e38
        ffree st(3)
        ffree st(2)
        ffree st(1)
        ffree st(0)
        lea ecx, ds:[ecx+0x10]
        lea ebx, ds:[ebx+0x10]
        inc edi
        jne public_6d47e28
        public_6d47e72 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x6d47d96)
    }
}

#undef public_6d47dbc
#undef public_6d47dd1
#undef public_6d47e0c
#undef public_6d47e1a
#undef public_6d47e28
#undef public_6d47e38
#undef public_6d47e72
