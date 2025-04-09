#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_590400);
CLANG_FORWARD_PROC_SYMBOL(public_5987a0);
CLANG_FORWARD_PROC_SYMBOL(public_599610);
CLANG_FORWARD_PROC_SYMBOL(public_5999d0);
CLANG_FORWARD_PROC_SYMBOL(public_599a60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_599644 _public_599644
#define public_599646 _public_599646
#define public_59964e _public_59964e
#define public_599653 _public_599653
#define public_59965f _public_59965f
#define public_599684 _public_599684
#define public_599698 _public_599698
#define public_5996a2 _public_5996a2
#define public_5996be _public_5996be
#define public_5996d6 _public_5996d6
#define public_5996e0 _public_5996e0
#define public_5996f3 _public_5996f3
#define public_599701 _public_599701
#define public_59970f _public_59970f
#define public_59974f _public_59974f
#define public_59976c _public_59976c
#define public_59979a _public_59979a
#define public_5997a0 _public_5997a0
#define public_5997b7 _public_5997b7
#define public_5997d0 _public_5997d0
#define public_5997e4 _public_5997e4
#define public_5997f0 _public_5997f0
#define public_59980e _public_59980e
#define public_599824 _public_599824
#define public_599840 _public_599840
#define public_599864 _public_599864
#define public_599870 _public_599870
#define public_599895 _public_599895
#define public_5998a2 _public_5998a2
#define public_5998c0 _public_5998c0
#define public_5998ce _public_5998ce
#define public_5998da _public_5998da

PROC_DECLARE(0x599610, internal_599610, public_599610);
extern "C" NAKED register_t __cdecl internal_599610()
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
        jae public_59976c
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_599644
        mov eax, esi
        sub eax, ecx
        sar eax, 3
        cmp ebp, eax
        jb public_599646
        public_599644 : nop
        mov eax, ebp
        public_599646 : nop
        test ecx, ecx
        jne public_59964e
        xor esi, esi
        jmp public_599653
        public_59964e : nop
        sub esi, ecx
        sar esi, 3
        public_599653 : nop
        add eax, esi
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_59965f
        xor eax, eax
        public_59965f : nop
        lea ecx, ds:[eax*8]
        push ecx
        call public_5b7e84
        mov edx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [edx+4]
        mov ebx, dword ptr ss : [esp+0x20]
        add esp, 4
        cmp esi, ebx
        mov dword ptr ss : [esp+0x20], eax
        mov edi, eax
        je public_599698
        public_599684 : nop
        push esi
        push edi
        call public_5999d0
        add esi, 8
        add esp, 8
        add edi, 8
        cmp esi, ebx
        jne public_599684
        public_599698 : nop
        test ebp, ebp
        mov esi, edi
        jbe public_5996be
        mov dword ptr ss : [esp+0x1C], ebp
        public_5996a2 : nop
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        push esi
        call public_5999d0
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 8
        add esi, 8
        dec eax
        mov dword ptr ss : [esp+0x1C], eax
        jne public_5996a2
        public_5996be : nop
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ds:[edi+ebp*8]
        mov edi, dword ptr ds : [ecx+8]
        cmp ebx, edi
        mov esi, ebx
        je public_5996f3
        sub eax, ebx
        mov dword ptr ss : [esp+0x24], eax
        jmp public_5996e0
        public_5996d6 : nop
        mov eax, dword ptr ss : [esp+0x24]
        lea ebx, ds:[ebx]
        public_5996e0 : nop
        add eax, esi
        push esi
        push eax
        call public_5999d0
        add esi, 8
        add esp, 8
        cmp esi, edi
        jne public_5996d6
        public_5996f3 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [eax+8]
        mov esi, dword ptr ds : [eax+4]
        cmp esi, edi
        je public_59970f
        public_599701 : nop
        mov ecx, esi
        call public_5987a0
        add esi, 8
        cmp esi, edi
        jne public_599701
        public_59970f : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+4]
        push eax
        call public_5b7e1d
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        lea edx, ds:[esi+ecx*8]
        mov dword ptr ds : [eax+0xC], edx
        mov edx, dword ptr ds : [eax+4]
        add esp, 4
        test edx, edx
        jne public_59974f
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
        public_59974f : nop
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
        public_59976c : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        mov edx, esi
        sub edx, ebx
        sar edx, 3
        cmp edx, ebp
        jae public_599824
        lea eax, ds:[ebp*8]
        mov dword ptr ss : [esp+0x20], eax
        add eax, ebx
        cmp ebx, esi
        mov edi, ebx
        je public_5997b7
        sub eax, ebx
        mov dword ptr ss : [esp+0x1C], eax
        jmp public_5997a0
        public_59979a : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov edi, edi
        public_5997a0 : nop
        add eax, edi
        push edi
        push eax
        call public_5999d0
        add edi, 8
        add esp, 8
        cmp edi, esi
        jne public_59979a
        mov ecx, dword ptr ss : [esp+0x10]
        public_5997b7 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov edi, dword ptr ss : [esp+0x24]
        mov eax, esi
        sub eax, ebx
        sar eax, 3
        sub ebp, eax
        je public_5997e4
        lea esp, ss:[esp]
        public_5997d0 : nop
        push edi
        push esi
        call public_5999d0
        add esp, 8
        add esi, 8
        dec ebp
        jne public_5997d0
        mov ecx, dword ptr ss : [esp+0x10]
        public_5997e4 : nop
        mov ebp, dword ptr ds : [ecx+8]
        cmp ebx, ebp
        mov esi, ebx
        je public_59980e
        lea ebx, ds:[edi+4]
        public_5997f0 : nop
        mov cl, byte ptr ds : [edi]
        mov byte ptr ds : [esi], cl
        mov dl, byte ptr ds : [edi+1]
        lea ecx, ds:[esi+4]
        push ebx
        mov byte ptr ds : [ecx-3], dl
        call public_590400
        add esi, 8
        cmp esi, ebp
        jne public_5997f0
        mov ecx, dword ptr ss : [esp+0x10]
        public_59980e : nop
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        add edx, eax
        pop ebp
        mov dword ptr ds : [ecx+8], edx
        pop ebx
        add esp, 8
        ret 0xC
        public_599824 : nop
        test ebp, ebp
        jbe public_5998da
        shl ebp, 3
        mov edi, esi
        sub edi, ebp
        cmp edi, esi
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x20], ebp
        je public_599864
        nop 
        public_599840 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        push edi
        push ecx
        call public_5999d0
        mov edx, dword ptr ss : [esp+0x24]
        add edx, 8
        add edi, 8
        add esp, 8
        cmp edi, esi
        mov dword ptr ss : [esp+0x1C], edx
        jne public_599840
        mov ecx, dword ptr ss : [esp+0x10]
        public_599864 : nop
        mov edi, dword ptr ds : [ecx+8]
        mov esi, edi
        sub esi, ebp
        cmp ebx, esi
        je public_599895
        nop 
        public_599870 : nop
        mov dl, byte ptr ds : [esi-8]
        sub esi, 8
        sub edi, 8
        lea ecx, ds:[esi+4]
        mov byte ptr ds : [edi], dl
        mov al, byte ptr ds : [esi+1]
        push ecx
        lea ecx, ds:[edi+4]
        mov byte ptr ds : [edi+1], al
        call public_590400
        cmp esi, ebx
        jne public_599870
        mov ecx, dword ptr ss : [esp+0x10]
        public_599895 : nop
        add ebp, ebx
        cmp ebx, ebp
        je public_5998ce
        mov edi, dword ptr ss : [esp+0x24]
        lea esi, ds:[ebx+4]
        public_5998a2 : nop
        mov dl, byte ptr ds : [edi]
        mov byte ptr ds : [esi-4], dl
        mov al, byte ptr ds : [edi+1]
        mov ecx, esi
        mov byte ptr ds : [esi-3], al
        call public_599a60
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        mov dword ptr ds : [esi], eax
        je public_5998c0
        inc dword ptr ds : [eax+4]
        public_5998c0 : nop
        add esi, 8
        lea ecx, ds:[esi-4]
        cmp ecx, ebp
        jne public_5998a2
        mov ecx, dword ptr ss : [esp+0x10]
        public_5998ce : nop
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ss : [esp+0x20]
        add eax, edx
        mov dword ptr ds : [ecx+8], eax
        public_5998da : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x599610)
    }
}

#undef public_599644
#undef public_599646
#undef public_59964e
#undef public_599653
#undef public_59965f
#undef public_599684
#undef public_599698
#undef public_5996a2
#undef public_5996be
#undef public_5996d6
#undef public_5996e0
#undef public_5996f3
#undef public_599701
#undef public_59970f
#undef public_59974f
#undef public_59976c
#undef public_59979a
#undef public_5997a0
#undef public_5997b7
#undef public_5997d0
#undef public_5997e4
#undef public_5997f0
#undef public_59980e
#undef public_599824
#undef public_599840
#undef public_599864
#undef public_599870
#undef public_599895
#undef public_5998a2
#undef public_5998c0
#undef public_5998ce
#undef public_5998da
