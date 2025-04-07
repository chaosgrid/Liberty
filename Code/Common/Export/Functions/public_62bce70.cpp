#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bce70);

#define public_62bce90 _public_62bce90
#define public_62bcec6 _public_62bcec6
#define public_62bced3 _public_62bced3
#define public_62bced7 _public_62bced7
#define public_62bcee4 _public_62bcee4
#define public_62bcee6 _public_62bcee6
#define public_62bcef0 _public_62bcef0
#define public_62bcf04 _public_62bcf04
#define public_62bcf26 _public_62bcf26
#define public_62bcf4a _public_62bcf4a
#define public_62bcf58 _public_62bcf58
#define public_62bcf6d _public_62bcf6d

PROC_DECLARE(0x62bce70, internal_62bce70, public_62bce70);
extern "C" NAKED register_t __cdecl internal_62bce70()
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
        jle public_62bcf6d
        push esi
        push edi
        lea esp, ss:[esp]
        public_62bce90 : nop
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
        jp public_62bcec6
        fld dword ptr ds : [edx+4]
        fcomp dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 5
        jnp public_62bcee6
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 5
        jp public_62bced3
        jmp public_62bcee4
        public_62bcec6 : nop
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 5
        jp public_62bced7
        public_62bced3 : nop
        mov edx, ecx
        jmp public_62bcee6
        public_62bced7 : nop
        fld dword ptr ds : [edx+4]
        fcomp dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 5
        jp public_62bcee6
        public_62bcee4 : nop
        mov edx, esi
        public_62bcee6 : nop
        mov ecx, ebp
        mov esi, ebx
        lea ebx, ds:[ebx]
        public_62bcef0 : nop
        mov edi, dword ptr ds : [esi]
        fld dword ptr ds : [edi+4]
        fcomp dword ptr ds : [edx+4]
        fnstsw ax
        test ah, 5
        jp public_62bcf04
        add esi, 4
        jmp public_62bcef0
        public_62bcf04 : nop
        mov eax, dword ptr ds : [ecx-4]
        fld dword ptr ds : [edx+4]
        fcomp dword ptr ds : [eax+4]
        sub ecx, 4
        fnstsw ax
        test ah, 5
        jnp public_62bcf04
        cmp ecx, esi
        jbe public_62bcf26
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [ecx], edi
        add esi, 4
        jmp public_62bcef0
        public_62bcf26 : nop
        mov ecx, ebp
        mov edx, esi
        sub ecx, esi
        sub edx, ebx
        and ecx, 0xFFFFFFFC
        and edx, 0xFFFFFFFC
        cmp ecx, edx
        push 0
        jg public_62bcf4a
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        push ebp
        push esi
        call public_62bce70
        mov ebp, esi
        jmp public_62bcf58
        public_62bcf4a : nop
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        push esi
        push ebx
        call public_62bce70
        mov ebx, esi
        public_62bcf58 : nop
        mov eax, ebp
        sub eax, ebx
        sar eax, 2
        add esp, 0x10
        cmp eax, 0x10
        jg public_62bce90
        pop edi
        pop esi
        public_62bcf6d : nop
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62bce70)
    }
}

#undef public_62bce90
#undef public_62bcec6
#undef public_62bced3
#undef public_62bced7
#undef public_62bcee4
#undef public_62bcee6
#undef public_62bcef0
#undef public_62bcf04
#undef public_62bcf26
#undef public_62bcf4a
#undef public_62bcf58
#undef public_62bcf6d
