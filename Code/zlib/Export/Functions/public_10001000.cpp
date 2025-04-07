#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10001000);

#define public_1000101e _public_1000101e
#define public_10001032 _public_10001032
#define public_1000106f _public_1000106f
#define public_100010a0 _public_100010a0
#define public_100010ab _public_100010ab
#define public_100010b1 _public_100010b1
#define public_100010cd _public_100010cd
#define public_100010d8 _public_100010d8
#define public_100010ed _public_100010ed
#define public_100010f4 _public_100010f4
#define public_100010fe _public_100010fe
#define public_10001119 _public_10001119
#define public_10001134 _public_10001134
#define public_1000114f _public_1000114f
#define public_1000116a _public_1000116a
#define public_10001185 _public_10001185
#define public_100011a0 _public_100011a0
#define public_100011bb _public_100011bb
#define public_100011d6 _public_100011d6
#define public_100011f1 _public_100011f1
#define public_1000120c _public_1000120c
#define public_10001223 _public_10001223
#define public_1000123a _public_1000123a
#define public_10001251 _public_10001251
#define public_10001268 _public_10001268
#define public_1000127f _public_1000127f
#define public_100012a0 _public_100012a0
#define public_100012b4 _public_100012b4
#define public_100012c4 _public_100012c4
#define public_100012d4 _public_100012d4
#define public_100012e4 _public_100012e4
#define public_100012f4 _public_100012f4
#define public_10001308 _public_10001308
#define public_1000131c _public_1000131c
#define public_10001330 _public_10001330
#define public_10001344 _public_10001344
#define public_10001355 _public_10001355
#define public_10001366 _public_10001366
#define public_10001377 _public_10001377
#define public_10001388 _public_10001388
#define public_10001399 _public_10001399
#define public_100013aa _public_100013aa
#define public_100013bb _public_100013bb
#define public_100013c9 _public_100013c9
#define public_100013e4 _public_100013e4
#define public_100013f0 _public_100013f0
#define public_100013ff _public_100013ff
#define public_10001406 _public_10001406
#define public_10001431 _public_10001431
#define public_10001435 _public_10001435
#define public_1000144c _public_1000144c
#define public_1000147c _public_1000147c
#define public_10001494 _public_10001494

PROC_DECLARE(0x10001000, internal_10001000, public_10001000);
extern "C" NAKED register_t __cdecl internal_10001000()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push ebp
        push edi
        push esi
        push ebx
        sub esp, 0x34
        mov ebp, edx
        mov edx, dword ptr ss : [ebp+0x74]
        mov ebx, dword ptr ss : [ebp+0x70]
        cmp dword ptr ss : [ebp+0x84], ebx
        ja public_1000101e
        shr edx, 2
        public_1000101e : nop
        inc edx
        mov edi, dword ptr ss : [ebp+0x88]
        mov dword ptr ss : [esp+0x30], edx
        mov eax, dword ptr ss : [ebp+0x6C]
        cmp eax, edi
        jae public_10001032
        mov edi, eax
        public_10001032 : nop
        mov dword ptr ss : [esp+0x28], ebx
        mov esi, dword ptr ss : [ebp+0x30]
        mov ecx, dword ptr ss : [ebp+0x64]
        mov dword ptr ss : [esp+0x24], esi
        mov dword ptr ss : [esp+0x10], edi
        add esi, ecx
        mov dword ptr ss : [esp+0xC], esi
        mov dx, word ptr ds : [esi]
        mov bx, word ptr ds : [ebx+esi-1]
        add esi, 0x101
        mov word ptr ss : [esp+0x1C], dx
        mov dword ptr ss : [esp], esi
        mov esi, dword ptr ss : [ebp+0x24]
        sub esi, 0x106
        sub ecx, esi
        ja public_1000106f
        xor ecx, ecx
        public_1000106f : nop
        mov dword ptr ss : [esp+0x2C], ecx
        mov edx, dword ptr ss : [ebp+0x38]
        mov dword ptr ss : [esp+0x20], edx
        mov edx, dword ptr ss : [ebp+0x68]
        mov bp, word ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+4], edx
        mov edx, dword ptr ss : [esp+0x24]
        mov edi, edx
        add edi, dword ptr ss : [esp+0x28]
        mov esi, dword ptr ss : [esp+0x20]
        dec edi
        mov dword ptr ss : [esp+8], edi
        jmp public_100010ed
        nop 
        public_100010a0 : nop
        add dword ptr ss : [esp+0x30], 0x10
        je public_1000147c
        public_100010ab : nop
        cmp word ptr ds : [eax+edi], bx
        je public_100010cd
        public_100010b1 : nop
        and eax, 0x7FFF
        mov ax, word ptr ds : [esi+eax*2]
        cmp ecx, eax
        jae public_1000147c
        dec dword ptr ss : [esp+0x30]
        jne public_100010ab
        jmp public_1000147c
        public_100010cd : nop
        cmp bp, word ptr ds : [eax+edx]
        jne public_100010b1
        jmp public_100013bb
        public_100010d8 : nop
        mov edi, dword ptr ss : [esp+8]
        and eax, 0x7FFF
        mov ax, word ptr ds : [esi+eax*2]
        cmp ecx, eax
        jae public_1000147c
        public_100010ed : nop
        sub dword ptr ss : [esp+0x30], 0x11
        jbe public_100010a0
        public_100010f4 : nop
        cmp word ptr ds : [eax+edi], bx
        je public_100013aa
        public_100010fe : nop
        and eax, 0x7FFF
        mov ax, word ptr ds : [esi+eax*2]
        cmp ecx, eax
        jae public_1000147c
        cmp word ptr ds : [eax+edi], bx
        je public_10001399
        public_10001119 : nop
        and eax, 0x7FFF
        mov ax, word ptr ds : [esi+eax*2]
        cmp ecx, eax
        jae public_1000147c
        cmp word ptr ds : [eax+edi], bx
        je public_10001388
        public_10001134 : nop
        and eax, 0x7FFF
        mov ax, word ptr ds : [esi+eax*2]
        cmp ecx, eax
        jae public_1000147c
        cmp word ptr ds : [eax+edi], bx
        je public_10001377
        public_1000114f : nop
        and eax, 0x7FFF
        mov ax, word ptr ds : [esi+eax*2]
        cmp ecx, eax
        jae public_1000147c
        cmp word ptr ds : [eax+edi], bx
        je public_10001366
        public_1000116a : nop
        and eax, 0x7FFF
        mov ax, word ptr ds : [esi+eax*2]
        cmp ecx, eax
        jae public_1000147c
        cmp word ptr ds : [eax+edi], bx
        je public_10001355
        public_10001185 : nop
        and eax, 0x7FFF
        mov ax, word ptr ds : [esi+eax*2]
        cmp ecx, eax
        jae public_1000147c
        cmp word ptr ds : [eax+edi], bx
        je public_10001344
        public_100011a0 : nop
        and eax, 0x7FFF
        mov ax, word ptr ds : [esi+eax*2]
        cmp ecx, eax
        jae public_1000147c
        cmp word ptr ds : [eax+edi], bx
        je public_10001330
        public_100011bb : nop
        and eax, 0x7FFF
        mov ax, word ptr ds : [esi+eax*2]
        cmp ecx, eax
        jae public_1000147c
        cmp word ptr ds : [eax+edi], bx
        je public_1000131c
        public_100011d6 : nop
        and eax, 0x7FFF
        mov ax, word ptr ds : [esi+eax*2]
        cmp ecx, eax
        jae public_1000147c
        cmp word ptr ds : [eax+edi], bx
        je public_10001308
        public_100011f1 : nop
        and eax, 0x7FFF
        mov ax, word ptr ds : [esi+eax*2]
        cmp ecx, eax
        jae public_1000147c
        cmp word ptr ds : [eax+edi], bx
        je public_100012f4
        public_1000120c : nop
        and eax, 0x7FFF
        mov ax, word ptr ds : [esi+eax*2]
        cmp ecx, eax
        jae public_1000147c
        cmp word ptr ds : [eax+edi], bx
        je public_100012a0
        public_10001223 : nop
        and eax, 0x7FFF
        mov ax, word ptr ds : [esi+eax*2]
        cmp ecx, eax
        jae public_1000147c
        cmp word ptr ds : [eax+edi], bx
        je public_100012b4
        public_1000123a : nop
        and eax, 0x7FFF
        mov ax, word ptr ds : [esi+eax*2]
        cmp ecx, eax
        jae public_1000147c
        cmp word ptr ds : [eax+edi], bx
        je public_100012c4
        public_10001251 : nop
        and eax, 0x7FFF
        mov ax, word ptr ds : [esi+eax*2]
        cmp ecx, eax
        jae public_1000147c
        cmp word ptr ds : [eax+edi], bx
        je public_100012d4
        public_10001268 : nop
        and eax, 0x7FFF
        mov ax, word ptr ds : [esi+eax*2]
        cmp ecx, eax
        jae public_1000147c
        cmp word ptr ds : [eax+edi], bx
        je public_100012e4
        public_1000127f : nop
        and eax, 0x7FFF
        mov ax, word ptr ds : [esi+eax*2]
        cmp ecx, eax
        jae public_1000147c
        sub dword ptr ss : [esp+0x30], 0x10
        ja public_100010f4
        jmp public_100010a0
        public_100012a0 : nop
        cmp bp, word ptr ds : [eax+edx]
        jne public_10001223
        add dword ptr ss : [esp+0x30], 5
        jmp public_100013c9
        public_100012b4 : nop
        cmp bp, word ptr ds : [eax+edx]
        jne public_1000123a
        add dword ptr ss : [esp+0x30], 4
        jmp public_100013c9
        public_100012c4 : nop
        cmp bp, word ptr ds : [eax+edx]
        jne public_10001251
        add dword ptr ss : [esp+0x30], 3
        jmp public_100013c9
        public_100012d4 : nop
        cmp bp, word ptr ds : [eax+edx]
        jne public_10001268
        add dword ptr ss : [esp+0x30], 2
        jmp public_100013c9
        public_100012e4 : nop
        cmp bp, word ptr ds : [eax+edx]
        jne public_1000127f
        add dword ptr ss : [esp+0x30], 1
        jmp public_100013c9
        public_100012f4 : nop
        cmp bp, word ptr ds : [eax+edx]
        jne public_1000120c
        add dword ptr ss : [esp+0x30], 6
        jmp public_100013c9
        public_10001308 : nop
        cmp bp, word ptr ds : [eax+edx]
        jne public_100011f1
        add dword ptr ss : [esp+0x30], 7
        jmp public_100013c9
        public_1000131c : nop
        cmp bp, word ptr ds : [eax+edx]
        jne public_100011d6
        add dword ptr ss : [esp+0x30], 8
        jmp public_100013c9
        public_10001330 : nop
        cmp bp, word ptr ds : [eax+edx]
        jne public_100011bb
        add dword ptr ss : [esp+0x30], 9
        jmp public_100013c9
        public_10001344 : nop
        cmp bp, word ptr ds : [eax+edx]
        jne public_100011a0
        add dword ptr ss : [esp+0x30], 0xA
        jmp public_100013c9
        public_10001355 : nop
        cmp bp, word ptr ds : [eax+edx]
        jne public_10001185
        add dword ptr ss : [esp+0x30], 0xB
        jmp public_100013c9
        public_10001366 : nop
        cmp bp, word ptr ds : [eax+edx]
        jne public_1000116a
        add dword ptr ss : [esp+0x30], 0xC
        jmp public_100013c9
        public_10001377 : nop
        cmp bp, word ptr ds : [eax+edx]
        jne public_1000114f
        add dword ptr ss : [esp+0x30], 0xD
        jmp public_100013c9
        public_10001388 : nop
        cmp bp, word ptr ds : [eax+edx]
        jne public_10001134
        add dword ptr ss : [esp+0x30], 0xE
        jmp public_100013c9
        public_10001399 : nop
        cmp bp, word ptr ds : [eax+edx]
        jne public_10001119
        add dword ptr ss : [esp+0x30], 0xF
        jmp public_100013c9
        public_100013aa : nop
        cmp bp, word ptr ds : [eax+edx]
        jne public_100010fe
        add dword ptr ss : [esp+0x30], 0x10
        jmp public_100013c9
        public_100013bb : nop
        mov edi, dword ptr ss : [esp+0x24]
        cmp bp, word ptr ds : [eax+edi]
        jne public_100010d8
        public_100013c9 : nop
        mov edi, edx
        mov esi, dword ptr ss : [esp+0xC]
        add edi, eax
        mov edx, dword ptr ds : [esi+3]
        xor edx, dword ptr ds : [edi+3]
        je public_10001406
        or dl, dl
        je public_100013e4
        mov esi, 3
        jmp public_10001435
        public_100013e4 : nop
        or dx, dx
        je public_100013f0
        mov esi, 4
        jmp public_10001435
        public_100013f0 : nop
        and edx, 0xFFFFFF
        je public_100013ff
        mov esi, 5
        jmp public_10001435
        public_100013ff : nop
        mov esi, 6
        jmp public_10001435
        public_10001406 : nop
        add edi, 6
        add esi, 6
        mov ecx, 0x3F
        repe cmpsd
        je public_10001431
        sub esi, 4
        mov edx, dword ptr ds : [edi-4]
        xor edx, dword ptr ds : [esi]
        or dl, dl
        jne public_10001431
        inc esi
        or dx, dx
        jne public_10001431
        inc esi
        and edx, 0xFFFFFF
        jne public_10001431
        inc esi
        public_10001431 : nop
        sub esi, dword ptr ss : [esp+0xC]
        public_10001435 : nop
        cmp esi, dword ptr ss : [esp+0x28]
        ja public_1000144c
        mov esi, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x24]
        jmp public_100010d8
        public_1000144c : nop
        mov dword ptr ss : [esp+0x28], esi
        mov dword ptr ss : [esp+4], eax
        cmp esi, dword ptr ss : [esp+0x10]
        jae public_1000147c
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x24]
        add ecx, esi
        add esi, edx
        dec esi
        mov dword ptr ss : [esp+8], esi
        mov bx, word ptr ds : [ecx-1]
        mov esi, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x2C]
        jmp public_100010d8
        public_1000147c : nop
        mov ebx, dword ptr ss : [esp+4]
        mov ebp, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [ebp+0x68], ebx
        mov eax, dword ptr ss : [ebp+0x6C]
        cmp ecx, eax
        ja public_10001494
        mov eax, ecx
        public_10001494 : nop
        add esp, 0x34
        pop ebx
        pop esi
        pop edi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x10001000)
    }
}

#undef public_1000101e
#undef public_10001032
#undef public_1000106f
#undef public_100010a0
#undef public_100010ab
#undef public_100010b1
#undef public_100010cd
#undef public_100010d8
#undef public_100010ed
#undef public_100010f4
#undef public_100010fe
#undef public_10001119
#undef public_10001134
#undef public_1000114f
#undef public_1000116a
#undef public_10001185
#undef public_100011a0
#undef public_100011bb
#undef public_100011d6
#undef public_100011f1
#undef public_1000120c
#undef public_10001223
#undef public_1000123a
#undef public_10001251
#undef public_10001268
#undef public_1000127f
#undef public_100012a0
#undef public_100012b4
#undef public_100012c4
#undef public_100012d4
#undef public_100012e4
#undef public_100012f4
#undef public_10001308
#undef public_1000131c
#undef public_10001330
#undef public_10001344
#undef public_10001355
#undef public_10001366
#undef public_10001377
#undef public_10001388
#undef public_10001399
#undef public_100013aa
#undef public_100013bb
#undef public_100013c9
#undef public_100013e4
#undef public_100013f0
#undef public_100013ff
#undef public_10001406
#undef public_10001431
#undef public_10001435
#undef public_1000144c
#undef public_1000147c
#undef public_10001494
