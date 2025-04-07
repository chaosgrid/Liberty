#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_63829d0);
CLANG_FORWARD_PROC_SYMBOL(public_63848a0);

#define public_63848ea _public_63848ea
#define public_638498a _public_638498a
#define public_63849ae _public_63849ae
#define public_63849bd _public_63849bd

PROC_DECLARE(0x63848a0, internal_63848a0, public_63848a0);
extern "C" NAKED register_t __cdecl internal_63848a0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x14
        cmp dword ptr ds : [public_658b078], 4
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+0x28]
        push edi
        mov edi, dword ptr ss : [ebp+0x24]
        mov dword ptr ss : [esp+0xC], 0
        jl public_63848ea
        mov eax, dword ptr ss : [ebp+0x20]
        mov ecx, dword ptr ss : [ebp+0x1C]
        mov edx, dword ptr ss : [ebp+0x18]
        push esi
        push edi
        push eax
        mov eax, dword ptr ss : [ebp+0x14]
        push ecx
        mov ecx, dword ptr ds : [public_658b7fc]
        push edx
        push eax
/*FIXUP push offset public_63f74a8 @0x63848db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f74a8
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0x20
        public_63848ea : nop
        mov edx, dword ptr ss : [ebp+0x14]
        fld qword ptr ss : [ebp+0x1C]
        mov eax, dword ptr ss : [ebp+0x18]
        fsub qword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ss : [ebp+0x1C]
        mov dword ptr ds : [public_658b928], edx
        mov edx, dword ptr ss : [ebp+0x20]
        fstp qword ptr ss : [esp+0x10]
        mov ebx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [public_658b92c], eax
        mov eax, dword ptr ss : [ebp+0x24]
        mov dword ptr ds : [public_658b934], edx
        mov dword ptr ds : [public_658b930], ecx
        mov ecx, dword ptr ss : [ebp+0x28]
        lea edx, ss:[esp+0xC]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [public_658b938], eax
        mov eax, dword ptr ds : [public_658b6cc]
        push eax
        mov dword ptr ds : [public_658b93c], ecx
        mov ecx, dword ptr ds : [public_658b6c8]
        push ecx
        push ebx
        push edx
        push esi
        push edi
        call public_63829d0
        fstp qword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 0x1C
        test eax, eax
        je public_638498a
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [ebp+0x20]
        mov edx, dword ptr ss : [ebp+0x1C]
        push ebx
        push eax
        mov eax, dword ptr ss : [ebp+0x18]
        push ecx
        mov ecx, dword ptr ss : [ebp+0x14]
        push edx
        push eax
        push ecx
        push esi
        push edi
/*FIXUP push offset public_63f742c @0x6384972*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f742c
        call public_6356960
        push 0
        push 0
        push 1
        call public_6378600
        add esp, 0x30
        public_638498a : nop
        fld qword ptr ss : [ebp+0x14]
        mov edx, dword ptr ss : [ebp+0x10]
        fmul qword ptr ss : [ebp+0x24]
        mov eax, dword ptr ss : [ebp+8]
        lea ecx, ds:[edx*8]
        mov edx, dword ptr ss : [ebp+0xC]
        test edx, edx
        fdiv qword ptr ss : [esp+0x10]
        lea eax, ds:[ecx+eax-8]
        fchs 
        je public_63849bd
        public_63849ae : nop
        fld qword ptr ss : [esp+0x18]
        fmul qword ptr ds : [eax]
        fadd st, st(1)
        fstp qword ptr ds : [eax]
        add eax, ecx
        dec edx
        jne public_63849ae
        public_63849bd : nop
        pop edi
        fstp st(0)
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x63848a0)
    }
}

#undef public_63848ea
#undef public_638498a
#undef public_63849ae
#undef public_63849bd
