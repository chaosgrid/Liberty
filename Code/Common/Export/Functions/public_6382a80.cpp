#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6377fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6380d90);
CLANG_FORWARD_PROC_SYMBOL(public_6382a80);
CLANG_FORWARD_PROC_SYMBOL(public_6382bc0);

#define public_6382ada _public_6382ada
#define public_6382aec _public_6382aec
#define public_6382af9 _public_6382af9
#define public_6382b10 _public_6382b10
#define public_6382b4a _public_6382b4a
#define public_6382b66 _public_6382b66
#define public_6382b82 _public_6382b82
#define public_6382bae _public_6382bae

PROC_DECLARE(0x6382a80, internal_6382a80, public_6382a80);
extern "C" NAKED register_t __cdecl internal_6382a80()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0xC
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [esi+0x50]
        test ah, 0x10
        push edi
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        je public_6382ada
        mov ecx, dword ptr ds : [esi+0x34]
        mov edx, dword ptr ds : [ecx+4]
        lea edi, ds:[esi+0x10]
        push edi
        mov edi, dword ptr ds : [esi+0x18]
        push edi
        shr eax, 0xB
        and eax, 1
        push eax
        mov eax, dword ptr ds : [edx+8]
        push edx
        push ecx
        mov ecx, dword ptr ds : [public_658b24c]
        push eax
        push ecx
        call public_6382bc0
        fstp qword ptr ss : [esp+0x2C]
        add esp, 0x1C
        jmp public_6382b66
        public_6382ada : nop
        cmp dword ptr ds : [public_658b86c], 2
        jne public_6382aec
        mov edx, dword ptr ds : [esi+0x28]
        mov dword ptr ss : [esp+0xC], edx
        jmp public_6382af9
        public_6382aec : nop
        push esi
        call public_6380d90
        add esp, 4
        mov dword ptr ss : [esp+0xC], eax
        public_6382af9 : nop
        mov edi, dword ptr ds : [esi+0x38]
        test edi, edi
        je public_6382b4a
        mov eax, dword ptr ds : [edi+4]
        add edi, 4
        add edi, 4
        test eax, eax
        je public_6382b4a
        lea ebx, ds:[esi+0x10]
        public_6382b10 : nop
        mov ecx, dword ptr ds : [esi+0x18]
        push ebx
        push ecx
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax]
        xor edx, edx
        cmp ecx, esi
        mov ecx, dword ptr ss : [esp+0x14]
        sete dl
        push edx
        mov edx, dword ptr ds : [public_658b24c]
        push 0
        push eax
        push ecx
        push edx
        call public_6382bc0
        fadd qword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [edi]
        add esp, 0x1C
        add edi, 4
        fstp qword ptr ss : [esp+0x10]
        test eax, eax
        jne public_6382b10
        public_6382b4a : nop
        cmp dword ptr ds : [public_658b86c], 2
        je public_6382b66
        mov eax, dword ptr ds : [public_658b804]
        mov ecx, dword ptr ss : [esp+0xC]
        push eax
        push ecx
        call public_6377fe0
        add esp, 8
        public_6382b66 : nop
        test dword ptr ds : [esi+0x50], 0x10000
        je public_6382b82
        mov eax, dword ptr ds : [public_658b050]
        test eax, eax
        je public_6382b82
        fld qword ptr ss : [esp+0x10]
        fchs 
        fstp qword ptr ss : [esp+0x10]
        public_6382b82 : nop
        cmp dword ptr ds : [public_658b078], 4
        jl public_6382bae
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+0x4C]
        push edx
        mov edx, dword ptr ds : [public_658b7fc]
        push eax
        push ecx
/*FIXUP push offset public_63f6d30 @0x6382b9f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6d30
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0x14
        public_6382bae : nop
        fld qword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6382a80)
    }
}

#undef public_6382ada
#undef public_6382aec
#undef public_6382af9
#undef public_6382b10
#undef public_6382b4a
#undef public_6382b66
#undef public_6382b82
#undef public_6382bae
