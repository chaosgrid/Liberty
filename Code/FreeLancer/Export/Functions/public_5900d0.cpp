#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58e430);
CLANG_FORWARD_PROC_SYMBOL(public_5900d0);
CLANG_FORWARD_PROC_SYMBOL(public_590400);
CLANG_FORWARD_PROC_SYMBOL(public_590ab0);
CLANG_FORWARD_PROC_SYMBOL(public_590d10);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_590120 _public_590120
#define public_590122 _public_590122
#define public_59012a _public_59012a
#define public_59013c _public_59013c
#define public_590149 _public_590149
#define public_590170 _public_590170
#define public_590188 _public_590188
#define public_590192 _public_590192
#define public_5901b2 _public_5901b2
#define public_5901ca _public_5901ca
#define public_5901d0 _public_5901d0
#define public_5901e3 _public_5901e3
#define public_5901f0 _public_5901f0
#define public_5901fe _public_5901fe
#define public_59023c _public_59023c
#define public_590269 _public_590269
#define public_5902a3 _public_5902a3
#define public_5902a7 _public_5902a7
#define public_5902be _public_5902be
#define public_5902e1 _public_5902e1
#define public_5902f1 _public_5902f1
#define public_590306 _public_590306
#define public_590337 _public_590337
#define public_59034d _public_59034d
#define public_590367 _public_590367
#define public_59038b _public_59038b
#define public_590396 _public_590396
#define public_5903c7 _public_5903c7
#define public_5903d2 _public_5903d2
#define public_5903e5 _public_5903e5
#define public_5903e8 _public_5903e8

PROC_DECLARE(0x5900d0, internal_5900d0, public_5900d0);
extern "C" NAKED register_t __cdecl internal_5900d0()
{
    __asm
    {
        sub esp, 0xC
        mov edx, dword ptr ds : [ecx+0xC]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [ecx+8]
        sub edx, esi
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        add edx, eax
        cmp edx, edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_590269
        mov ebx, dword ptr ds : [ecx+4]
        test ebx, ebx
        je public_590120
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edi, edx
        mov ecx, edx
        jb public_590122
        public_590120 : nop
        mov ecx, edi
        public_590122 : nop
        test ebx, ebx
        jne public_59012a
        xor edx, edx
        jmp public_59013c
        public_59012a : nop
        sub esi, ebx
        mov eax, 0x2AAAAAAB
        imul esi
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_59013c : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_590149
        xor eax, eax
        public_590149 : nop
        lea ecx, ds:[eax+eax*2]
        shl ecx, 2
        push ecx
        call public_5b7e84
        mov ebx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov ebp, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_590188
        lea ecx, ds:[ecx]
        public_590170 : nop
        push esi
        push ebp
        call public_590ab0
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0xC
        add esp, 8
        add ebp, 0xC
        cmp esi, eax
        jne public_590170
        public_590188 : nop
        test edi, edi
        mov esi, ebp
        jbe public_5901b2
        mov dword ptr ss : [esp+0x24], edi
        public_590192 : nop
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        push esi
        call public_590ab0
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0xC
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_590192
        mov eax, dword ptr ss : [esp+0x20]
        public_5901b2 : nop
        lea ecx, ds:[edi+edi*2]
        lea ecx, ss:[ebp+ecx*4]
        mov ebp, dword ptr ds : [ebx+8]
        cmp eax, ebp
        mov esi, eax
        je public_5901e3
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_5901d0
        public_5901ca : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edi, edi
        public_5901d0 : nop
        add ecx, esi
        push esi
        push ecx
        call public_590ab0
        add esi, 0xC
        add esp, 8
        cmp esi, ebp
        jne public_5901ca
        public_5901e3 : nop
        mov ebp, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, ebp
        je public_5901fe
        lea ecx, ds:[ecx]
        public_5901f0 : nop
        mov ecx, esi
        call public_58e430
        add esi, 0xC
        cmp esi, ebp
        jne public_5901f0
        public_5901fe : nop
        mov edx, dword ptr ds : [ebx+4]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x1C]
        lea eax, ds:[eax+eax*2]
        lea ecx, ds:[esi+eax*4]
        mov eax, dword ptr ds : [ebx+4]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [ebx+0xC], ecx
        jne public_59023c
        xor edx, edx
        add edi, edx
        lea ecx, ds:[edi+edi*2]
        pop edi
        lea edx, ds:[esi+ecx*4]
        mov dword ptr ds : [ebx+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_59023c : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add edi, edx
        lea ecx, ds:[edi+edi*2]
        pop edi
        lea edx, ds:[esi+ecx*4]
        mov dword ptr ds : [ebx+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_590269 : nop
        mov ebx, dword ptr ss : [esp+0x20]
        mov edx, esi
        sub edx, ebx
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, edi
        jae public_59034d
        lea eax, ds:[edi+edi*2]
        shl eax, 2
        mov dword ptr ss : [esp+0x24], eax
        add eax, ebx
        cmp ebx, esi
        mov ebp, ebx
        je public_5902be
        sub eax, ebx
        mov dword ptr ss : [esp+0x20], eax
        jmp public_5902a7
        public_5902a3 : nop
        mov eax, dword ptr ss : [esp+0x20]
        public_5902a7 : nop
        add eax, ebp
        push ebp
        push eax
        call public_590ab0
        add ebp, 0xC
        add esp, 8
        cmp ebp, esi
        jne public_5902a3
        mov ecx, dword ptr ss : [esp+0x10]
        public_5902be : nop
        mov esi, dword ptr ds : [ecx+8]
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub edi, edx
        mov eax, edi
        mov edi, dword ptr ss : [esp+0x28]
        je public_5902f1
        mov ebp, eax
        public_5902e1 : nop
        push edi
        push esi
        call public_590ab0
        add esp, 8
        add esi, 0xC
        dec ebp
        jne public_5902e1
        public_5902f1 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+8]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x20], eax
        je public_590337
        lea ebp, ds:[edi+8]
        lea esi, ds:[ebx+2]
        public_590306 : nop
        mov dl, byte ptr ds : [edi]
        mov byte ptr ds : [esi-2], dl
        mov al, byte ptr ds : [edi+1]
        mov byte ptr ds : [esi-1], al
        mov cl, byte ptr ds : [edi+2]
        mov byte ptr ds : [esi], cl
        mov edx, dword ptr ds : [edi+4]
        push ebp
        lea ecx, ds:[esi+6]
        mov dword ptr ds : [esi+2], edx
        call public_590400
        mov ecx, dword ptr ss : [esp+0x20]
        add esi, 0xC
        lea eax, ds:[esi-2]
        cmp eax, ecx
        jne public_590306
        mov ecx, dword ptr ss : [esp+0x10]
        public_590337 : nop
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        add eax, edx
        pop ebp
        mov dword ptr ds : [ecx+8], eax
        pop ebx
        add esp, 0xC
        ret 0xC
        public_59034d : nop
        test edi, edi
        jbe public_5903e8
        lea ebp, ds:[edi+edi*2]
        shl ebp, 2
        mov edi, esi
        sub edi, ebp
        cmp edi, esi
        mov dword ptr ss : [esp+0x20], esi
        je public_59038b
        public_590367 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push edi
        push eax
        call public_590ab0
        mov edx, dword ptr ss : [esp+0x28]
        add edx, 0xC
        add edi, 0xC
        add esp, 8
        cmp edi, esi
        mov dword ptr ss : [esp+0x20], edx
        jne public_590367
        mov ecx, dword ptr ss : [esp+0x10]
        public_59038b : nop
        mov edi, dword ptr ds : [ecx+8]
        mov esi, edi
        sub esi, ebp
        cmp ebx, esi
        je public_5903c7
        public_590396 : nop
        mov cl, byte ptr ds : [esi-0xC]
        sub esi, 0xC
        sub edi, 0xC
        mov byte ptr ds : [edi], cl
        mov dl, byte ptr ds : [esi+1]
        mov byte ptr ds : [edi+1], dl
        mov al, byte ptr ds : [esi+2]
        mov byte ptr ds : [edi+2], al
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ds:[esi+8]
        mov dword ptr ds : [edi+4], ecx
        push edx
        lea ecx, ds:[edi+8]
        call public_590400
        cmp esi, ebx
        jne public_590396
        mov ecx, dword ptr ss : [esp+0x10]
        public_5903c7 : nop
        lea esi, ds:[ebx+ebp]
        cmp ebx, esi
        je public_5903e5
        mov edi, dword ptr ss : [esp+0x28]
        public_5903d2 : nop
        push edi
        mov ecx, ebx
        call public_590d10
        add ebx, 0xC
        cmp ebx, esi
        jne public_5903d2
        mov ecx, dword ptr ss : [esp+0x10]
        public_5903e5 : nop
        add dword ptr ds : [ecx+8], ebp
        public_5903e8 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x5900d0)
    }
}

#undef public_590120
#undef public_590122
#undef public_59012a
#undef public_59013c
#undef public_590149
#undef public_590170
#undef public_590188
#undef public_590192
#undef public_5901b2
#undef public_5901ca
#undef public_5901d0
#undef public_5901e3
#undef public_5901f0
#undef public_5901fe
#undef public_59023c
#undef public_590269
#undef public_5902a3
#undef public_5902a7
#undef public_5902be
#undef public_5902e1
#undef public_5902f1
#undef public_590306
#undef public_590337
#undef public_59034d
#undef public_590367
#undef public_59038b
#undef public_590396
#undef public_5903c7
#undef public_5903d2
#undef public_5903e5
#undef public_5903e8
