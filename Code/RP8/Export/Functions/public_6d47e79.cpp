#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d47e79);

#define public_6d47e8c _public_6d47e8c
#define public_6d47e8f _public_6d47e8f
#define public_6d47ea3 _public_6d47ea3
#define public_6d47eb7 _public_6d47eb7
#define public_6d47f00 _public_6d47f00

PROC_DECLARE(0x6d47e79, internal_6d47e79, public_6d47e79);
extern "C" NAKED register_t __cdecl internal_6d47e79()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x44
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, dword ptr ss : [ebp+0xC]
        je public_6d47e8c
        cmp eax, dword ptr ss : [ebp+0x10]
        jne public_6d47e8f
        public_6d47e8c : nop
        lea eax, ss:[ebp-0x44]
        public_6d47e8f : nop
        push ebx
        push esi
        mov dword ptr ss : [ebp-4], eax
        push edi
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp+0x10]
        mov edi, 0xFFFFFFFC
        public_6d47ea3 : nop
        mov esi, 0xFFFFFFFC
        lea ebx, ds:[eax+edi*4+0x10]
        fld dword ptr ds : [ecx]
        fld dword ptr ds : [ecx+4]
        fld dword ptr ds : [ecx+8]
        fld dword ptr ds : [ecx+0xC]
        public_6d47eb7 : nop
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
        fstp dword ptr ds : [ebx]
        lea ebx, ds:[ebx+0x10]
        inc esi
        jne public_6d47eb7
        ffree st(3)
        ffree st(2)
        ffree st(1)
        ffree st(0)
        lea ecx, ds:[ecx+0x10]
        inc edi
        jne public_6d47ea3
        mov esi, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp+8]
        cmp esi, eax
        je public_6d47f00
        push 0x10
        pop ecx
        mov edi, eax
        rep movsd
        public_6d47f00 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x6d47e79)
    }
}

#undef public_6d47e8c
#undef public_6d47e8f
#undef public_6d47ea3
#undef public_6d47eb7
#undef public_6d47f00
