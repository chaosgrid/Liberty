#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_510bf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_510c0f _public_510c0f
#define public_510c30 _public_510c30
#define public_510c56 _public_510c56

PROC_DECLARE(0x510bf0, internal_510bf0, public_510bf0);
extern "C" NAKED register_t __cdecl internal_510bf0()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        fmul qword ptr ds : [public_5db640]
        fcom qword ptr ds : [public_5c89b8]
        fnstsw ax
        test ah, 0x41
        jne public_510c0f
        fstp st(0)
        fld dword ptr ds : [public_5c75dc]
        public_510c0f : nop
        push ebx
        fst dword ptr ds : [public_67509c]
        mov ebx, dword ptr ds : [public_675180]
        push esi
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_510c56
        fsubr dword ptr ds : [public_5c75dc]
        push edi
        lea ebx, ds:[ebx]
        public_510c30 : nop
        mov eax, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [eax+0x14]
        fild dword ptr ds : [edi+0x2B4]
        fmul st, st(1)
        fadd dword ptr ds : [public_5c75e0]
        call public_5b7ec0
        mov dword ptr ds : [edi+0x2B8], eax
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        jne public_510c30
        pop edi
        public_510c56 : nop
        pop esi
        fstp st(0)
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x510bf0)
    }
}

#undef public_510c0f
#undef public_510c30
#undef public_510c56
