#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ed140);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62ed194 _public_62ed194
#define public_62ed196 _public_62ed196
#define public_62ed19e _public_62ed19e
#define public_62ed1b1 _public_62ed1b1
#define public_62ed1be _public_62ed1be
#define public_62ed1e0 _public_62ed1e0
#define public_62ed1f7 _public_62ed1f7
#define public_62ed206 _public_62ed206
#define public_62ed212 _public_62ed212
#define public_62ed229 _public_62ed229
#define public_62ed231 _public_62ed231
#define public_62ed253 _public_62ed253
#define public_62ed26a _public_62ed26a
#define public_62ed279 _public_62ed279
#define public_62ed2a3 _public_62ed2a3
#define public_62ed2b9 _public_62ed2b9
#define public_62ed2d3 _public_62ed2d3
#define public_62ed310 _public_62ed310
#define public_62ed327 _public_62ed327
#define public_62ed336 _public_62ed336
#define public_62ed358 _public_62ed358
#define public_62ed36b _public_62ed36b
#define public_62ed374 _public_62ed374
#define public_62ed380 _public_62ed380
#define public_62ed398 _public_62ed398
#define public_62ed3ae _public_62ed3ae
#define public_62ed3d0 _public_62ed3d0
#define public_62ed3e7 _public_62ed3e7
#define public_62ed3f6 _public_62ed3f6
#define public_62ed401 _public_62ed401
#define public_62ed423 _public_62ed423
#define public_62ed430 _public_62ed430
#define public_62ed44d _public_62ed44d
#define public_62ed450 _public_62ed450

PROC_DECLARE(0x62ed140, internal_62ed140, public_62ed140);
extern "C" NAKED register_t __cdecl internal_62ed140()
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
        mov eax, 0x78787879
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, esi
        mov dword ptr ss : [esp+0x10], edi
        jae public_62ed2d3
        mov ebp, dword ptr ds : [edi+4]
        test ebp, ebp
        je public_62ed194
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x78787879
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp esi, edx
        mov ecx, edx
        jb public_62ed196
        public_62ed194 : nop
        mov ecx, esi
        public_62ed196 : nop
        test ebp, ebp
        jne public_62ed19e
        xor edx, edx
        jmp public_62ed1b1
        public_62ed19e : nop
        sub ebx, ebp
        mov eax, 0x78787879
        imul ebx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_62ed1b1 : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_62ed1be
        xor eax, eax
        public_62ed1be : nop
        imul eax, 0x88
        push eax
        call public_6391d9c
        mov ebx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x1C], eax
        mov edx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ebx
        je public_62ed206
        mov edi, edi
        public_62ed1e0 : nop
        test edx, edx
        je public_62ed1f7
        mov ecx, 0x22
        mov esi, eax
        mov edi, edx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_62ed1f7 : nop
        add eax, 0x88
        add edx, 0x88
        cmp eax, ebx
        jne public_62ed1e0
        public_62ed206 : nop
        test esi, esi
        mov eax, edx
        jbe public_62ed231
        mov ebp, dword ptr ss : [esp+0x28]
        mov ebx, esi
        public_62ed212 : nop
        test eax, eax
        je public_62ed229
        mov ecx, 0x22
        mov esi, ebp
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_62ed229 : nop
        add eax, 0x88
        dec ebx
        jne public_62ed212
        public_62ed231 : nop
        mov ebp, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, esi
        imul ecx, 0x88
        cmp eax, ebp
        lea ebx, ds:[ecx+edx]
        je public_62ed279
        mov eax, ebx
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        sub eax, edx
        add eax, ecx
        public_62ed253 : nop
        test ebx, ebx
        je public_62ed26a
        mov ecx, 0x22
        mov esi, eax
        mov edi, ebx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_62ed26a : nop
        add eax, 0x88
        add ebx, 0x88
        cmp eax, ebp
        jne public_62ed253
        public_62ed279 : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x1C]
        imul eax, 0x88
        add eax, ebx
        mov dword ptr ds : [edi+0xC], eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        test eax, eax
        jne public_62ed2a3
        xor edx, edx
        jmp public_62ed2b9
        public_62ed2a3 : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0x78787879
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_62ed2b9 : nop
        add edx, esi
        imul edx, 0x88
        add edx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_62ed2d3 : nop
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x78787879
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edx, esi
        jae public_62ed3ae
        mov ecx, esi
        imul ecx, 0x88
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x20], ecx
        lea eax, ds:[ecx+ebp]
        je public_62ed336
        mov edx, eax
        sub edx, ecx
        nop 
        lea esp, ss:[esp]
        public_62ed310 : nop
        test eax, eax
        je public_62ed327
        mov ecx, 0x22
        mov esi, edx
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_62ed327 : nop
        add edx, 0x88
        add eax, 0x88
        cmp edx, ebx
        jne public_62ed310
        public_62ed336 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x78787879
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        sub esi, edx
        mov edx, dword ptr ss : [esp+0x28]
        je public_62ed374
        mov eax, esi
        public_62ed358 : nop
        test ebx, ebx
        je public_62ed36b
        mov ecx, 0x22
        mov esi, edx
        mov edi, ebx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        public_62ed36b : nop
        add ebx, 0x88
        dec eax
        jne public_62ed358
        public_62ed374 : nop
        mov ebx, dword ptr ds : [edi+8]
        cmp ebp, ebx
        mov eax, ebp
        je public_62ed398
        lea ecx, ds:[ecx]
        public_62ed380 : nop
        mov edi, eax
        add eax, 0x88
        cmp eax, ebx
        mov ecx, 0x22
        mov esi, edx
        rep movsd
        jne public_62ed380
        mov edi, dword ptr ss : [esp+0x10]
        public_62ed398 : nop
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
        public_62ed3ae : nop
        test esi, esi
        jbe public_62ed450
        imul esi, 0x88
        mov eax, ebx
        sub eax, esi
        cmp eax, ebx
        mov edx, ebx
        mov dword ptr ss : [esp+0x20], esi
        je public_62ed3f6
        lea ebx, ds:[ebx]
        public_62ed3d0 : nop
        test edx, edx
        je public_62ed3e7
        mov ecx, 0x22
        mov esi, eax
        mov edi, edx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x20]
        public_62ed3e7 : nop
        add eax, 0x88
        add edx, 0x88
        cmp eax, ebx
        jne public_62ed3d0
        public_62ed3f6 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov eax, ebx
        sub eax, esi
        cmp ebp, eax
        je public_62ed423
        public_62ed401 : nop
        sub eax, 0x88
        sub ebx, 0x88
        cmp eax, ebp
        mov ecx, 0x22
        mov esi, eax
        mov edi, ebx
        rep movsd
        jne public_62ed401
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x20]
        public_62ed423 : nop
        lea eax, ds:[esi+ebp]
        cmp ebp, eax
        je public_62ed44d
        mov edx, dword ptr ss : [esp+0x28]
        mov edi, edi
        public_62ed430 : nop
        mov edi, ebp
        add ebp, 0x88
        cmp ebp, eax
        mov ecx, 0x22
        mov esi, edx
        rep movsd
        jne public_62ed430
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x20]
        public_62ed44d : nop
        add dword ptr ds : [edi+8], esi
        public_62ed450 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x62ed140)
    }
}

#undef public_62ed194
#undef public_62ed196
#undef public_62ed19e
#undef public_62ed1b1
#undef public_62ed1be
#undef public_62ed1e0
#undef public_62ed1f7
#undef public_62ed206
#undef public_62ed212
#undef public_62ed229
#undef public_62ed231
#undef public_62ed253
#undef public_62ed26a
#undef public_62ed279
#undef public_62ed2a3
#undef public_62ed2b9
#undef public_62ed2d3
#undef public_62ed310
#undef public_62ed327
#undef public_62ed336
#undef public_62ed358
#undef public_62ed36b
#undef public_62ed374
#undef public_62ed380
#undef public_62ed398
#undef public_62ed3ae
#undef public_62ed3d0
#undef public_62ed3e7
#undef public_62ed3f6
#undef public_62ed401
#undef public_62ed423
#undef public_62ed430
#undef public_62ed44d
#undef public_62ed450
