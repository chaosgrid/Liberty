#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6eb1218 _public_6eb1218
#define public_6eb1238 _public_6eb1238
#define public_6eb125d _public_6eb125d
#define public_6eb1282 _public_6eb1282
#define public_6eb12a7 _public_6eb12a7
#define public_6eb12d0 _public_6eb12d0
#define public_6eb12d8 _public_6eb12d8
#define public_6eb12de _public_6eb12de
#define public_6eb1310 _public_6eb1310
#define public_6eb132e _public_6eb132e
#define public_6eb1332 _public_6eb1332
#define public_6eb1334 _public_6eb1334
#define public_6eb1337 _public_6eb1337
#define public_6eb1340 _public_6eb1340
#define public_6eb135b _public_6eb135b

PROC_DECLARE(0x6eb1200, internal_6eb1200, public_6eb1200);
extern "C" NAKED register_t __cdecl internal_6eb1200()
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
        jne public_6eb1218
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 8
        public_6eb1218 : nop
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi]
        lea ebp, ds:[esi+8]
        push ebp
/*FIXUP push offset public_6ed407c @0x6eb1222*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed407c
        push edi
        call dword ptr ds : [eax]
        test eax, eax
        jge public_6eb1238
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 8
        public_6eb1238 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [edi]
        lea ebp, ds:[esi+4]
        push ebp
/*FIXUP push offset public_6ed4064 @0x6eb1247*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4064
        push edi
        call dword ptr ds : [edx]
        test eax, eax
        jge public_6eb125d
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 8
        public_6eb125d : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [edi]
        lea ebp, ds:[esi+0x10]
        push ebp
/*FIXUP push offset public_6ed4054 @0x6eb126c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4054
        push edi
        call dword ptr ds : [edx]
        test eax, eax
        jge public_6eb1282
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 8
        public_6eb1282 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [edi]
        lea ebp, ds:[esi+0xC]
        push ebp
/*FIXUP push offset public_6ed4038 @0x6eb1291*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4038
        push edi
        call dword ptr ds : [edx]
        test eax, eax
        jge public_6eb12a7
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 8
        public_6eb12a7 : nop
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
        jbe public_6eb12de
        mov ecx, dword ptr ss : [esp+0x18]
        lea eax, ds:[ecx+0x10]
        mov ecx, ebp
        mov edi, edi
        public_6eb12d0 : nop
        cmp dword ptr ds : [eax], 7
        jne public_6eb12d8
        inc dword ptr ds : [esi+0x1C]
        public_6eb12d8 : nop
        add eax, 0x4C
        dec ecx
        jne public_6eb12d0
        public_6eb12de : nop
        mov edi, dword ptr ds : [esi+0x1C]
        cmp edi, ebx
        je public_6eb1337
        mov edx, edi
        imul edx, 0x2C
        add edx, 4
        push edx
        call public_6ed0c5c
        add esp, 4
        cmp eax, ebx
        je public_6eb1332
        lea ecx, ds:[edi-1]
        cmp ecx, ebx
        lea edx, ds:[eax+4]
        mov dword ptr ds : [eax], edi
        mov eax, edx
        jl public_6eb132e
        inc ecx
        or edi, 0xFFFFFFFF
        lea esp, ss:[esp]
        public_6eb1310 : nop
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+0x1C], 4
        mov dword ptr ds : [eax+0x20], ebx
        mov dword ptr ds : [eax+0x24], ebx
        mov byte ptr ds : [eax+0x28], bl
        add eax, 0x2C
        dec ecx
        jne public_6eb1310
        public_6eb132e : nop
        mov eax, edx
        jmp public_6eb1334
        public_6eb1332 : nop
        xor eax, eax
        public_6eb1334 : nop
        mov dword ptr ds : [esi+0x18], eax
        public_6eb1337 : nop
        xor edi, edi
        cmp ebp, ebx
        jbe public_6eb135b
        lea ecx, ds:[ecx]
        public_6eb1340 : nop
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
        jb public_6eb1340
        public_6eb135b : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6eb1200)
    }
}

#undef public_6eb1218
#undef public_6eb1238
#undef public_6eb125d
#undef public_6eb1282
#undef public_6eb12a7
#undef public_6eb12d0
#undef public_6eb12d8
#undef public_6eb12de
#undef public_6eb1310
#undef public_6eb132e
#undef public_6eb1332
#undef public_6eb1334
#undef public_6eb1337
#undef public_6eb1340
#undef public_6eb135b
