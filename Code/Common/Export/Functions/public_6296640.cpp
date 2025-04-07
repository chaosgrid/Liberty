#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6296640);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6296698 _public_6296698
#define public_629669a _public_629669a
#define public_62966a2 _public_62966a2
#define public_62966b7 _public_62966b7
#define public_62966c4 _public_62966c4
#define public_62966e1 _public_62966e1
#define public_62966f8 _public_62966f8
#define public_6296702 _public_6296702
#define public_6296710 _public_6296710
#define public_6296727 _public_6296727
#define public_629672d _public_629672d
#define public_6296750 _public_6296750
#define public_6296767 _public_6296767
#define public_6296771 _public_6296771
#define public_62967ad _public_62967ad
#define public_62967dc _public_62967dc
#define public_6296813 _public_6296813
#define public_629682a _public_629682a
#define public_6296834 _public_6296834
#define public_6296858 _public_6296858
#define public_629686b _public_629686b
#define public_6296871 _public_6296871
#define public_6296880 _public_6296880
#define public_6296896 _public_6296896
#define public_62968ac _public_62968ac
#define public_62968c5 _public_62968c5
#define public_62968dc _public_62968dc
#define public_62968e6 _public_62968e6
#define public_62968f1 _public_62968f1
#define public_629690e _public_629690e
#define public_6296920 _public_6296920
#define public_629693a _public_629693a
#define public_629693d _public_629693d

PROC_DECLARE(0x6296640, internal_6296640, public_6296640);
extern "C" NAKED register_t __cdecl internal_6296640()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, ebx
        mov eax, 0x88888889
        imul ecx
        add edx, ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, esi
        mov dword ptr ss : [esp+0x10], edi
        jae public_62967dc
        mov ebp, dword ptr ds : [edi+4]
        test ebp, ebp
        je public_6296698
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x88888889
        imul ecx
        add edx, ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp esi, edx
        mov ecx, edx
        jb public_629669a
        public_6296698 : nop
        mov ecx, esi
        public_629669a : nop
        test ebp, ebp
        jne public_62966a2
        xor edx, edx
        jmp public_62966b7
        public_62966a2 : nop
        sub ebx, ebp
        mov eax, 0x88888889
        imul ebx
        add edx, ebx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_62966b7 : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_62966c4
        xor eax, eax
        public_62966c4 : nop
        imul eax, 0x3C
        push eax
        call public_6391d9c
        mov ebx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x1C], eax
        mov edx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ebx
        je public_6296702
        public_62966e1 : nop
        test edx, edx
        je public_62966f8
        mov ecx, 0xF
        mov esi, eax
        mov edi, edx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_62966f8 : nop
        add eax, 0x3C
        add edx, 0x3C
        cmp eax, ebx
        jne public_62966e1
        public_6296702 : nop
        test esi, esi
        mov eax, edx
        jbe public_629672d
        mov ebp, dword ptr ss : [esp+0x28]
        mov ebx, esi
        mov edi, edi
        public_6296710 : nop
        test eax, eax
        je public_6296727
        mov ecx, 0xF
        mov esi, ebp
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6296727 : nop
        add eax, 0x3C
        dec ebx
        jne public_6296710
        public_629672d : nop
        mov ebp, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, esi
        imul ecx, 0x3C
        cmp eax, ebp
        lea ebx, ds:[ecx+edx]
        je public_6296771
        mov eax, ebx
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        sub eax, edx
        add eax, ecx
        lea esp, ss:[esp]
        public_6296750 : nop
        test ebx, ebx
        je public_6296767
        mov ecx, 0xF
        mov esi, eax
        mov edi, ebx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6296767 : nop
        add eax, 0x3C
        add ebx, 0x3C
        cmp eax, ebp
        jne public_6296750
        public_6296771 : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x1C]
        imul eax, 0x3C
        add eax, ebx
        mov dword ptr ds : [edi+0xC], eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        test eax, eax
        jne public_62967ad
        xor edx, edx
        mov edx, esi
        imul edx, 0x3C
        add edx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_62967ad : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0x88888889
        imul ecx
        add edx, ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add edx, esi
        imul edx, 0x3C
        add edx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_62967dc : nop
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x88888889
        imul ecx
        add edx, ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edx, esi
        jae public_62968ac
        mov ecx, esi
        imul ecx, 0x3C
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x20], ecx
        lea eax, ds:[ecx+ebp]
        je public_6296834
        mov edx, eax
        sub edx, ecx
        public_6296813 : nop
        test eax, eax
        je public_629682a
        mov ecx, 0xF
        mov esi, edx
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_629682a : nop
        add edx, 0x3C
        add eax, 0x3C
        cmp edx, ebx
        jne public_6296813
        public_6296834 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x88888889
        imul ecx
        add edx, ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        sub esi, edx
        mov edx, dword ptr ss : [esp+0x28]
        je public_6296871
        mov eax, esi
        public_6296858 : nop
        test ebx, ebx
        je public_629686b
        mov ecx, 0xF
        mov esi, edx
        mov edi, ebx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        public_629686b : nop
        add ebx, 0x3C
        dec eax
        jne public_6296858
        public_6296871 : nop
        mov ebx, dword ptr ds : [edi+8]
        cmp ebp, ebx
        mov eax, ebp
        je public_6296896
        lea ebx, ds:[ebx]
        public_6296880 : nop
        mov edi, eax
        add eax, 0x3C
        cmp eax, ebx
        mov ecx, 0xF
        mov esi, edx
        rep movsd
        jne public_6296880
        mov edi, dword ptr ss : [esp+0x10]
        public_6296896 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ss : [esp+0x20]
        add eax, ecx
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_62968ac : nop
        test esi, esi
        jbe public_629693d
        imul esi, 0x3C
        mov eax, ebx
        sub eax, esi
        cmp eax, ebx
        mov edx, ebx
        mov dword ptr ss : [esp+0x20], esi
        je public_62968e6
        public_62968c5 : nop
        test edx, edx
        je public_62968dc
        mov ecx, 0xF
        mov esi, eax
        mov edi, edx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x20]
        public_62968dc : nop
        add eax, 0x3C
        add edx, 0x3C
        cmp eax, ebx
        jne public_62968c5
        public_62968e6 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov eax, ebx
        sub eax, esi
        cmp ebp, eax
        je public_629690e
        public_62968f1 : nop
        sub eax, 0x3C
        sub ebx, 0x3C
        cmp eax, ebp
        mov ecx, 0xF
        mov esi, eax
        mov edi, ebx
        rep movsd
        jne public_62968f1
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x20]
        public_629690e : nop
        lea eax, ds:[esi+ebp]
        cmp ebp, eax
        je public_629693a
        mov edx, dword ptr ss : [esp+0x28]
        lea esp, ss:[esp]
        public_6296920 : nop
        mov edi, ebp
        add ebp, 0x3C
        cmp ebp, eax
        mov ecx, 0xF
        mov esi, edx
        rep movsd
        jne public_6296920
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x20]
        public_629693a : nop
        add dword ptr ds : [edi+8], esi
        public_629693d : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6296640)
    }
}

#undef public_6296698
#undef public_629669a
#undef public_62966a2
#undef public_62966b7
#undef public_62966c4
#undef public_62966e1
#undef public_62966f8
#undef public_6296702
#undef public_6296710
#undef public_6296727
#undef public_629672d
#undef public_6296750
#undef public_6296767
#undef public_6296771
#undef public_62967ad
#undef public_62967dc
#undef public_6296813
#undef public_629682a
#undef public_6296834
#undef public_6296858
#undef public_629686b
#undef public_6296871
#undef public_6296880
#undef public_6296896
#undef public_62968ac
#undef public_62968c5
#undef public_62968dc
#undef public_62968e6
#undef public_62968f1
#undef public_629690e
#undef public_6296920
#undef public_629693a
#undef public_629693d
