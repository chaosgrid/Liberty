#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58e360);
CLANG_FORWARD_PROC_SYMBOL(public_58fd10);
CLANG_FORWARD_PROC_SYMBOL(public_5909c0);
CLANG_FORWARD_PROC_SYMBOL(public_591150);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_58fd66 _public_58fd66
#define public_58fd68 _public_58fd68
#define public_58fd70 _public_58fd70
#define public_58fd85 _public_58fd85
#define public_58fd92 _public_58fd92
#define public_58fdb3 _public_58fdb3
#define public_58fdcb _public_58fdcb
#define public_58fdd5 _public_58fdd5
#define public_58fdf5 _public_58fdf5
#define public_58fe0e _public_58fe0e
#define public_58fe12 _public_58fe12
#define public_58fe25 _public_58fe25
#define public_58fe30 _public_58fe30
#define public_58fe3e _public_58fe3e
#define public_58fe7a _public_58fe7a
#define public_58fea9 _public_58fea9
#define public_58fee5 _public_58fee5
#define public_58fef0 _public_58fef0
#define public_58ff07 _public_58ff07
#define public_58ff30 _public_58ff30
#define public_58ff40 _public_58ff40
#define public_58ff50 _public_58ff50
#define public_58ff74 _public_58ff74
#define public_58ff8a _public_58ff8a
#define public_58ffa1 _public_58ffa1
#define public_58ffc5 _public_58ffc5
#define public_58ffd0 _public_58ffd0
#define public_58fff9 _public_58fff9
#define public_590006 _public_590006
#define public_59002d _public_59002d
#define public_590030 _public_590030

PROC_DECLARE(0x58fd10, internal_58fd10, public_58fd10);
extern "C" NAKED register_t __cdecl internal_58fd10()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        push edi
        mov edi, dword ptr ds : [ecx+0xC]
        sub edi, esi
        mov eax, 0x92492493
        imul edi
        add edx, edi
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        mov dword ptr ss : [esp+0x10], ecx
        jae public_58fea9
        mov edi, dword ptr ds : [ecx+4]
        test edi, edi
        je public_58fd66
        mov ecx, esi
        sub ecx, edi
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp ebp, edx
        mov ecx, edx
        jb public_58fd68
        public_58fd66 : nop
        mov ecx, ebp
        public_58fd68 : nop
        test edi, edi
        jne public_58fd70
        xor edx, edx
        jmp public_58fd85
        public_58fd70 : nop
        sub esi, edi
        mov eax, 0x92492493
        imul esi
        add edx, esi
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_58fd85 : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_58fd92
        xor eax, eax
        public_58fd92 : nop
        imul eax, 0x1C
        push eax
        call public_5b7e84
        mov edi, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_58fdcb
        public_58fdb3 : nop
        push esi
        push ebx
        call public_5909c0
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x1C
        add esp, 8
        add ebx, 0x1C
        cmp esi, eax
        jne public_58fdb3
        public_58fdcb : nop
        test ebp, ebp
        mov esi, ebx
        jbe public_58fdf5
        mov dword ptr ss : [esp+0x24], ebp
        public_58fdd5 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        push esi
        call public_5909c0
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x1C
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_58fdd5
        mov eax, dword ptr ss : [esp+0x20]
        public_58fdf5 : nop
        mov edx, ebp
        imul edx, 0x1C
        lea ecx, ds:[edx+ebx]
        mov ebx, dword ptr ds : [edi+8]
        cmp eax, ebx
        mov esi, eax
        je public_58fe25
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_58fe12
        public_58fe0e : nop
        mov ecx, dword ptr ss : [esp+0x20]
        public_58fe12 : nop
        add ecx, esi
        push esi
        push ecx
        call public_5909c0
        add esi, 0x1C
        add esp, 8
        cmp esi, ebx
        jne public_58fe0e
        public_58fe25 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        je public_58fe3e
        nop 
        public_58fe30 : nop
        mov ecx, esi
        call public_58e360
        add esi, 0x1C
        cmp esi, ebx
        jne public_58fe30
        public_58fe3e : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x1C]
        imul eax, 0x1C
        add eax, esi
        mov dword ptr ds : [edi+0xC], eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        test eax, eax
        jne public_58fe7a
        xor edx, edx
        mov edx, ebp
        imul edx, 0x1C
        add edx, esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_58fe7a : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        add edx, ebp
        imul edx, 0x1C
        add edx, esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_58fea9 : nop
        mov edi, dword ptr ss : [esp+0x20]
        mov ebx, esi
        sub ebx, edi
        mov eax, 0x92492493
        imul ebx
        add edx, ebx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        jae public_58ff8a
        mov eax, ebp
        imul eax, 0x1C
        mov dword ptr ss : [esp+0x24], eax
        add eax, edi
        cmp edi, esi
        mov ebx, edi
        je public_58ff07
        sub eax, edi
        mov dword ptr ss : [esp+0x20], eax
        jmp public_58fef0
        public_58fee5 : nop
        mov eax, dword ptr ss : [esp+0x20]
        lea esp, ss:[esp]
        public_58fef0 : nop
        add eax, ebx
        push ebx
        push eax
        call public_5909c0
        add ebx, 0x1C
        add esp, 8
        cmp ebx, esi
        jne public_58fee5
        mov ecx, dword ptr ss : [esp+0x10]
        public_58ff07 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov ebx, dword ptr ss : [esp+0x28]
        mov ecx, esi
        sub ecx, edi
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub ebp, edx
        je public_58ff40
        lea esp, ss:[esp]
        public_58ff30 : nop
        push ebx
        push esi
        call public_5909c0
        add esp, 8
        add esi, 0x1C
        dec ebp
        jne public_58ff30
        public_58ff40 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ds : [eax+8]
        cmp edi, ebp
        mov esi, edi
        je public_58ff74
        lea edi, ds:[ebx+0xC]
        public_58ff50 : nop
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_5c6c68]
        push edi
        lea ecx, ds:[esi+0xC]
        call dword ptr ds : [public_5c6c68]
        mov dl, byte ptr ds : [ebx+0x18]
        mov byte ptr ds : [esi+0x18], dl
        add esi, 0x1C
        cmp esi, ebp
        jne public_58ff50
        mov eax, dword ptr ss : [esp+0x10]
        public_58ff74 : nop
        mov edx, dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        add edx, ecx
        pop ebp
        mov dword ptr ds : [eax+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_58ff8a : nop
        test ebp, ebp
        jbe public_590030
        imul ebp, 0x1C
        mov ebx, esi
        sub ebx, ebp
        cmp ebx, esi
        mov dword ptr ss : [esp+0x20], esi
        je public_58ffc5
        public_58ffa1 : nop
        mov edx, dword ptr ss : [esp+0x20]
        push ebx
        push edx
        call public_5909c0
        mov edx, dword ptr ss : [esp+0x28]
        add edx, 0x1C
        add ebx, 0x1C
        add esp, 8
        cmp ebx, esi
        mov dword ptr ss : [esp+0x20], edx
        jne public_58ffa1
        mov ecx, dword ptr ss : [esp+0x10]
        public_58ffc5 : nop
        mov ebx, dword ptr ds : [ecx+8]
        mov esi, ebx
        sub esi, ebp
        cmp edi, esi
        je public_58fff9
        public_58ffd0 : nop
        sub esi, 0x1C
        sub ebx, 0x1C
        push esi
        mov ecx, ebx
        call public_591150
        lea eax, ds:[esi+0xC]
        push eax
        lea ecx, ds:[ebx+0xC]
        call dword ptr ds : [public_5c6c68]
        cmp esi, edi
        mov cl, byte ptr ds : [esi+0x18]
        mov byte ptr ds : [ebx+0x18], cl
        jne public_58ffd0
        mov ecx, dword ptr ss : [esp+0x10]
        public_58fff9 : nop
        lea ebx, ds:[edi+ebp]
        cmp edi, ebx
        mov esi, edi
        je public_59002d
        mov edi, dword ptr ss : [esp+0x28]
        public_590006 : nop
        push edi
        mov ecx, esi
        call dword ptr ds : [public_5c6c68]
        lea eax, ds:[edi+0xC]
        push eax
        lea ecx, ds:[esi+0xC]
        call dword ptr ds : [public_5c6c68]
        mov dl, byte ptr ds : [edi+0x18]
        mov byte ptr ds : [esi+0x18], dl
        add esi, 0x1C
        cmp esi, ebx
        jne public_590006
        mov ecx, dword ptr ss : [esp+0x10]
        public_59002d : nop
        add dword ptr ds : [ecx+8], ebp
        public_590030 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x58fd10)
    }
}

#undef public_58fd66
#undef public_58fd68
#undef public_58fd70
#undef public_58fd85
#undef public_58fd92
#undef public_58fdb3
#undef public_58fdcb
#undef public_58fdd5
#undef public_58fdf5
#undef public_58fe0e
#undef public_58fe12
#undef public_58fe25
#undef public_58fe30
#undef public_58fe3e
#undef public_58fe7a
#undef public_58fea9
#undef public_58fee5
#undef public_58fef0
#undef public_58ff07
#undef public_58ff30
#undef public_58ff40
#undef public_58ff50
#undef public_58ff74
#undef public_58ff8a
#undef public_58ffa1
#undef public_58ffc5
#undef public_58ffd0
#undef public_58fff9
#undef public_590006
#undef public_59002d
#undef public_590030
