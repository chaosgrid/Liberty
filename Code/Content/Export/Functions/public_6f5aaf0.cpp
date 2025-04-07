#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f5aaf0);

#define public_6f5ab04 _public_6f5ab04
#define public_6f5ab67 _public_6f5ab67
#define public_6f5ab6f _public_6f5ab6f
#define public_6f5ab80 _public_6f5ab80
#define public_6f5abad _public_6f5abad
#define public_6f5abb6 _public_6f5abb6

PROC_DECLARE(0x6f5aaf0, internal_6f5aaf0, public_6f5aaf0);
extern "C" NAKED register_t __cdecl internal_6f5aaf0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6fd0e58]
        mov edx, dword ptr ds : [public_6fd0e5c]
        cmp ecx, edx
        je public_6f5abb6
        public_6f5ab04 : nop
        fld dword ptr ds : [ecx]
        fsub dword ptr ss : [esp+4]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fbbb54]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_6f5ab67
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ss : [esp+8]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fbbb54]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_6f5ab67
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ss : [esp+0xC]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fbbb54]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_6f5ab67
        fld dword ptr ds : [ecx+0xC]
        fsub dword ptr ss : [esp+0x10]
        fabs 
        fcomp qword ptr ds : [public_6fb70c0]
        fnstsw ax
        test ah, 5
        jnp public_6f5ab6f
        public_6f5ab67 : nop
        add ecx, 0x10
        cmp ecx, edx
        jne public_6f5ab04
        ret 
        public_6f5ab6f : nop
        cmp ecx, edx
        je public_6f5abb6
        lea eax, ds:[ecx+0x10]
        cmp eax, edx
        je public_6f5abad
        push ebx
        push esi
        lea ecx, ds:[eax-0x10]
        push edi
        public_6f5ab80 : nop
        mov esi, eax
        mov ebx, dword ptr ds : [esi]
        mov edi, ecx
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ebx
        mov ebx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], ebx
        mov esi, dword ptr ds : [esi+0xC]
        add eax, 0x10
        add ecx, 0x10
        cmp eax, edx
        mov dword ptr ds : [edi+0xC], esi
        jne public_6f5ab80
        mov edx, dword ptr ds : [public_6fd0e5c]
        pop edi
        pop esi
        pop ebx
        public_6f5abad : nop
        sub edx, 0x10
        mov dword ptr ds : [public_6fd0e5c], edx
        public_6f5abb6 : nop
        ret 
        UNREACHABLE_TRAP(0x6f5aaf0)
    }
}

#undef public_6f5ab04
#undef public_6f5ab67
#undef public_6f5ab6f
#undef public_6f5ab80
#undef public_6f5abad
#undef public_6f5abb6
