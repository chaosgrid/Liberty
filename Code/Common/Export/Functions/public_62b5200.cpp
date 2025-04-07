#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_62904d0);
CLANG_FORWARD_PROC_SYMBOL(public_62b5200);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62b5234 _public_62b5234
#define public_62b5236 _public_62b5236
#define public_62b523e _public_62b523e
#define public_62b5243 _public_62b5243
#define public_62b524f _public_62b524f
#define public_62b5274 _public_62b5274
#define public_62b5288 _public_62b5288
#define public_62b5292 _public_62b5292
#define public_62b52ae _public_62b52ae
#define public_62b52c6 _public_62b52c6
#define public_62b52d0 _public_62b52d0
#define public_62b52e3 _public_62b52e3
#define public_62b52f1 _public_62b52f1
#define public_62b52ff _public_62b52ff
#define public_62b533f _public_62b533f
#define public_62b535c _public_62b535c
#define public_62b538a _public_62b538a
#define public_62b5390 _public_62b5390
#define public_62b53a7 _public_62b53a7
#define public_62b53c0 _public_62b53c0
#define public_62b53d4 _public_62b53d4
#define public_62b53e0 _public_62b53e0
#define public_62b53f3 _public_62b53f3
#define public_62b53f5 _public_62b53f5
#define public_62b5405 _public_62b5405
#define public_62b540c _public_62b540c
#define public_62b5422 _public_62b5422
#define public_62b5440 _public_62b5440
#define public_62b5464 _public_62b5464
#define public_62b5470 _public_62b5470
#define public_62b5489 _public_62b5489
#define public_62b548b _public_62b548b
#define public_62b549b _public_62b549b
#define public_62b549f _public_62b549f
#define public_62b54b0 _public_62b54b0
#define public_62b54c2 _public_62b54c2
#define public_62b54c4 _public_62b54c4
#define public_62b54d4 _public_62b54d4
#define public_62b54db _public_62b54db
#define public_62b54de _public_62b54de

PROC_DECLARE(0x62b5200, internal_62b5200, public_62b5200);
extern "C" NAKED register_t __cdecl internal_62b5200()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ds : [ecx+0xC]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        sub eax, esi
        sar eax, 3
        cmp eax, ebp
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_62b535c
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_62b5234
        mov eax, esi
        sub eax, ecx
        sar eax, 3
        cmp ebp, eax
        jb public_62b5236
        public_62b5234 : nop
        mov eax, ebp
        public_62b5236 : nop
        test ecx, ecx
        jne public_62b523e
        xor esi, esi
        jmp public_62b5243
        public_62b523e : nop
        sub esi, ecx
        sar esi, 3
        public_62b5243 : nop
        add eax, esi
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_62b524f
        xor eax, eax
        public_62b524f : nop
        lea ecx, ds:[eax*8]
        push ecx
        call public_6391d9c
        mov edx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [edx+4]
        mov ebx, dword ptr ss : [esp+0x20]
        add esp, 4
        cmp esi, ebx
        mov dword ptr ss : [esp+0x20], eax
        mov edi, eax
        je public_62b5288
        public_62b5274 : nop
        push esi
        push edi
        call public_62904d0
        add esi, 8
        add esp, 8
        add edi, 8
        cmp esi, ebx
        jne public_62b5274
        public_62b5288 : nop
        test ebp, ebp
        mov esi, edi
        jbe public_62b52ae
        mov dword ptr ss : [esp+0x1C], ebp
        public_62b5292 : nop
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        push esi
        call public_62904d0
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 8
        add esi, 8
        dec eax
        mov dword ptr ss : [esp+0x1C], eax
        jne public_62b5292
        public_62b52ae : nop
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ds:[edi+ebp*8]
        mov edi, dword ptr ds : [ecx+8]
        cmp ebx, edi
        mov esi, ebx
        je public_62b52e3
        sub eax, ebx
        mov dword ptr ss : [esp+0x24], eax
        jmp public_62b52d0
        public_62b52c6 : nop
        mov eax, dword ptr ss : [esp+0x24]
        lea ebx, ds:[ebx]
        public_62b52d0 : nop
        add eax, esi
        push esi
        push eax
        call public_62904d0
        add esi, 8
        add esp, 8
        cmp esi, edi
        jne public_62b52c6
        public_62b52e3 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [eax+8]
        mov esi, dword ptr ds : [eax+4]
        cmp esi, edi
        je public_62b52ff
        public_62b52f1 : nop
        mov ecx, esi
        call public_62881d0
        add esi, 8
        cmp esi, edi
        jne public_62b52f1
        public_62b52ff : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+4]
        push eax
        call public_6391d5a
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        lea edx, ds:[esi+ecx*8]
        mov dword ptr ds : [eax+0xC], edx
        mov edx, dword ptr ds : [eax+4]
        add esp, 4
        test edx, edx
        jne public_62b533f
        xor ecx, ecx
        mov ecx, ebp
        pop edi
        lea ecx, ds:[esi+ecx*8]
        mov dword ptr ds : [eax+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [eax+8], ecx
        pop ebx
        add esp, 8
        ret 0xC
        public_62b533f : nop
        mov ecx, dword ptr ds : [eax+8]
        sub ecx, edx
        sar ecx, 3
        add ecx, ebp
        pop edi
        lea ecx, ds:[esi+ecx*8]
        mov dword ptr ds : [eax+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [eax+8], ecx
        pop ebx
        add esp, 8
        ret 0xC
        public_62b535c : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        mov edx, esi
        sub edx, ebx
        sar edx, 3
        cmp edx, ebp
        jae public_62b5422
        lea eax, ds:[ebp*8]
        mov dword ptr ss : [esp+0x20], eax
        add eax, ebx
        cmp ebx, esi
        mov edi, ebx
        je public_62b53a7
        sub eax, ebx
        mov dword ptr ss : [esp+0x1C], eax
        jmp public_62b5390
        public_62b538a : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov edi, edi
        public_62b5390 : nop
        add eax, edi
        push edi
        push eax
        call public_62904d0
        add edi, 8
        add esp, 8
        cmp edi, esi
        jne public_62b538a
        mov ecx, dword ptr ss : [esp+0x10]
        public_62b53a7 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov eax, esi
        sub eax, ebx
        sar eax, 3
        sub ebp, eax
        mov edi, ebp
        mov ebp, dword ptr ss : [esp+0x24]
        je public_62b53d4
        nop 
        lea esp, ss:[esp]
        public_62b53c0 : nop
        push ebp
        push esi
        call public_62904d0
        add esp, 8
        add esi, 8
        dec edi
        jne public_62b53c0
        mov ecx, dword ptr ss : [esp+0x10]
        public_62b53d4 : nop
        mov esi, dword ptr ds : [ecx+8]
        cmp ebx, esi
        je public_62b540c
        nop 
        lea esp, ss:[esp]
        public_62b53e0 : nop
        mov eax, dword ptr ss : [ebp]
        test eax, eax
        je public_62b53f3
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62b53f3
        add eax, 8
        jmp public_62b53f5
        public_62b53f3 : nop
        xor eax, eax
        public_62b53f5 : nop
        cmp eax, dword ptr ds : [ebx]
        je public_62b5405
        push eax
        mov ecx, ebx
        call public_6341610
        mov ecx, dword ptr ss : [esp+0x10]
        public_62b5405 : nop
        add ebx, 8
        cmp ebx, esi
        jne public_62b53e0
        public_62b540c : nop
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        add eax, edx
        pop ebp
        mov dword ptr ds : [ecx+8], eax
        pop ebx
        add esp, 8
        ret 0xC
        public_62b5422 : nop
        test ebp, ebp
        jbe public_62b54de
        shl ebp, 3
        mov edi, esi
        sub edi, ebp
        cmp edi, esi
        mov dword ptr ss : [esp+0x1C], esi
        je public_62b5464
        lea esp, ss:[esp]
        public_62b5440 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        push edi
        push eax
        call public_62904d0
        mov edx, dword ptr ss : [esp+0x24]
        add edx, 8
        add edi, 8
        add esp, 8
        cmp edi, esi
        mov dword ptr ss : [esp+0x1C], edx
        jne public_62b5440
        mov ecx, dword ptr ss : [esp+0x10]
        public_62b5464 : nop
        mov edi, dword ptr ds : [ecx+8]
        mov esi, edi
        sub esi, ebp
        cmp ebx, esi
        je public_62b549f
        nop 
        public_62b5470 : nop
        mov eax, dword ptr ds : [esi-8]
        sub esi, 8
        sub edi, 8
        test eax, eax
        je public_62b5489
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62b5489
        add eax, 8
        jmp public_62b548b
        public_62b5489 : nop
        xor eax, eax
        public_62b548b : nop
        cmp eax, dword ptr ds : [edi]
        je public_62b549b
        push eax
        mov ecx, edi
        call public_6341610
        mov ecx, dword ptr ss : [esp+0x10]
        public_62b549b : nop
        cmp esi, ebx
        jne public_62b5470
        public_62b549f : nop
        lea esi, ds:[ebx+ebp]
        cmp ebx, esi
        je public_62b54db
        mov edi, dword ptr ss : [esp+0x24]
        lea ebx, ds:[ebx]
        public_62b54b0 : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_62b54c2
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62b54c2
        add eax, 8
        jmp public_62b54c4
        public_62b54c2 : nop
        xor eax, eax
        public_62b54c4 : nop
        cmp eax, dword ptr ds : [ebx]
        je public_62b54d4
        push eax
        mov ecx, ebx
        call public_6341610
        mov ecx, dword ptr ss : [esp+0x10]
        public_62b54d4 : nop
        add ebx, 8
        cmp ebx, esi
        jne public_62b54b0
        public_62b54db : nop
        add dword ptr ds : [ecx+8], ebp
        public_62b54de : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x62b5200)
    }
}

#undef public_62b5234
#undef public_62b5236
#undef public_62b523e
#undef public_62b5243
#undef public_62b524f
#undef public_62b5274
#undef public_62b5288
#undef public_62b5292
#undef public_62b52ae
#undef public_62b52c6
#undef public_62b52d0
#undef public_62b52e3
#undef public_62b52f1
#undef public_62b52ff
#undef public_62b533f
#undef public_62b535c
#undef public_62b538a
#undef public_62b5390
#undef public_62b53a7
#undef public_62b53c0
#undef public_62b53d4
#undef public_62b53e0
#undef public_62b53f3
#undef public_62b53f5
#undef public_62b5405
#undef public_62b540c
#undef public_62b5422
#undef public_62b5440
#undef public_62b5464
#undef public_62b5470
#undef public_62b5489
#undef public_62b548b
#undef public_62b549b
#undef public_62b549f
#undef public_62b54b0
#undef public_62b54c2
#undef public_62b54c4
#undef public_62b54d4
#undef public_62b54db
#undef public_62b54de
