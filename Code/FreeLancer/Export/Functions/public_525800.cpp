#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405860);
CLANG_FORWARD_PROC_SYMBOL(public_43d950);
CLANG_FORWARD_PROC_SYMBOL(public_51feb0);
CLANG_FORWARD_PROC_SYMBOL(public_525800);
CLANG_FORWARD_PROC_SYMBOL(public_5267b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c019b);

#define public_525838 _public_525838
#define public_525899 _public_525899
#define public_5258c3 _public_5258c3
#define public_5258e5 _public_5258e5
#define public_52590b _public_52590b
#define public_525925 _public_525925
#define public_52593f _public_52593f
#define public_52598e _public_52598e
#define public_52599e _public_52599e
#define public_5259e6 _public_5259e6
#define public_5259f4 _public_5259f4
#define public_525a0d _public_525a0d
#define public_525a71 _public_525a71
#define public_525a90 _public_525a90
#define public_525aad _public_525aad
#define public_525b0c _public_525b0c
#define public_525b0e _public_525b0e
#define public_525b55 _public_525b55
#define public_525b6a _public_525b6a
#define public_525b6e _public_525b6e
#define public_525b70 _public_525b70
#define public_525c27 _public_525c27
#define public_525c3d _public_525c3d
#define public_525c5c _public_525c5c

PROC_DECLARE(0x525800, internal_525800, public_525800);
extern "C" NAKED register_t __cdecl internal_525800()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c019b @0x525808*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c019b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x34]
        mov esi, ecx
        mov ecx, edi
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_52599e
        mov ebx, dword ptr ds : [public_5c6cf4]
/*FIXUP public_525838 : nop
        push offset public_5dcfd0 @0x525838*/
  FIXUP public_525838 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dcfd0
        mov ecx, edi
        call ebx
        test al, al
        mov ecx, edi
        je public_5258c3
        push 0
        call dword ptr ds : [public_5c6024]
        mov ebp, eax
        push ebp
        call dword ptr ds : [public_5c6020]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        push eax
        call dword ptr ds : [public_5c6818]
        push eax
        call dword ptr ds : [public_5c6814]
        add esp, 0xC
        test eax, eax
        mov dword ptr ds : [esi+8], eax
        jne public_525899
        mov ecx, dword ptr ds : [public_5c6d18]
        push ebp
        push 0x8CB
/*FIXUP push offset public_5dc47c @0x525884*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dc47c
        mov eax, 0x100002
/*FIXUP push offset public_5dcf90 @0x52588e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dcf90
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_525899 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_52598e
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_52598e
        mov edx, dword ptr ds : [ecx]
        push 0
        call dword ptr ds : [edx+0x20]
        jmp public_52598e
/*FIXUP public_5258c3 : nop
        push offset public_5dcf88 @0x5258c3*/
  FIXUP public_5258c3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dcf88
        call ebx
        test al, al
        mov ecx, edi
        je public_5258e5
        push 0
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov dword ptr ds : [esi+0x10], eax
        jmp public_52598e
/*FIXUP public_5258e5 : nop
        push offset public_5dcf74 @0x5258e5*/
  FIXUP public_5258e5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dcf74
        call ebx
        test al, al
        mov ecx, edi
        je public_52590b
        push 0
        call dword ptr ds : [public_5c6cfc]
        fst dword ptr ds : [esi+0x20]
        fmul qword ptr ds : [public_5cf0f8]
        fstp dword ptr ds : [esi+0x24]
        jmp public_52598e
/*FIXUP public_52590b : nop
        push offset public_5dcf64 @0x52590b*/
  FIXUP public_52590b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dcf64
        call ebx
        test al, al
        mov ecx, edi
        je public_525925
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [esi+0x18]
        jmp public_52598e
/*FIXUP public_525925 : nop
        push offset public_5dcf4c @0x525925*/
  FIXUP public_525925 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dcf4c
        call ebx
        test al, al
        mov ecx, edi
        je public_52593f
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [esi+0x1C]
        jmp public_52598e
/*FIXUP public_52593f : nop
        push offset public_5dcf40 @0x52593f*/
  FIXUP public_52593f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dcf40
        call ebx
        test al, al
        je public_52598e
        push 0
        mov ecx, edi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x18]
        push 1
        mov ecx, edi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x1C]
        push 2
        mov ecx, edi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        lea eax, ds:[esi+0xD4]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        public_52598e : nop
        mov ecx, edi
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_525838
        public_52599e : nop
        mov ecx, esi
        call public_5267b0
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        call public_5b7e1d
        fild dword ptr ds : [esi+0x10]
        xor ebx, ebx
        mov dword ptr ds : [esi+0xC], ebx
        fmul dword ptr ds : [esi+0xE0]
        fadd dword ptr ds : [public_5c75e0]
        call public_5b7ec0
        lea edx, ds:[eax*4]
        push edx
        mov dword ptr ds : [esi+0x14], eax
        call public_5b7e84
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [esi+0xC], eax
        add esp, 8
        xor eax, eax
        cmp ecx, ebx
        jle public_5259f4
        public_5259e6 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ecx+eax*4], ebx
        mov ecx, dword ptr ds : [esi+0x14]
        inc eax
        cmp eax, ecx
        jl public_5259e6
        public_5259f4 : nop
        mov eax, dword ptr ds : [esi+0xA8]
        cmp eax, ebx
        lea ebp, ds:[esi+0xA8]
        je public_525a0d
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp], ebx
        public_525a0d : nop
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebx
        mov dword ptr ds : [esi+0xB4], ebx
        mov dword ptr ds : [esi+0xB8], ebx
        je public_525c3d
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x34], ebx
        mov edi, dword ptr ds : [eax+0x40]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
/*FIXUP push offset public_5c7704 @0x525a41*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7704
        push edi
        push eax
        mov byte ptr ss : [esp+0x3C], 1
        call dword ptr ds : [ecx+0x48]
        test eax, eax
        jge public_525a90
        mov eax, dword ptr ss : [esp+0x34]
        cmp eax, ebx
        mov dword ptr ds : [esi+0xB0], ebx
        mov byte ptr ss : [esp+0x2C], 0
        je public_525a71
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x34], ebx
        public_525a71 : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        je public_525c5c
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        jmp public_525c5c
        public_525a90 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push 1
        push ebx
        push eax
        call dword ptr ds : [ecx+0x24]
        cmp dword ptr ss : [ebp], ebx
        jne public_525aad
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        push ebp
        push eax
        call dword ptr ds : [edx+0x38]
        public_525aad : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0xAC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x34]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x28]
        mov edx, dword ptr ds : [public_5c6df0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push edi
        push eax
        call dword ptr ds : [ecx+0x34]
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x34]
        push edx
/*FIXUP push offset public_5dc570 @0x525ae7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dc570
        push edi
        push eax
        call dword ptr ds : [ecx+0x48]
        push 0x10
        call public_5b7e84
        add esp, 4
        cmp eax, ebx
        je public_525b0c
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+0xC], ebx
        mov dword ptr ds : [eax+4], ebx
        jmp public_525b0e
        public_525b0c : nop
        xor eax, eax
        public_525b0e : nop
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [esi+0xB0], eax
        mov edx, dword ptr ds : [ecx]
        add eax, 4
        push eax
        push ecx
        call dword ptr ds : [edx+0xC]
        mov eax, dword ptr ds : [esi+0xB0]
        mov edi, dword ptr ds : [eax+4]
        mov ecx, edi
        imul ecx, 0x2C
        push ecx
        call public_5b7e84
        mov ebx, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], ebx
        test ebx, ebx
        mov byte ptr ss : [esp+0x2C], 2
        je public_525b6e
        lea eax, ds:[edi-1]
        test eax, eax
        jl public_525b6a
        lea edi, ds:[ebx+0x1C]
        lea ebp, ds:[eax+1]
/*FIXUP public_525b55 : nop
        push offset _public_43d950 @0x525b55*/
  FIXUP public_525b55 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_43d950
        push 2
        push 8
        push edi
        call public_405860
        add edi, 0x2C
        dec ebp
        jne public_525b55
        public_525b6a : nop
        mov eax, ebx
        jmp public_525b70
        public_525b6e : nop
        xor eax, eax
        public_525b70 : nop
        mov edx, dword ptr ds : [esi+0xB0]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [esi+0xB0]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [esi+0xB4]
        add edx, ecx
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [esi+0xB4], edx
        mov edi, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx]
        push edi
        push 0
        push 0x252
        push eax
        push ecx
        mov byte ptr ss : [esp+0x40], 1
        call dword ptr ds : [edx+0x10]
        mov edx, dword ptr ds : [esi+0xB0]
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [eax]
        add edx, 0xC
        push edx
        push eax
        call dword ptr ds : [ecx+0x14]
        mov eax, dword ptr ds : [esi+0xB0]
        mov ecx, dword ptr ds : [eax+0xC]
        shl ecx, 1
        push ecx
        call public_5b7e84
        mov edx, dword ptr ds : [esi+0xB0]
        mov dword ptr ds : [edx+8], eax
        mov eax, dword ptr ds : [esi+0xB0]
        mov edi, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ds : [ecx]
        add esp, 4
        push edi
        add eax, 8
        push eax
        push ecx
        call dword ptr ds : [edx+0x18]
        mov eax, dword ptr ds : [esi+0xB0]
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [esi+0xB8]
        mov eax, dword ptr ss : [esp+0x34]
        add edx, ecx
        test eax, eax
        mov dword ptr ds : [esi+0xB8], edx
        mov byte ptr ss : [esp+0x2C], 0
        je public_525c27
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x34], 0
        public_525c27 : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        je public_525c3d
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_525c3d : nop
        mov eax, dword ptr ds : [esi+0xB0]
        mov ecx, dword ptr ds : [eax]
        xor edx, edx
        mov dx, word ptr ds : [esi+0xB4]
        add esi, 0x38
        push edx
        push ecx
        push esi
        call public_51feb0
        add esp, 0xC
        public_525c5c : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 4
        UNREACHABLE_TRAP(0x525800)
    }
}

#undef public_525838
#undef public_525899
#undef public_5258c3
#undef public_5258e5
#undef public_52590b
#undef public_525925
#undef public_52593f
#undef public_52598e
#undef public_52599e
#undef public_5259e6
#undef public_5259f4
#undef public_525a0d
#undef public_525a71
#undef public_525a90
#undef public_525aad
#undef public_525b0c
#undef public_525b0e
#undef public_525b55
#undef public_525b6a
#undef public_525b6e
#undef public_525b70
#undef public_525c27
#undef public_525c3d
#undef public_525c5c
