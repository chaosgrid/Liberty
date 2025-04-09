#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4771f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_477226 _public_477226
#define public_477228 _public_477228
#define public_477230 _public_477230
#define public_477235 _public_477235
#define public_477241 _public_477241
#define public_477260 _public_477260
#define public_477277 _public_477277
#define public_47728a _public_47728a
#define public_477296 _public_477296
#define public_4772ad _public_4772ad
#define public_4772b5 _public_4772b5
#define public_4772d4 _public_4772d4
#define public_4772eb _public_4772eb
#define public_4772fa _public_4772fa
#define public_477336 _public_477336
#define public_477355 _public_477355
#define public_477380 _public_477380
#define public_477397 _public_477397
#define public_4773a7 _public_4773a7
#define public_4773c0 _public_4773c0
#define public_4773d3 _public_4773d3
#define public_4773db _public_4773db
#define public_4773e4 _public_4773e4
#define public_4773fc _public_4773fc
#define public_477412 _public_477412
#define public_477430 _public_477430
#define public_477443 _public_477443
#define public_477457 _public_477457
#define public_477462 _public_477462
#define public_477480 _public_477480
#define public_477491 _public_477491
#define public_4774a9 _public_4774a9
#define public_4774b5 _public_4774b5

PROC_DECLARE(0x4771f0, internal_4771f0, public_4771f0);
extern "C" NAKED register_t __cdecl internal_4771f0()
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
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, eax
        sar ecx, 7
        cmp ecx, esi
        mov dword ptr ss : [esp+0x10], edi
        jae public_477355
        mov edx, dword ptr ds : [edi+4]
        test edx, edx
        je public_477226
        mov ecx, eax
        sub ecx, edx
        sar ecx, 7
        cmp esi, ecx
        jb public_477228
        public_477226 : nop
        mov ecx, esi
        public_477228 : nop
        test edx, edx
        jne public_477230
        xor eax, eax
        jmp public_477235
        public_477230 : nop
        sub eax, edx
        sar eax, 7
        public_477235 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_477241
        xor eax, eax
        public_477241 : nop
        shl eax, 7
        push eax
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x1C], eax
        mov edx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ecx
        je public_47728a
        mov edi, edi
        public_477260 : nop
        test edx, edx
        je public_477277
        mov ecx, 0x20
        mov esi, eax
        mov edi, edx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_477277 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        add eax, 0x80
        add edx, 0x80
        cmp eax, ecx
        jne public_477260
        public_47728a : nop
        test esi, esi
        mov eax, edx
        jbe public_4772b5
        mov ebp, dword ptr ss : [esp+0x28]
        mov ebx, esi
        public_477296 : nop
        test eax, eax
        je public_4772ad
        mov ecx, 0x20
        mov esi, ebp
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_4772ad : nop
        add eax, 0x80
        dec ebx
        jne public_477296
        public_4772b5 : nop
        mov ebp, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, esi
        shl ecx, 7
        cmp eax, ebp
        lea ebx, ds:[ecx+edx]
        je public_4772fa
        mov eax, ebx
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        sub eax, edx
        add eax, ecx
        public_4772d4 : nop
        test ebx, ebx
        je public_4772eb
        mov ecx, 0x20
        mov esi, eax
        mov edi, ebx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_4772eb : nop
        add eax, 0x80
        add ebx, 0x80
        cmp eax, ebp
        jne public_4772d4
        public_4772fa : nop
        mov edx, dword ptr ds : [edi+4]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [edi+4]
        shl eax, 7
        add eax, edx
        add esp, 4
        test ecx, ecx
        mov dword ptr ds : [edi+0xC], eax
        jne public_477336
        xor eax, eax
        mov eax, esi
        shl eax, 7
        add eax, edx
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_477336 : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 7
        add eax, esi
        shl eax, 7
        add eax, edx
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_477355 : nop
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, eax
        sub ecx, ebp
        sar ecx, 7
        cmp ecx, esi
        jae public_477412
        mov ecx, esi
        shl ecx, 7
        cmp ebp, eax
        mov dword ptr ss : [esp+0x20], ecx
        lea edx, ds:[ecx+ebp]
        je public_4773a7
        mov ebx, edx
        sub ebx, ecx
        lea esp, ss:[esp]
        public_477380 : nop
        test edx, edx
        je public_477397
        mov ecx, 0x20
        mov esi, ebx
        mov edi, edx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_477397 : nop
        add ebx, 0x80
        add edx, 0x80
        cmp ebx, eax
        jne public_477380
        public_4773a7 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ebx, dword ptr ss : [esp+0x28]
        mov edx, eax
        sub edx, ebp
        sar edx, 7
        sub esi, edx
        je public_4773db
        mov edx, esi
        nop 
        lea esp, ss:[esp]
        public_4773c0 : nop
        test eax, eax
        je public_4773d3
        mov ecx, 0x20
        mov esi, ebx
        mov edi, eax
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        public_4773d3 : nop
        add eax, 0x80
        dec edx
        jne public_4773c0
        public_4773db : nop
        mov edx, dword ptr ds : [edi+8]
        cmp ebp, edx
        mov eax, ebp
        je public_4773fc
        public_4773e4 : nop
        mov edi, eax
        add eax, 0x80
        cmp eax, edx
        mov ecx, 0x20
        mov esi, ebx
        rep movsd
        jne public_4773e4
        mov edi, dword ptr ss : [esp+0x10]
        public_4773fc : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x20]
        add ecx, eax
        mov dword ptr ds : [edi+8], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_477412 : nop
        test esi, esi
        jbe public_4774b5
        shl esi, 7
        mov edx, eax
        sub edx, esi
        cmp edx, eax
        mov ebx, eax
        mov dword ptr ss : [esp+0x20], esi
        je public_477457
        nop 
        lea esp, ss:[esp]
        public_477430 : nop
        test ebx, ebx
        je public_477443
        mov ecx, 0x20
        mov esi, edx
        mov edi, ebx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        public_477443 : nop
        add edx, 0x80
        add ebx, 0x80
        cmp edx, eax
        jne public_477430
        mov esi, dword ptr ss : [esp+0x20]
        public_477457 : nop
        mov edx, dword ptr ds : [edi+8]
        mov eax, edx
        sub eax, esi
        cmp ebp, eax
        je public_477480
        public_477462 : nop
        sub eax, 0x80
        sub edx, 0x80
        cmp eax, ebp
        mov ecx, 0x20
        mov esi, eax
        mov edi, edx
        rep movsd
        jne public_477462
        mov edi, dword ptr ss : [esp+0x10]
        public_477480 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        lea edx, ds:[ecx+ebp]
        cmp ebp, edx
        mov eax, ebp
        je public_4774a9
        mov ebx, dword ptr ss : [esp+0x28]
        public_477491 : nop
        mov edi, eax
        add eax, 0x80
        cmp eax, edx
        mov ecx, 0x20
        mov esi, ebx
        rep movsd
        jne public_477491
        mov edi, dword ptr ss : [esp+0x10]
        public_4774a9 : nop
        mov eax, dword ptr ds : [edi+8]
        mov edx, dword ptr ss : [esp+0x20]
        add eax, edx
        mov dword ptr ds : [edi+8], eax
        public_4774b5 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x4771f0)
    }
}

#undef public_477226
#undef public_477228
#undef public_477230
#undef public_477235
#undef public_477241
#undef public_477260
#undef public_477277
#undef public_47728a
#undef public_477296
#undef public_4772ad
#undef public_4772b5
#undef public_4772d4
#undef public_4772eb
#undef public_4772fa
#undef public_477336
#undef public_477355
#undef public_477380
#undef public_477397
#undef public_4773a7
#undef public_4773c0
#undef public_4773d3
#undef public_4773db
#undef public_4773e4
#undef public_4773fc
#undef public_477412
#undef public_477430
#undef public_477443
#undef public_477457
#undef public_477462
#undef public_477480
#undef public_477491
#undef public_4774a9
#undef public_4774b5
