#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_632f3f0);
CLANG_FORWARD_PROC_SYMBOL(public_632f440);
CLANG_FORWARD_PROC_SYMBOL(public_632f980);
CLANG_FORWARD_PROC_SYMBOL(public_632f9b0);
CLANG_FORWARD_PROC_SYMBOL(public_632fbe0);
CLANG_FORWARD_PROC_SYMBOL(public_632fee0);
CLANG_FORWARD_PROC_SYMBOL(public_632fff0);
CLANG_FORWARD_PROC_SYMBOL(public_6330020);
CLANG_FORWARD_PROC_SYMBOL(public_63300c0);
CLANG_FORWARD_PROC_SYMBOL(public_63300e0);
CLANG_FORWARD_PROC_SYMBOL(public_6331a00);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

#define public_632fbf1 _public_632fbf1
#define public_632fc64 _public_632fc64
#define public_632fc82 _public_632fc82
#define public_632fc92 _public_632fc92
#define public_632fca0 _public_632fca0
#define public_632fce3 _public_632fce3
#define public_632fcf4 _public_632fcf4
#define public_632fcfc _public_632fcfc
#define public_632fd35 _public_632fd35
#define public_632fd40 _public_632fd40
#define public_632fd64 _public_632fd64
#define public_632fd8f _public_632fd8f
#define public_632fdb6 _public_632fdb6
#define public_632fdf9 _public_632fdf9
#define public_632fe21 _public_632fe21
#define public_632fe4c _public_632fe4c
#define public_632fe6c _public_632fe6c
#define public_632fe71 _public_632fe71
#define public_632fe90 _public_632fe90
#define public_632feb3 _public_632feb3
#define public_632fec3 _public_632fec3

PROC_DECLARE(0x632fbe0, internal_632fbe0, public_632fbe0);
extern "C" NAKED register_t __cdecl internal_632fbe0()
{
    __asm
    {
        sub esp, 0x44
        push ebx
        mov ebx, dword ptr ss : [esp+0x4C]
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x18], ebp
        public_632fbf1 : nop
        fld dword ptr ds : [ebx+8]
        fld dword ptr ds : [ebx+4]
        fld dword ptr ds : [ebx]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsubr qword ptr ds : [public_6399410]
        fabs 
        fcomp qword ptr ds : [public_63a4950]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 5
        fstp st(0)
        jnp public_632fdf9
        mov eax, dword ptr ds : [ebx+0xA8]
        test eax, eax
        je public_632fe6c
        push 8
        lea edi, ds:[ebx+0x1C]
        push edi
        mov ecx, ebx
        call public_63300e0
        push 8
        push edi
        push ebx
        lea ecx, ss:[esp+0x28]
        call public_6330020
        lea ecx, ss:[esp+0x1C]
        call public_632f980
        test al, al
        jne public_632fc64
        mov esi, 0x270F
        jmp public_632fc82
        public_632fc64 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x24]
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        cdq 
        xor eax, edx
        sub eax, edx
        lea esi, ds:[eax+ecx*2]
        test esi, esi
        je public_632fd35
        public_632fc82 : nop
        mov eax, 1
        add edi, 4
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x58], edi
        public_632fc92 : nop
        cmp eax, 8
        mov dword ptr ss : [esp+0x10], eax
        jge public_632fcfc
        lea ebp, ds:[edi+0x14]
        mov edi, edi
        public_632fca0 : nop
        mov edx, dword ptr ss : [esp+0x58]
        push ebp
        push edx
        mov ecx, ebx
        call public_632fee0
        test al, al
        je public_632fce3
        push 8
        lea eax, ds:[ebx+0x1C]
        push eax
        push ebx
        lea ecx, ss:[esp+0x44]
        call public_6330020
        lea ecx, ss:[esp+0x38]
        call public_632fff0
        cmp eax, esi
        jae public_632fce3
        test eax, eax
        mov ecx, 7
        lea esi, ss:[esp+0x38]
        lea edi, ss:[esp+0x1C]
        rep movsd
        mov esi, eax
        je public_632fcf4
        public_632fce3 : nop
        mov eax, dword ptr ss : [esp+0x10]
        inc eax
        add ebp, 0x14
        cmp eax, 8
        mov dword ptr ss : [esp+0x10], eax
        jl public_632fca0
        public_632fcf4 : nop
        mov ebp, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        public_632fcfc : nop
        mov edi, dword ptr ss : [esp+0x58]
        inc eax
        add edi, 0x14
        lea ecx, ds:[eax-1]
        cmp ecx, 8
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x58], edi
        jl public_632fc92
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, ebx
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ds : [edx+0xC], ecx
        public_632fd35 : nop
        lea esi, ds:[ebx+0x1C]
        mov dword ptr ss : [esp+0x58], 8
        public_632fd40 : nop
        mov edx, dword ptr ds : [esi+0x10]
        lea eax, ds:[esi+4]
        push edx
        push eax
        mov ecx, ebx
        call public_632f3f0
        mov edi, eax
        mov eax, dword ptr ds : [ebx+edi*4+0x10]
        test eax, eax
        je public_632fd64
        push esi
        push eax
        mov ecx, ebp
        call public_632fbe0
        jmp public_632fdb6
        public_632fd64 : nop
        mov al, byte ptr ds : [public_658e738]
        test al, 1
        jne public_632fd8f
        mov dl, al
        or dl, 1
        mov ecx, offset public_658e740
        mov byte ptr ds : [public_658e738], dl
        call public_63300c0
/*FIXUP push offset _public_62a8920 @0x632fd82*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62a8920
        call public_6391f9e
        add esp, 4
/*FIXUP public_632fd8f : nop
        push offset public_658e740 @0x632fd8f*/
  FIXUP public_632fd8f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_658e740
        mov ecx, offset public_640a728
        call public_6331a00
        mov eax, dword ptr ds : [public_640a73c]
        mov ecx, dword ptr ds : [eax+4]
        add ecx, 8
        push esi
        mov dword ptr ds : [ebx+edi*4+0x10], ecx
        call public_632f440
        inc dword ptr ss : [ebp+8]
        public_632fdb6 : nop
        mov eax, dword ptr ss : [esp+0x58]
        mov dword ptr ds : [esi], 0
        mov edx, dword ptr ss : [ebp+8]
        dec edx
        add esi, 0x14
        dec eax
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [esp+0x58], eax
        jne public_632fd40
        mov edi, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ds : [edi+0x10]
        lea eax, ds:[edi+4]
        push ecx
        push eax
        mov ecx, ebx
        call public_632f3f0
        mov esi, eax
        mov eax, dword ptr ds : [ebx+esi*4+0x10]
        test eax, eax
        je public_632fe21
        mov ebx, eax
        jmp public_632fbf1
        public_632fdf9 : nop
        mov edi, dword ptr ss : [esp+0x5C]
        mov edx, dword ptr ds : [edi+0x10]
        lea eax, ds:[edi+4]
        push edx
        push eax
        mov ecx, ebx
        call public_632f3f0
        mov esi, eax
        mov eax, dword ptr ds : [ebx+esi*4+0x10]
        test eax, eax
        je public_632feb3
        mov ebx, eax
        jmp public_632fbf1
        public_632fe21 : nop
        mov al, byte ptr ds : [public_658e738]
        test al, 1
        jne public_632fe4c
        mov dl, al
        or dl, 1
        mov ecx, offset public_658e740
        mov byte ptr ds : [public_658e738], dl
        call public_63300c0
/*FIXUP push offset _public_62a8920 @0x632fe3f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62a8920
        call public_6391f9e
        add esp, 4
/*FIXUP public_632fe4c : nop
        push offset public_658e740 @0x632fe4c*/
  FIXUP public_632fe4c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_658e740
        mov ecx, offset public_640a728
        call public_6331a00
        mov eax, dword ptr ds : [public_640a73c]
        mov ecx, dword ptr ds : [eax+4]
        add ecx, 8
        mov dword ptr ds : [ebx+esi*4+0x10], ecx
        jmp public_632fec3
        public_632fe6c : nop
        xor eax, eax
        lea ecx, ds:[ebx+0x1C]
        public_632fe71 : nop
        cmp dword ptr ds : [ecx], 0
        je public_632fe90
        inc eax
        add ecx, 0x14
        cmp eax, 8
        jb public_632fe71
        mov eax, dword ptr ss : [ebp+8]
        pop edi
        inc eax
        pop esi
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        pop ebx
        add esp, 0x44
        ret 8
        public_632fe90 : nop
        mov esi, dword ptr ss : [esp+0x5C]
        lea ecx, ds:[eax+eax*4]
        lea edi, ds:[ebx+ecx*4+0x1C]
        mov ecx, 5
        rep movsd
        mov eax, dword ptr ss : [ebp+8]
        pop edi
        inc eax
        pop esi
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        pop ebx
        add esp, 0x44
        ret 8
        public_632feb3 : nop
        mov ecx, offset public_640a728
        call public_632f9b0
        mov dword ptr ds : [ebx+esi*4+0x10], eax
        mov ecx, eax
        public_632fec3 : nop
        push edi
        call public_632f440
        mov eax, dword ptr ss : [ebp+8]
        pop edi
        inc eax
        pop esi
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        pop ebx
        add esp, 0x44
        ret 8
        UNREACHABLE_TRAP(0x632fbe0)
    }
}

#undef public_632fbf1
#undef public_632fc64
#undef public_632fc82
#undef public_632fc92
#undef public_632fca0
#undef public_632fce3
#undef public_632fcf4
#undef public_632fcfc
#undef public_632fd35
#undef public_632fd40
#undef public_632fd64
#undef public_632fd8f
#undef public_632fdb6
#undef public_632fdf9
#undef public_632fe21
#undef public_632fe4c
#undef public_632fe6c
#undef public_632fe71
#undef public_632fe90
#undef public_632feb3
#undef public_632fec3
