#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_63809e0);
CLANG_FORWARD_PROC_SYMBOL(public_6381f00);

#define public_6381f56 _public_6381f56
#define public_6381f7d _public_6381f7d
#define public_6381f85 _public_6381f85
#define public_6381f9c _public_6381f9c
#define public_6381ff1 _public_6381ff1
#define public_6381ffc _public_6381ffc
#define public_6382020 _public_6382020
#define public_638202f _public_638202f
#define public_6382039 _public_6382039

PROC_DECLARE(0x6381f00, internal_6381f00, public_6381f00);
extern "C" NAKED register_t __cdecl internal_6381f00()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x10
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        cmp esi, 2
        push edi
        mov edi, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ds : [edi], 0
        jge public_6381f56
/*FIXUP push offset public_63f6a2c @0x6381f34*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6a2c
        call public_6356960
        push 0
        push 0
        push 5
        call public_6378600
        fld qword ptr ss : [esp+0x20]
        add esp, 0x10
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        public_6381f56 : nop
        jne public_6381f9c
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [ecx+4]
        fld qword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [ecx]
        fmul qword ptr ds : [ecx]
        fld qword ptr ds : [ecx+8]
        fmul qword ptr ds : [eax]
        fsubp 
        fcom qword ptr ds : [public_63a58b0]
        fld st(0)
        fnstsw ax
        test ah, 1
        je public_6381f7d
        fchs 
        public_6381f7d : nop
        mov eax, dword ptr ds : [public_658b6f4]
        fcomp qword ptr ds : [eax+8]
        public_6381f85 : nop
        fnstsw ax
        test ah, 1
        je public_6382039
        mov dword ptr ds : [edi], 1
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        public_6381f9c : nop
        cmp esi, 3
        jne public_6381ffc
        mov edx, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [edx+4]
        fld qword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [edx+8]
        mov edx, dword ptr ds : [edx]
        fmul qword ptr ds : [eax+0x10]
        fld qword ptr ds : [ecx+0x10]
        fmul qword ptr ds : [eax+8]
        fsubp 
        fmul qword ptr ds : [edx]
        fld qword ptr ds : [edx+8]
        fmul qword ptr ds : [eax+0x10]
        fld qword ptr ds : [edx+0x10]
        fmul qword ptr ds : [eax+8]
        fsubp 
        fmul qword ptr ds : [ecx]
        fsubp 
        fld qword ptr ds : [edx+8]
        fmul qword ptr ds : [ecx+0x10]
        fld qword ptr ds : [ecx+8]
        fmul qword ptr ds : [edx+0x10]
        fsubp 
        fmul qword ptr ds : [eax]
        faddp 
        fcom qword ptr ds : [public_63a58b0]
        fld st(0)
        fnstsw ax
        test ah, 1
        je public_6381ff1
        fchs 
        public_6381ff1 : nop
        mov ecx, dword ptr ds : [public_658b6f4]
        fcomp qword ptr ds : [ecx+0x10]
        jmp public_6381f85
        public_6381ffc : nop
        push edi
        mov edi, dword ptr ss : [ebp+8]
        lea edx, ss:[esp+0x10]
        push edx
        push esi
        push esi
        push edi
        call public_63809e0
        fld qword ptr ds : [public_63a5940]
        add esp, 0x14
        test esi, esi
        lea eax, ds:[esi-1]
        je public_638202f
        lea ecx, ds:[edi+eax*4]
        public_6382020 : nop
        mov edx, dword ptr ds : [ecx]
        fmul qword ptr ds : [edx+eax*8]
        mov edx, eax
        dec eax
        sub ecx, 4
        test edx, edx
        jne public_6382020
        public_638202f : nop
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_6382039
        fchs 
        public_6382039 : nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6381f00)
    }
}

#undef public_6381f56
#undef public_6381f7d
#undef public_6381f85
#undef public_6381f9c
#undef public_6381ff1
#undef public_6381ffc
#undef public_6382020
#undef public_638202f
#undef public_6382039
