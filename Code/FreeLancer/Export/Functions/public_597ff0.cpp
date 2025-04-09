#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_597ff0);
CLANG_FORWARD_PROC_SYMBOL(public_598210);

#define public_598031 _public_598031
#define public_59803c _public_59803c
#define public_598051 _public_598051
#define public_59805c _public_59805c
#define public_598060 _public_598060
#define public_598082 _public_598082
#define public_59808d _public_59808d
#define public_598099 _public_598099
#define public_59809c _public_59809c
#define public_5980bc _public_5980bc
#define public_5980cd _public_5980cd
#define public_5980ee _public_5980ee
#define public_5980f9 _public_5980f9

PROC_DECLARE(0x597ff0, internal_597ff0, public_597ff0);
extern "C" NAKED register_t __cdecl internal_597ff0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        test ebx, ebx
        jbe public_5980f9
        mov edx, dword ptr ds : [ecx+0xA8]
        test edx, edx
        je public_5980f9
        mov eax, dword ptr ds : [ecx+0xAC]
        sub eax, edx
        sar eax, 2
        cmp ebx, eax
        jae public_5980f9
        test edx, edx
        push ebp
        push edi
        lea edi, ds:[ebx-1]
        mov ebp, 2
        jne public_598031
        xor eax, eax
        jmp public_59803c
        public_598031 : nop
        mov eax, dword ptr ds : [ecx+0xAC]
        sub eax, edx
        sar eax, 2
        public_59803c : nop
        lea edx, ds:[edi+2]
        cmp edx, eax
        jbe public_598060
        mov edx, dword ptr ds : [ecx+0xA8]
        test edx, edx
        jne public_598051
        xor eax, eax
        jmp public_59805c
        public_598051 : nop
        mov eax, dword ptr ds : [ecx+0xAC]
        sub eax, edx
        sar eax, 2
        public_59805c : nop
        sub eax, edi
        mov ebp, eax
        public_598060 : nop
        fld dword ptr ds : [ecx+0xEC]
        mov edx, dword ptr ds : [ecx+0xA8]
        fadd st(0), st
        push esi
        mov esi, edx
        test esi, esi
        fld st(0)
        fadd dword ptr ds : [edx+edi*4]
        fstp dword ptr ss : [esp+0x18]
        jne public_598082
        xor eax, eax
        jmp public_59808d
        public_598082 : nop
        mov eax, dword ptr ds : [ecx+0xAC]
        sub eax, esi
        sar eax, 2
        public_59808d : nop
        lea esi, ds:[ebx+1]
        cmp esi, eax
        jne public_598099
        fld dword ptr ds : [ecx+0x7C]
        jmp public_59809c
        public_598099 : nop
        fld dword ptr ds : [edx+esi*4]
        public_59809c : nop
        fsub st, st(1)
        pop esi
        fstp dword ptr ss : [esp+0xC]
        fstp st(0)
        fld dword ptr ss : [esp+0x18]
        fcom dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jp public_5980bc
        fstp st(0)
        fld dword ptr ss : [esp+0x14]
        jmp public_5980cd
        public_5980bc : nop
        fcom dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 0x41
        jne public_5980cd
        fstp st(0)
        fld dword ptr ss : [esp+0xC]
        public_5980cd : nop
        fcom dword ptr ds : [edx+ebx*4]
        fnstsw ax
        test ah, 0x44
        jnp public_5980ee
        push ebp
        fstp dword ptr ds : [edx+ebx*4]
        push edi
        push 0
        push 0
        call public_598210
        pop edi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        public_5980ee : nop
        pop edi
        fstp st(0)
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        public_5980f9 : nop
        xor al, al
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x597ff0)
    }
}

#undef public_598031
#undef public_59803c
#undef public_598051
#undef public_59805c
#undef public_598060
#undef public_598082
#undef public_59808d
#undef public_598099
#undef public_59809c
#undef public_5980bc
#undef public_5980cd
#undef public_5980ee
#undef public_5980f9
