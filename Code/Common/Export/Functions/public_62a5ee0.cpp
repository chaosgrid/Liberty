#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_62a5f08 _public_62a5f08
#define public_62a5f0e _public_62a5f0e
#define public_62a5f30 _public_62a5f30
#define public_62a5f36 _public_62a5f36
#define public_62a5f58 _public_62a5f58
#define public_62a5f5e _public_62a5f5e
#define public_62a5f97 _public_62a5f97
#define public_62a5f99 _public_62a5f99
#define public_62a5fb5 _public_62a5fb5
#define public_62a5fb7 _public_62a5fb7
#define public_62a5fd3 _public_62a5fd3
#define public_62a5fd5 _public_62a5fd5

PROC_DECLARE(0x62a5ee0, internal_62a5ee0, public_62a5ee0);
extern "C" NAKED register_t __cdecl internal_62a5ee0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        fld dword ptr ds : [esi]
        push edi
        fcomp dword ptr ds : [public_6399408]
        mov dword ptr ss : [esp+0x10], ecx
        fld dword ptr ds : [esi]
        fnstsw ax
        test ah, 0x41
        jne public_62a5f08
        fadd dword ptr ds : [public_639d20c]
        jmp public_62a5f0e
        public_62a5f08 : nop
        fsub dword ptr ds : [public_639d20c]
        public_62a5f0e : nop
        call public_6391dae
        fld dword ptr ds : [esi+4]
        fcomp dword ptr ds : [public_6399408]
        mov edi, eax
        fld dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 0x41
        jne public_62a5f30
        fadd dword ptr ds : [public_639d20c]
        jmp public_62a5f36
        public_62a5f30 : nop
        fsub dword ptr ds : [public_639d20c]
        public_62a5f36 : nop
        call public_6391dae
        fld dword ptr ds : [esi+8]
        fcomp dword ptr ds : [public_6399408]
        mov ebp, eax
        fld dword ptr ds : [esi+8]
        fnstsw ax
        test ah, 0x41
        jne public_62a5f58
        fadd dword ptr ds : [public_639d20c]
        jmp public_62a5f5e
        public_62a5f58 : nop
        fsub dword ptr ds : [public_639d20c]
        public_62a5f5e : nop
        call public_6391dae
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [eax+0x44]
        mov dword ptr ss : [esp+0x28], esi
        fild dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [public_639a1d0]
        fmul dword ptr ds : [public_639c13c]
        call public_6391dae
        mov ecx, eax
        mov eax, edi
        cdq 
        idiv esi
        imul eax, esi
        test edi, edi
        jle public_62a5f97
        add eax, ecx
        jmp public_62a5f99
        public_62a5f97 : nop
        sub eax, ecx
        public_62a5f99 : nop
        mov dword ptr ss : [esp+0x28], eax
        mov eax, ebp
        fild dword ptr ss : [esp+0x28]
        cdq 
        idiv esi
        fstp dword ptr ss : [esp+0x14]
        imul eax, esi
        test ebp, ebp
        jle public_62a5fb5
        add eax, ecx
        jmp public_62a5fb7
        public_62a5fb5 : nop
        sub eax, ecx
        public_62a5fb7 : nop
        mov dword ptr ss : [esp+0x28], eax
        mov eax, ebx
        fild dword ptr ss : [esp+0x28]
        cdq 
        idiv esi
        fstp dword ptr ss : [esp+0x18]
        imul eax, esi
        test ebx, ebx
        jle public_62a5fd3
        add eax, ecx
        jmp public_62a5fd5
        public_62a5fd3 : nop
        sub eax, ecx
        public_62a5fd5 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ss : [esp+0x24]
        fild dword ptr ss : [esp+0x28]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x14]
        pop ebp
        mov dword ptr ds : [ecx+8], edx
        pop ebx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x62a5ee0)
    }
}

#undef public_62a5f08
#undef public_62a5f0e
#undef public_62a5f30
#undef public_62a5f36
#undef public_62a5f58
#undef public_62a5f5e
#undef public_62a5f97
#undef public_62a5f99
#undef public_62a5fb5
#undef public_62a5fb7
#undef public_62a5fd3
#undef public_62a5fd5
