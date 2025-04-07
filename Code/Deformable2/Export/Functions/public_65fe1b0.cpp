#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6600bb6);

#define public_65fe1c8 _public_65fe1c8
#define public_65fe1e8 _public_65fe1e8
#define public_65fe20d _public_65fe20d
#define public_65fe232 _public_65fe232
#define public_65fe257 _public_65fe257
#define public_65fe280 _public_65fe280
#define public_65fe288 _public_65fe288
#define public_65fe28e _public_65fe28e
#define public_65fe2c0 _public_65fe2c0
#define public_65fe2de _public_65fe2de
#define public_65fe2e2 _public_65fe2e2
#define public_65fe2e4 _public_65fe2e4
#define public_65fe2e7 _public_65fe2e7
#define public_65fe2f0 _public_65fe2f0
#define public_65fe30b _public_65fe30b

PROC_DECLARE(0x65fe1b0, internal_65fe1b0, public_65fe1b0);
extern "C" NAKED register_t __cdecl internal_65fe1b0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        xor ebx, ebx
        cmp edi, ebx
        jne public_65fe1c8
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 8
        public_65fe1c8 : nop
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi]
        lea ebp, ds:[esi+8]
        push ebp
/*FIXUP push offset public_6602a9c @0x65fe1d2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602a9c
        push edi
        call dword ptr ds : [eax]
        test eax, eax
        jge public_65fe1e8
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 8
        public_65fe1e8 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [edi]
        lea ebp, ds:[esi+4]
        push ebp
/*FIXUP push offset public_6602430 @0x65fe1f7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602430
        push edi
        call dword ptr ds : [edx]
        test eax, eax
        jge public_65fe20d
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 8
        public_65fe20d : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [edi]
        lea ebp, ds:[esi+0x10]
        push ebp
/*FIXUP push offset public_6602a8c @0x65fe21c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602a8c
        push edi
        call dword ptr ds : [edx]
        test eax, eax
        jge public_65fe232
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 8
        public_65fe232 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [edi]
        lea ebp, ds:[esi+0xC]
        push ebp
/*FIXUP push offset public_6602a70 @0x65fe241*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602a70
        push edi
        call dword ptr ds : [edx]
        test eax, eax
        jge public_65fe257
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 8
        public_65fe257 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x6C]
        mov ebp, eax
        cmp ebp, ebx
        mov dword ptr ds : [esi+0x1C], ebx
        jbe public_65fe28e
        mov ecx, dword ptr ss : [esp+0x18]
        lea eax, ds:[ecx+0x10]
        mov ecx, ebp
        mov edi, edi
        public_65fe280 : nop
        cmp dword ptr ds : [eax], 7
        jne public_65fe288
        inc dword ptr ds : [esi+0x1C]
        public_65fe288 : nop
        add eax, 0x4C
        dec ecx
        jne public_65fe280
        public_65fe28e : nop
        mov edi, dword ptr ds : [esi+0x1C]
        cmp edi, ebx
        je public_65fe2e7
        mov edx, edi
        imul edx, 0x2C
        add edx, 4
        push edx
        call public_6600bb6
        add esp, 4
        cmp eax, ebx
        je public_65fe2e2
        lea ecx, ds:[edi-1]
        cmp ecx, ebx
        lea edx, ds:[eax+4]
        mov dword ptr ds : [eax], edi
        mov eax, edx
        jl public_65fe2de
        inc ecx
        or edi, 0xFFFFFFFF
        lea esp, ss:[esp]
        public_65fe2c0 : nop
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+0x1C], 4
        mov dword ptr ds : [eax+0x20], ebx
        mov dword ptr ds : [eax+0x24], ebx
        mov byte ptr ds : [eax+0x28], bl
        add eax, 0x2C
        dec ecx
        jne public_65fe2c0
        public_65fe2de : nop
        mov eax, edx
        jmp public_65fe2e4
        public_65fe2e2 : nop
        xor eax, eax
        public_65fe2e4 : nop
        mov dword ptr ds : [esi+0x18], eax
        public_65fe2e7 : nop
        xor edi, edi
        cmp ebp, ebx
        jbe public_65fe30b
        lea ecx, ds:[ecx]
        public_65fe2f0 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [esi]
        add eax, ebx
        lea ecx, ds:[eax+0x10]
        push ecx
        push eax
        push edi
        mov ecx, esi
        call dword ptr ds : [edx+0x68]
        inc edi
        add ebx, 0x4C
        cmp edi, ebp
        jb public_65fe2f0
        public_65fe30b : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x65fe1b0)
    }
}

#undef public_65fe1c8
#undef public_65fe1e8
#undef public_65fe20d
#undef public_65fe232
#undef public_65fe257
#undef public_65fe280
#undef public_65fe288
#undef public_65fe28e
#undef public_65fe2c0
#undef public_65fe2de
#undef public_65fe2e2
#undef public_65fe2e4
#undef public_65fe2e7
#undef public_65fe2f0
#undef public_65fe30b
