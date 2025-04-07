#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e8c20);

#define public_62e8c49 _public_62e8c49
#define public_62e8c4b _public_62e8c4b
#define public_62e8ca5 _public_62e8ca5
#define public_62e8cb5 _public_62e8cb5
#define public_62e8cb7 _public_62e8cb7
#define public_62e8cd1 _public_62e8cd1

PROC_DECLARE(0x62e8c20, internal_62e8c20, public_62e8c20);
extern "C" NAKED register_t __cdecl internal_62e8c20()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        push esi
        push edi
        je public_62e8cd1
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62e8cd1
        mov ecx, dword ptr ds : [ecx+8]
        test ecx, ecx
        je public_62e8c49
        add ecx, 0xFFFFFFF8
        jmp public_62e8c4b
        public_62e8c49 : nop
        xor ecx, ecx
        public_62e8c4b : nop
        mov eax, dword ptr ds : [ecx]
        lea esi, ds:[ebx+8]
        push esi
        call dword ptr ds : [eax+0x50]
        test eax, eax
        jne public_62e8cd1
        mov edi, dword ptr ss : [esp+0x10]
        fld dword ptr ds : [edi]
        fsub dword ptr ds : [esi]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_63a07e4]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_62e8ca5
        fld dword ptr ds : [edi+4]
        fsub dword ptr ds : [esi+4]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_63a07e4]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_62e8ca5
        fld dword ptr ds : [edi+8]
        fsub dword ptr ds : [esi+8]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_63a07e4]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jnp public_62e8cd1
        public_62e8ca5 : nop
        mov eax, dword ptr ds : [ebx]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62e8cb5
        add eax, 0xFFFFFFF8
        jmp public_62e8cb7
        public_62e8cb5 : nop
        xor eax, eax
        public_62e8cb7 : nop
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        push edi
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], edx
        public_62e8cd1 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62e8c20)
    }
}

#undef public_62e8c49
#undef public_62e8c4b
#undef public_62e8ca5
#undef public_62e8cb5
#undef public_62e8cb7
#undef public_62e8cd1
