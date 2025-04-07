#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f1000);
CLANG_FORWARD_PROC_SYMBOL(public_66f1210);
CLANG_FORWARD_PROC_SYMBOL(public_66f13b0);
CLANG_FORWARD_PROC_SYMBOL(public_6700810);
CLANG_FORWARD_PROC_SYMBOL(public_6700820);
CLANG_FORWARD_JUMP_SYMBOL(public_6700aab);

#define public_66f1257 _public_66f1257
#define public_66f127d _public_66f127d
#define public_66f12a4 _public_66f12a4
#define public_66f12c9 _public_66f12c9
#define public_66f12e4 _public_66f12e4
#define public_66f12ec _public_66f12ec
#define public_66f1315 _public_66f1315
#define public_66f131d _public_66f131d
#define public_66f1323 _public_66f1323
#define public_66f135f _public_66f135f
#define public_66f136a _public_66f136a
#define public_66f1372 _public_66f1372
#define public_66f138e _public_66f138e
#define public_66f1390 _public_66f1390

PROC_DECLARE(0x66f1210, internal_66f1210, public_66f1210);
extern "C" NAKED register_t __cdecl internal_66f1210()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6700aab @0x66f1218*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6700aab
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        test ebx, ebx
        push ebp
        push esi
        push edi
        je public_66f12e4
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [ebx]
        lea edi, ds:[esi+8]
        push edi
/*FIXUP push offset public_6701310 @0x66f123f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701310
        push ebx
        call dword ptr ds : [eax]
        test eax, eax
        jge public_66f1257
/*FIXUP push offset public_67012c8 @0x66f124b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67012c8
        push 0xAD
        jmp public_66f12c9
        public_66f1257 : nop
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [ebx]
        lea ebp, ds:[esi+4]
        push ebp
/*FIXUP push offset public_67012b0 @0x66f1265*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67012b0
        push ebx
        call dword ptr ds : [eax]
        test eax, eax
        jge public_66f127d
/*FIXUP push offset public_6701268 @0x66f1271*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701268
        push 0xB3
        jmp public_66f12c9
        public_66f127d : nop
        mov eax, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [ebx]
        lea ebp, ds:[esi+0x10]
        push ebp
/*FIXUP push offset public_6701258 @0x66f128c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701258
        push ebx
        call dword ptr ds : [eax]
        test eax, eax
        jge public_66f12a4
/*FIXUP push offset public_6701218 @0x66f1298*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701218
        push 0xB9
        jmp public_66f12c9
        public_66f12a4 : nop
        mov eax, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [ebx]
        lea ebp, ds:[esi+0xC]
        push ebp
/*FIXUP push offset public_67011f8 @0x66f12b3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67011f8
        push ebx
        call dword ptr ds : [eax]
        test eax, eax
        jge public_66f12ec
/*FIXUP push offset public_67011a8 @0x66f12bf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67011a8
        push 0xBF
        public_66f12c9 : nop
        mov ecx, dword ptr ds : [public_6701000]
/*FIXUP push offset public_670117c @0x66f12cf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_670117c
        mov eax, 0x100004
/*FIXUP push offset public_6701160 @0x66f12d9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701160
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_66f12e4 : nop
        or eax, 0xFFFFFFFF
        jmp public_66f1390
        public_66f12ec : nop
        mov eax, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x6C]
        xor edi, edi
        mov ebp, eax
        cmp ebp, edi
        mov dword ptr ds : [esi+0x1C], edi
        jbe public_66f1323
        mov edx, dword ptr ss : [esp+0x24]
        lea eax, ds:[edx+0x10]
        mov ecx, ebp
        public_66f1315 : nop
        cmp dword ptr ds : [eax], 7
        jne public_66f131d
        inc dword ptr ds : [esi+0x1C]
        public_66f131d : nop
        add eax, 0x4C
        dec ecx
        jne public_66f1315
        public_66f1323 : nop
        mov ebx, dword ptr ds : [esi+0x1C]
        cmp ebx, edi
        je public_66f136a
        mov eax, ebx
        imul eax, 0x2C
        add eax, 4
        push eax
        call public_6700810
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        cmp eax, edi
        mov dword ptr ss : [esp+0x18], edi
        je public_66f135f
/*FIXUP push offset _public_66f1000 @0x66f1347*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f1000
/*FIXUP push offset _public_66f13b0 @0x66f134c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f13b0
        push ebx
        lea edi, ds:[eax+4]
        push 0x2C
        push edi
        mov dword ptr ds : [eax], ebx
        call public_6700820
        public_66f135f : nop
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x18], edi
        public_66f136a : nop
        xor edi, edi
        test ebp, ebp
        jbe public_66f138e
        xor ebx, ebx
        public_66f1372 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [esi]
        lea eax, ds:[ebx+ecx]
        lea ecx, ds:[eax+0x10]
        push ecx
        push eax
        push edi
        mov ecx, esi
        call dword ptr ds : [edx+0x68]
        inc edi
        add ebx, 0x4C
        cmp edi, ebp
        jb public_66f1372
        public_66f138e : nop
        xor eax, eax
        public_66f1390 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x66f1210)
    }
}

#undef public_66f1257
#undef public_66f127d
#undef public_66f12a4
#undef public_66f12c9
#undef public_66f12e4
#undef public_66f12ec
#undef public_66f1315
#undef public_66f131d
#undef public_66f1323
#undef public_66f135f
#undef public_66f136a
#undef public_66f1372
#undef public_66f138e
#undef public_66f1390
