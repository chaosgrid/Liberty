#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bcd70);

#define public_62bcd90 _public_62bcd90
#define public_62bcdc6 _public_62bcdc6
#define public_62bcdd3 _public_62bcdd3
#define public_62bcdd7 _public_62bcdd7
#define public_62bcde4 _public_62bcde4
#define public_62bcde6 _public_62bcde6
#define public_62bcdf0 _public_62bcdf0
#define public_62bce04 _public_62bce04
#define public_62bce26 _public_62bce26
#define public_62bce4a _public_62bce4a
#define public_62bce58 _public_62bce58
#define public_62bce6d _public_62bce6d

PROC_DECLARE(0x62bcd70, internal_62bcd70, public_62bcd70);
extern "C" NAKED register_t __cdecl internal_62bcd70()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov eax, ebp
        sub eax, ebx
        sar eax, 2
        cmp eax, 0x10
        jle public_62bce6d
        push esi
        push edi
        lea esp, ss:[esp]
        public_62bcd90 : nop
        mov ecx, dword ptr ds : [ebx]
        fld dword ptr ds : [ecx+4]
        mov esi, dword ptr ss : [ebp-4]
        cdq 
        sub eax, edx
        sar eax, 1
        mov edx, dword ptr ds : [ebx+eax*4]
        fcomp dword ptr ds : [edx+4]
        fnstsw ax
        test ah, 5
        jp public_62bcdc6
        fld dword ptr ds : [edx+4]
        fcomp dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 5
        jnp public_62bcde6
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 5
        jp public_62bcdd3
        jmp public_62bcde4
        public_62bcdc6 : nop
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 5
        jp public_62bcdd7
        public_62bcdd3 : nop
        mov edx, ecx
        jmp public_62bcde6
        public_62bcdd7 : nop
        fld dword ptr ds : [edx+4]
        fcomp dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 5
        jp public_62bcde6
        public_62bcde4 : nop
        mov edx, esi
        public_62bcde6 : nop
        mov ecx, ebp
        mov esi, ebx
        lea ebx, ds:[ebx]
        public_62bcdf0 : nop
        mov edi, dword ptr ds : [esi]
        fld dword ptr ds : [edi+4]
        fcomp dword ptr ds : [edx+4]
        fnstsw ax
        test ah, 5
        jp public_62bce04
        add esi, 4
        jmp public_62bcdf0
        public_62bce04 : nop
        mov eax, dword ptr ds : [ecx-4]
        fld dword ptr ds : [edx+4]
        fcomp dword ptr ds : [eax+4]
        sub ecx, 4
        fnstsw ax
        test ah, 5
        jnp public_62bce04
        cmp ecx, esi
        jbe public_62bce26
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [ecx], edi
        add esi, 4
        jmp public_62bcdf0
        public_62bce26 : nop
        mov ecx, ebp
        mov edx, esi
        sub ecx, esi
        sub edx, ebx
        and ecx, 0xFFFFFFFC
        and edx, 0xFFFFFFFC
        cmp ecx, edx
        push 0
        jg public_62bce4a
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        push ebp
        push esi
        call public_62bcd70
        mov ebp, esi
        jmp public_62bce58
        public_62bce4a : nop
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        push esi
        push ebx
        call public_62bcd70
        mov ebx, esi
        public_62bce58 : nop
        mov eax, ebp
        sub eax, ebx
        sar eax, 2
        add esp, 0x10
        cmp eax, 0x10
        jg public_62bcd90
        pop edi
        pop esi
        public_62bce6d : nop
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62bcd70)
    }
}

#undef public_62bcd90
#undef public_62bcdc6
#undef public_62bcdd3
#undef public_62bcdd7
#undef public_62bcde4
#undef public_62bcde6
#undef public_62bcdf0
#undef public_62bce04
#undef public_62bce26
#undef public_62bce4a
#undef public_62bce58
#undef public_62bce6d
