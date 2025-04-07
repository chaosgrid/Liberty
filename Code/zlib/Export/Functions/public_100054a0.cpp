#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_100054a0);

#define public_100054d5 _public_100054d5
#define public_100054de _public_100054de
#define public_10005500 _public_10005500
#define public_10005505 _public_10005505
#define public_10005525 _public_10005525
#define public_10005550 _public_10005550
#define public_10005587 _public_10005587
#define public_100055a5 _public_100055a5
#define public_100055c5 _public_100055c5
#define public_100055e7 _public_100055e7
#define public_10005616 _public_10005616
#define public_10005620 _public_10005620
#define public_10005643 _public_10005643
#define public_10005680 _public_10005680
#define public_10005692 _public_10005692
#define public_100056a2 _public_100056a2
#define public_100056b1 _public_100056b1
#define public_100056c1 _public_100056c1
#define public_100056d0 _public_100056d0
#define public_100056e0 _public_100056e0
#define public_100056ef _public_100056ef
#define public_10005700 _public_10005700
#define public_10005715 _public_10005715
#define public_1000572d _public_1000572d
#define public_10005768 _public_10005768
#define public_10005779 _public_10005779
#define public_10005796 _public_10005796
#define public_100057d4 _public_100057d4
#define public_100057df _public_100057df
#define public_100057f7 _public_100057f7

PROC_DECLARE(0x100054a0, internal_100054a0, public_100054a0);
extern "C" NAKED register_t __cdecl internal_100054a0()
{
    __asm
    {
        sub esp, 0x14
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [ecx+0x20]
        push ebx
        push ebp
        mov ebp, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        push esi
        mov esi, dword ptr ds : [ecx+0x30]
        push edi
        mov edi, dword ptr ds : [ecx+0x34]
        cmp edi, esi
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [ecx+0x1C]
        mov dword ptr ss : [esp+0x18], ebp
        jae public_100054d5
        sub esi, edi
        dec esi
        mov dword ptr ss : [esp+0x14], esi
        jmp public_100054de
        public_100054d5 : nop
        mov ecx, dword ptr ds : [ecx+0x2C]
        sub ecx, edi
        mov dword ptr ss : [esp+0x14], ecx
        public_100054de : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [ecx*4+public_1000e120]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [ecx*4+public_1000e120]
        mov dword ptr ss : [esp+0x2C], ecx
        lea esp, ss:[esp]
        public_10005500 : nop
        cmp eax, 0x14
        jae public_10005525
        public_10005505 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        movzx esi, byte ptr ss : [ebp]
        dec ecx
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, eax
        shl esi, cl
        add eax, 8
        or edx, esi
        inc ebp
        cmp eax, 0x14
        jb public_10005505
        mov dword ptr ss : [esp+0x18], ebp
        public_10005525 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ss : [esp+0x30]
        and ecx, edx
        movzx ebx, byte ptr ds : [esi+ecx*8]
        lea esi, ds:[esi+ecx*8]
        movzx ecx, byte ptr ds : [esi+1]
        shr edx, cl
        test ebx, ebx
        je public_100056ef
        movzx ecx, byte ptr ds : [esi+1]
        sub eax, ecx
        test bl, 0x10
        jne public_10005587
        nop 
        public_10005550 : nop
        test bl, 0x40
        jne public_10005779
        mov ecx, dword ptr ds : [ebx*4+public_1000e120]
        mov ebx, dword ptr ds : [esi+4]
        and ecx, edx
        add ecx, ebx
        movzx ebx, byte ptr ds : [esi+ecx*8]
        lea esi, ds:[esi+ecx*8]
        movzx ecx, byte ptr ds : [esi+1]
        shr edx, cl
        test ebx, ebx
        je public_100056ef
        movzx ecx, byte ptr ds : [esi+1]
        sub eax, ecx
        test bl, 0x10
        je public_10005550
        public_10005587 : nop
        and ebx, 0xF
        mov ecx, dword ptr ds : [ebx*4+public_1000e120]
        and ecx, edx
        add ecx, dword ptr ds : [esi+4]
        sub eax, ebx
        mov dword ptr ss : [esp+0x28], ecx
        mov ecx, ebx
        shr edx, cl
        cmp eax, 0xF
        jae public_100055c5
        public_100055a5 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        movzx esi, byte ptr ss : [ebp]
        dec ecx
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, eax
        shl esi, cl
        add eax, 8
        or edx, esi
        inc ebp
        cmp eax, 0xF
        jb public_100055a5
        mov dword ptr ss : [esp+0x18], ebp
        public_100055c5 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov esi, dword ptr ss : [esp+0x34]
        and ecx, edx
        movzx ebx, byte ptr ds : [esi+ecx*8]
        lea esi, ds:[esi+ecx*8]
        movzx ecx, byte ptr ds : [esi+1]
        shr edx, cl
        movzx ecx, byte ptr ds : [esi+1]
        sub eax, ecx
        test bl, 0x10
        jne public_10005616
        public_100055e7 : nop
        test bl, 0x40
        jne public_10005768
        mov ecx, dword ptr ds : [ebx*4+public_1000e120]
        mov ebx, dword ptr ds : [esi+4]
        and ecx, edx
        add ecx, ebx
        movzx ebx, byte ptr ds : [esi+ecx*8]
        lea esi, ds:[esi+ecx*8]
        movzx ecx, byte ptr ds : [esi+1]
        shr edx, cl
        sub eax, ecx
        test bl, 0x10
        mov dword ptr ss : [esp+0x20], ecx
        je public_100055e7
        public_10005616 : nop
        and ebx, 0xF
        cmp eax, ebx
        jae public_10005643
        lea ecx, ds:[ecx]
        public_10005620 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        movzx ebp, byte ptr ss : [ebp]
        dec ecx
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, eax
        shl ebp, cl
        add eax, 8
        or edx, ebp
        mov ebp, dword ptr ss : [esp+0x18]
        inc ebp
        cmp eax, ebx
        mov dword ptr ss : [esp+0x18], ebp
        jb public_10005620
        public_10005643 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov ebp, dword ptr ds : [ebx*4+public_1000e120]
        mov esi, dword ptr ss : [esp+0x14]
        and ebp, edx
        add ebp, ecx
        mov ecx, ebx
        shr edx, cl
        mov ecx, dword ptr ss : [esp+0x28]
        sub esi, ecx
        mov dword ptr ss : [esp+0x14], esi
        mov esi, edi
        sub esi, ebp
        mov ebp, dword ptr ss : [esp+0x38]
        sub eax, ebx
        mov ebx, dword ptr ss : [ebp+0x28]
        cmp esi, ebx
        jae public_100056d0
        mov ebp, dword ptr ss : [ebp+0x2C]
        mov dword ptr ss : [esp+0x28], ebp
        sub ebp, ebx
        lea ecx, ds:[ecx]
        public_10005680 : nop
        add esi, ebp
        cmp esi, ebx
        jb public_10005680
        mov ebp, dword ptr ss : [esp+0x28]
        sub ebp, esi
        cmp ecx, ebp
        jbe public_100056b1
        sub ecx, ebp
        public_10005692 : nop
        mov bl, byte ptr ds : [esi]
        mov byte ptr ds : [edi], bl
        inc edi
        inc esi
        dec ebp
        jne public_10005692
        mov esi, dword ptr ss : [esp+0x38]
        mov esi, dword ptr ds : [esi+0x28]
        public_100056a2 : nop
        mov bl, byte ptr ds : [esi]
        mov byte ptr ds : [edi], bl
        inc edi
        inc esi
        dec ecx
        jne public_100056a2
        mov ebp, dword ptr ss : [esp+0x18]
        jmp public_10005700
        public_100056b1 : nop
        mov bl, byte ptr ds : [esi]
        mov byte ptr ds : [edi], bl
        mov bl, byte ptr ds : [esi+1]
        inc edi
        inc esi
        mov byte ptr ds : [edi], bl
        inc edi
        inc esi
        sub ecx, 2
        public_100056c1 : nop
        mov bl, byte ptr ds : [esi]
        mov byte ptr ds : [edi], bl
        inc edi
        inc esi
        dec ecx
        jne public_100056c1
        mov ebp, dword ptr ss : [esp+0x18]
        jmp public_10005700
        public_100056d0 : nop
        mov bl, byte ptr ds : [esi]
        mov byte ptr ds : [edi], bl
        mov bl, byte ptr ds : [esi+1]
        inc edi
        inc esi
        mov byte ptr ds : [edi], bl
        inc edi
        inc esi
        sub ecx, 2
        public_100056e0 : nop
        mov bl, byte ptr ds : [esi]
        mov byte ptr ds : [edi], bl
        inc edi
        inc esi
        dec ecx
        jne public_100056e0
        mov ebp, dword ptr ss : [esp+0x18]
        jmp public_10005700
        public_100056ef : nop
        sub eax, ecx
        mov cl, byte ptr ds : [esi+4]
        mov byte ptr ds : [edi], cl
        mov ecx, dword ptr ss : [esp+0x14]
        inc edi
        dec ecx
        mov dword ptr ss : [esp+0x14], ecx
        public_10005700 : nop
        cmp dword ptr ss : [esp+0x14], 0x102
        jb public_10005715
        cmp dword ptr ss : [esp+0x10], 0xA
        jae public_10005500
        public_10005715 : nop
        mov esi, dword ptr ss : [esp+0x3C]
        mov ebx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+4]
        sub ecx, ebx
        mov ebx, eax
        shr ebx, 3
        cmp ebx, ecx
        jae public_1000572d
        mov ecx, ebx
        public_1000572d : nop
        mov ebx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [ebx+0x20], edx
        lea edx, ds:[ecx*8]
        sub eax, edx
        mov dword ptr ds : [ebx+0x1C], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi]
        sub ebp, ecx
        add ecx, eax
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], ecx
        mov ecx, ebp
        sub ecx, edx
        add eax, ecx
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi], ebp
        mov dword ptr ds : [ebx+0x34], edi
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x14
        ret 
        public_10005768 : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        mov ebx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x18], offset public_1000b218
        jmp public_100057df
        public_10005779 : nop
        test bl, 0x20
        mov ebx, dword ptr ss : [esp+0x10]
        je public_100057d4
        mov esi, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ds : [esi+4]
        sub ecx, ebx
        mov ebx, eax
        shr ebx, 3
        cmp ebx, ecx
        jae public_10005796
        mov ecx, ebx
        public_10005796 : nop
        mov ebx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [ebx+0x20], edx
        lea edx, ds:[ecx*8]
        sub eax, edx
        mov dword ptr ds : [ebx+0x1C], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi]
        sub ebp, ecx
        add ecx, eax
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], ecx
        mov ecx, ebp
        sub ecx, edx
        add eax, ecx
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi], ebp
        mov dword ptr ds : [ebx+0x34], edi
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x14
        ret 
        public_100057d4 : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [ecx+0x18], offset public_1000b230
        public_100057df : nop
        mov esi, dword ptr ds : [ecx+4]
        sub esi, ebx
        mov dword ptr ss : [esp+0x28], esi
        mov ebx, dword ptr ss : [esp+0x28]
        mov esi, eax
        shr esi, 3
        cmp esi, ebx
        jb public_100057f7
        mov esi, ebx
        public_100057f7 : nop
        mov ebx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [ebx+0x20], edx
        lea edx, ds:[esi*8]
        sub eax, edx
        mov dword ptr ds : [ebx+0x1C], eax
        mov eax, dword ptr ss : [esp+0x10]
        sub ebp, esi
        add esi, eax
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ds : [ecx+4], esi
        mov esi, dword ptr ds : [ecx]
        mov edx, ebp
        sub edx, esi
        add eax, edx
        mov dword ptr ds : [ecx], ebp
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [ebx+0x34], edi
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFD
        pop ebx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x100054a0)
    }
}

#undef public_100054d5
#undef public_100054de
#undef public_10005500
#undef public_10005505
#undef public_10005525
#undef public_10005550
#undef public_10005587
#undef public_100055a5
#undef public_100055c5
#undef public_100055e7
#undef public_10005616
#undef public_10005620
#undef public_10005643
#undef public_10005680
#undef public_10005692
#undef public_100056a2
#undef public_100056b1
#undef public_100056c1
#undef public_100056d0
#undef public_100056e0
#undef public_100056ef
#undef public_10005700
#undef public_10005715
#undef public_1000572d
#undef public_10005768
#undef public_10005779
#undef public_10005796
#undef public_100057d4
#undef public_100057df
#undef public_100057f7
