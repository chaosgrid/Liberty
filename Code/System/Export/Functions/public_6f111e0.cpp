#include "System-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f11480);
CLANG_FORWARD_PROC_SYMBOL(public_6f11a0a);
CLANG_FORWARD_PROC_SYMBOL(public_6f11a10);
CLANG_FORWARD_PROC_SYMBOL(public_6f11a20);

#define public_6f11267 _public_6f11267
#define public_6f11283 _public_6f11283
#define public_6f1128d _public_6f1128d
#define public_6f11290 _public_6f11290
#define public_6f112bc _public_6f112bc
#define public_6f112c8 _public_6f112c8
#define public_6f112dd _public_6f112dd
#define public_6f11301 _public_6f11301
#define public_6f1131c _public_6f1131c
#define public_6f1132f _public_6f1132f
#define public_6f11362 _public_6f11362
#define public_6f1136d _public_6f1136d
#define public_6f11384 _public_6f11384
#define public_6f11387 _public_6f11387
#define public_6f113a8 _public_6f113a8
#define public_6f113c4 _public_6f113c4
#define public_6f113d1 _public_6f113d1
#define public_6f11418 _public_6f11418
#define public_6f11442 _public_6f11442
#define public_6f1144e _public_6f1144e
#define public_6f11459 _public_6f11459
#define public_6f11463 _public_6f11463

PROC_DECLARE(0x6f111e0, internal_6f111e0, public_6f111e0);
extern "C" NAKED register_t __cdecl internal_6f111e0()
{
    __asm
    {
        mov eax, 0x2120
        call public_6f11a20
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x212C]
        mov eax, dword ptr ss : [ebp+0x24]
        xor ebx, ebx
        cmp eax, ebx
        push edi
        jne public_6f11463
        mov eax, dword ptr ds : [public_6f13194]
        lea edx, ss:[esp+0xC]
        push edx
/*FIXUP push offset public_6f1315c @0x6f1120b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f1315c
        mov dword ptr ss : [esp+0x14], ebx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        mov eax, dword ptr ss : [esp+0xC]
        jne public_6f11459
        mov edx, dword ptr ds : [eax]
        push 3
/*FIXUP push offset public_6f13154 @0x6f11229*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f13154
        push eax
        call dword ptr ds : [edx+0x14]
        mov edi, eax
        cmp edi, ebx
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x28], edi
        je public_6f11459
        mov edx, dword ptr ds : [eax]
        push 0x100
        lea ecx, ss:[esp+0x30]
        push ecx
        push ebx
        push edi
        push eax
        mov dword ptr ss : [esp+0x24], 1
        call dword ptr ds : [edx+0x1C]
        test eax, eax
        je public_6f11442
        push esi
        public_6f11267 : nop
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x18], 0x14
        lea esi, ss:[esp+0x30]
        public_6f11283 : nop
        mov al, byte ptr ds : [esi]
        cmp al, 0x20
        je public_6f1128d
        cmp al, 9
        jne public_6f11290
        public_6f1128d : nop
        inc esi
        jmp public_6f11283
        public_6f11290 : nop
        mov al, byte ptr ds : [esi]
        cmp al, 0x3B
        je public_6f11418
        test al, al
        je public_6f11418
        mov ebx, dword ptr ds : [public_6f12018]
        push 0x3D
        push esi
        call ebx
        mov ebp, eax
        xor edi, edi
        add esp, 8
        cmp ebp, edi
        je public_6f112c8
        mov byte ptr ss : [ebp], 0
        public_6f112bc : nop
        mov al, byte ptr ss : [ebp+1]
        inc ebp
        cmp al, 0x20
        je public_6f112bc
        cmp al, 9
        je public_6f112bc
        public_6f112c8 : nop
        push 0x14
        call public_6f11a10
        add esp, 4
        cmp eax, edi
        je public_6f112dd
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [eax], edi
        mov edi, eax
        public_6f112dd : nop
        mov edx, dword ptr ss : [esp+0x2134]
        mov dword ptr ss : [esp+0x1C], esi
        lea esi, ds:[edi+4]
        mov dword ptr ss : [esp+0x20], edx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6f11301
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6f11301 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        push 0x20
        push edx
        mov dword ptr ss : [esp+0x2C], esi
        mov dword ptr ss : [esp+0x30], ebp
        call ebx
        add esp, 8
        test eax, eax
        je public_6f1131c
        mov byte ptr ds : [eax], 0
        public_6f1131c : nop
        mov eax, dword ptr ss : [esp+0x1C]
        push 9
        push eax
        call ebx
        add esp, 8
        test eax, eax
        je public_6f1132f
        mov byte ptr ds : [eax], 0
        public_6f1132f : nop
        mov eax, dword ptr ds : [public_6f13194]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[edi+8]
        push edx
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        je public_6f1136d
        test edi, edi
        mov ebx, offset public_6f13148
        je public_6f113c4
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6f11362
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6f11362 : nop
        push edi
        call public_6f11a0a
        add esp, 4
        jmp public_6f113c4
        public_6f1136d : nop
        mov ecx, dword ptr ss : [esp+0x2134]
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        mov ebx, offset public_6f13140
        je public_6f11384
        mov dword ptr ds : [eax], edi
        jmp public_6f11387
        public_6f11384 : nop
        mov dword ptr ds : [ecx+8], edi
        public_6f11387 : nop
        lea ebp, ds:[edi+0xC]
        push ebp
        mov dword ptr ds : [ecx+0xC], edi
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_6f13034 @0x6f11392*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f13034
        push eax
        call dword ptr ds : [edx]
        test eax, eax
        jne public_6f113a8
        mov ebp, dword ptr ss : [ebp]
        mov eax, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [eax+8]
        public_6f113a8 : nop
        mov esi, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi]
        add edi, 0x10
        push edi
/*FIXUP push offset public_6f1304c @0x6f113b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f1304c
        push esi
        call dword ptr ds : [ecx]
        test eax, eax
        jne public_6f113c4
        mov edi, dword ptr ds : [edi]
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+8]
        public_6f113c4 : nop
        mov eax, dword ptr ss : [esp+0x28]
        test eax, eax
        jne public_6f113d1
        mov eax, offset public_6f13190
        public_6f113d1 : nop
        push ebx
        push eax
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        lea ecx, ss:[esp+0x13C]
/*FIXUP push offset public_6f130f8 @0x6f113df*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f130f8
        push ecx
        call public_6f11480
        mov edx, dword ptr ds : [public_6f12004]
        push eax
        push 0x123
/*FIXUP push offset public_6f130b0 @0x6f113f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f130b0
        mov ecx, 0x100003
/*FIXUP push offset public_6f13090 @0x6f11400*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f13090
        push ecx
        call dword ptr ds : [edx]
        mov edi, dword ptr ss : [esp+0x54]
        mov ebp, dword ptr ss : [esp+0x215C]
        add esp, 0x28
        xor ebx, ebx
        public_6f11418 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push 0x100
        mov eax, ecx
        lea esi, ss:[esp+0x34]
        push esi
        inc ecx
        push eax
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [ecx]
        push edi
        push ecx
        call dword ptr ds : [edx+0x1C]
        test eax, eax
        jne public_6f11267
        pop esi
        public_6f11442 : nop
        cmp dword ptr ss : [ebp+0x20], ebx
        jne public_6f1144e
        mov eax, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [eax+0xC]
        public_6f1144e : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [ebp+0x24], 1
        public_6f11459 : nop
        cmp eax, ebx
        je public_6f11463
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6f11463 : nop
        pop edi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x2120
        ret 4
        UNREACHABLE_TRAP(0x6f111e0)
    }
}

#undef public_6f11267
#undef public_6f11283
#undef public_6f1128d
#undef public_6f11290
#undef public_6f112bc
#undef public_6f112c8
#undef public_6f112dd
#undef public_6f11301
#undef public_6f1131c
#undef public_6f1132f
#undef public_6f11362
#undef public_6f1136d
#undef public_6f11384
#undef public_6f11387
#undef public_6f113a8
#undef public_6f113c4
#undef public_6f113d1
#undef public_6f11418
#undef public_6f11442
#undef public_6f1144e
#undef public_6f11459
#undef public_6f11463
