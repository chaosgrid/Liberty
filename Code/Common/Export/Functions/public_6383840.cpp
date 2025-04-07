#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636ec70);
CLANG_FORWARD_PROC_SYMBOL(public_6383840);
CLANG_FORWARD_PROC_SYMBOL(public_6384150);

#define public_63838cb _public_63838cb
#define public_63838e6 _public_63838e6
#define public_63838f8 _public_63838f8
#define public_63838fc _public_63838fc
#define public_638391c _public_638391c
#define public_6383935 _public_6383935
#define public_6383944 _public_6383944
#define public_638394c _public_638394c
#define public_6383968 _public_6383968
#define public_638397e _public_638397e
#define public_6383994 _public_6383994
#define public_63839b4 _public_63839b4
#define public_63839c9 _public_63839c9
#define public_63839e6 _public_63839e6
#define public_63839e8 _public_63839e8
#define public_63839fd _public_63839fd
#define public_6383a48 _public_6383a48
#define public_6383a6a _public_6383a6a

PROC_DECLARE(0x6383840, internal_6383840, public_6383840);
extern "C" NAKED register_t __cdecl internal_6383840()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0xC
        mov eax, dword ptr ds : [public_658b674]
        push ebx
        push esi
        xor esi, esi
        cmp eax, esi
        push edi
        mov dword ptr ds : [public_658b888], 0
        mov dword ptr ds : [public_658b88c], 0
        mov dword ptr ds : [public_658b6a8], 0
        mov dword ptr ds : [public_658b6ac], 0
        mov dword ptr ds : [public_658b6c0], 0xFFFFFFFF
        mov dword ptr ds : [public_658b6c4], 0xFFEFFFFF
        mov dword ptr ds : [public_658b6b8], 0
        mov dword ptr ds : [public_658b6bc], 0
        mov dword ptr ds : [public_658b898], 0
        mov dword ptr ds : [public_658b89c], 0
        mov dword ptr ds : [public_658b8ec], esi
        je public_63838cb
        mov dword ptr ds : [public_658b8e8], 1
        public_63838cb : nop
        mov ebx, dword ptr ss : [ebp+0x10]
        lea eax, ds:[ebx+ebx]
        push eax
        call public_636ec70
        add esp, 4
        cmp ebx, esi
        mov dword ptr ss : [esp+0xC], eax
        jle public_6383a48
        public_63838e6 : nop
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, dword ptr ds : [public_658b064]
        jne public_63838f8
        lea edx, ds:[ecx+ebx*8]
        mov edi, edx
        jmp public_63838fc
        public_63838f8 : nop
        mov edx, ecx
        mov edi, ecx
        public_63838fc : nop
        mov ebx, dword ptr ds : [public_658b24c]
        imul ebx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [ebp+8]
        lea ebx, ds:[eax+ebx*8]
        cmp eax, ebx
        jae public_638394c
        mov eax, dword ptr ds : [public_658b24c]
        shl eax, 3
        mov dword ptr ss : [esp+0x10], eax
        public_638391c : nop
        cmp ecx, dword ptr ds : [public_658b064]
        je public_6383944
        fld qword ptr ds : [edx+esi*8]
        fcomp qword ptr ds : [ecx+esi*8]
        fnstsw ax
        test ah, 1
        je public_6383935
        mov edx, ecx
        jmp public_6383944
        public_6383935 : nop
        fld qword ptr ds : [edi+esi*8]
        fcomp qword ptr ds : [ecx+esi*8]
        fnstsw ax
        test ah, 0x41
        jne public_6383944
        mov edi, ecx
        public_6383944 : nop
        add ecx, dword ptr ss : [esp+0x10]
        cmp ecx, ebx
        jb public_638391c
        public_638394c : nop
        mov ebx, dword ptr ss : [ebp+0x10]
        lea eax, ds:[ebx-1]
        cmp esi, eax
        jne public_6383968
        fld qword ptr ds : [edi+esi*8]
        fstp qword ptr ds : [public_658b6e8]
        fld qword ptr ds : [edx+esi*8]
        fstp qword ptr ds : [public_658b6b0]
        public_6383968 : nop
        mov ecx, dword ptr ds : [public_658b1e0]
        test ecx, ecx
        je public_638397e
        cmp esi, eax
        jne public_638397e
        fld qword ptr ds : [public_658b6c0]
        jmp public_63839e8
        public_638397e : nop
        fld qword ptr ds : [edi+esi*8]
        fchs 
        fld qword ptr ds : [edx+esi*8]
        fcomp 
        fnstsw ax
        test ah, 1
        jne public_6383994
        fstp st(0)
        fld qword ptr ds : [edx+esi*8]
        public_6383994 : nop
        mov ecx, dword ptr ds : [public_658b064]
        test ecx, ecx
        je public_63839c9
        fld qword ptr ds : [ecx+esi*8]
        fchs 
        fld qword ptr ds : [ecx+esi*8]
        fcomp 
        fnstsw ax
        test ah, 1
        jne public_63839b4
        fstp st(0)
        fld qword ptr ds : [ecx+esi*8]
        public_63839b4 : nop
        fstp qword ptr ss : [esp+0x10]
        fcom qword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 1
        je public_63839c9
        fstp st(0)
        fld qword ptr ss : [esp+0x10]
        public_63839c9 : nop
        fld qword ptr ds : [edx+esi*8]
        fsub qword ptr ds : [edi+esi*8]
        fld qword ptr ds : [public_658b6c0]
        fcomp 
        fnstsw ax
        test ah, 1
        je public_63839e6
        fstp qword ptr ds : [public_658b6c0]
        jmp public_63839e8
        public_63839e6 : nop
        fstp st(0)
        public_63839e8 : nop
        fld qword ptr ds : [public_658b6a8]
        fcomp 
        fnstsw ax
        test ah, 1
        je public_63839fd
        fst qword ptr ds : [public_658b6a8]
        public_63839fd : nop
        fld qword ptr ds : [public_658b6b8]
        push edx
        fadd st, st(1)
        lea ecx, ss:[esp+0x10]
        push ecx
        fstp qword ptr ds : [public_658b6b8]
        fstp st(0)
        call public_636e1b0
        lea edx, ss:[esp+0x14]
        push edi
        push edx
        call public_636e1b0
        fld qword ptr ds : [public_658b6b8]
        fmul qword ptr ds : [public_63a5a38]
        mov eax, dword ptr ds : [public_658b6f4]
        add esp, 0x10
        inc esi
        cmp esi, ebx
        fstp qword ptr ds : [eax+esi*8-8]
        jl public_63838e6
        mov eax, dword ptr ss : [esp+0xC]
        public_6383a48 : nop
        cmp dword ptr ds : [public_658b078], 1
        jl public_6383a6a
        mov ecx, dword ptr ds : [public_658b7fc]
        push eax
/*FIXUP push offset public_63f6fd4 @0x6383a58*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6fd4
        push ecx
        call public_6384150
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 0xC
        public_6383a6a : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6383840)
    }
}

#undef public_63838cb
#undef public_63838e6
#undef public_63838f8
#undef public_63838fc
#undef public_638391c
#undef public_6383935
#undef public_6383944
#undef public_638394c
#undef public_6383968
#undef public_638397e
#undef public_6383994
#undef public_63839b4
#undef public_63839c9
#undef public_63839e6
#undef public_63839e8
#undef public_63839fd
#undef public_6383a48
#undef public_6383a6a
