#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62695c0);
CLANG_FORWARD_PROC_SYMBOL(public_626a570);
CLANG_FORWARD_PROC_SYMBOL(public_626a5b0);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62693b2 _public_62693b2
#define public_62693ba _public_62693ba
#define public_62693ce _public_62693ce
#define public_62693d6 _public_62693d6
#define public_62693fe _public_62693fe
#define public_6269402 _public_6269402
#define public_6269415 _public_6269415
#define public_626949f _public_626949f
#define public_62694e1 _public_62694e1
#define public_62694f9 _public_62694f9
#define public_6269509 _public_6269509
#define public_6269530 _public_6269530
#define public_6269549 _public_6269549
#define public_6269554 _public_6269554
#define public_626956a _public_626956a
#define public_626957a _public_626957a
#define public_62695a0 _public_62695a0
#define public_62695b5 _public_62695b5
#define public_62695b8 _public_62695b8

PROC_DECLARE(0x62693a0, internal_62693a0, public_62693a0);
extern "C" NAKED register_t __cdecl internal_62693a0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        push esi
        push edi
        jne public_62693b2
        xor eax, eax
        jmp public_62693ba
        public_62693b2 : nop
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ecx
        sar eax, 5
        public_62693ba : nop
        mov esi, dword ptr ss : [esp+0x18]
        cmp eax, esi
        jae public_626957a
        test ecx, ecx
        jne public_62693ce
        xor edx, edx
        jmp public_62693d6
        public_62693ce : nop
        mov edx, dword ptr ds : [ebx+8]
        sub edx, ecx
        sar edx, 5
        public_62693d6 : nop
        mov eax, dword ptr ds : [ebx+8]
        sub esi, edx
        mov edx, dword ptr ds : [ebx+0xC]
        sub edx, eax
        sar edx, 5
        cmp edx, esi
        mov ebp, eax
        jae public_626949f
        test ecx, ecx
        je public_62693fe
        sub eax, ecx
        sar eax, 5
        cmp esi, eax
        mov dword ptr ss : [esp+0x18], eax
        jb public_6269402
        public_62693fe : nop
        mov dword ptr ss : [esp+0x18], esi
        public_6269402 : nop
        mov ecx, ebx
        call public_62695c0
        mov edi, eax
        add edi, dword ptr ss : [esp+0x18]
        mov eax, edi
        jns public_6269415
        xor eax, eax
        public_6269415 : nop
        shl eax, 5
        push eax
        call public_6391d9c
        add esp, 4
        push eax
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [ebx+4]
        push ebp
        push eax
        mov ecx, ebx
        call public_626a570
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        push esi
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x24], eax
        call public_626a5b0
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ebx+8]
        mov edx, esi
        shl edx, 5
        add edx, ecx
        push edx
        push eax
        push ebp
        mov ecx, ebx
        call public_626a570
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+4]
        push ecx
        push edx
        mov ecx, ebx
        call public_628f050
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6391d5a
        mov ebp, dword ptr ss : [esp+0x14]
        shl edi, 5
        add edi, ebp
        add esp, 4
        mov ecx, ebx
        mov dword ptr ds : [ebx+0xC], edi
        call public_62695c0
        add eax, esi
        pop edi
        shl eax, 5
        pop esi
        add eax, ebp
        mov dword ptr ds : [ebx+4], ebp
        pop ebp
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        pop ecx
        ret 8
        public_626949f : nop
        mov ecx, eax
        sub ecx, ebp
        sar ecx, 5
        cmp ecx, esi
        jae public_6269509
        mov edi, esi
        shl edi, 5
        lea edx, ds:[edi+ebp]
        push edx
        push eax
        push ebp
        mov ecx, ebx
        mov dword ptr ss : [esp+0x24], edi
        call public_626a570
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, eax
        sub edx, ebp
        push ecx
        sar edx, 5
        sub esi, edx
        push esi
        push eax
        mov ecx, ebx
        call public_626a5b0
        mov eax, dword ptr ds : [ebx+8]
        cmp ebp, eax
        je public_62694f9
        public_62694e1 : nop
        mov esi, dword ptr ss : [esp+0x1C]
        mov edi, ebp
        add ebp, 0x20
        cmp ebp, eax
        mov ecx, 8
        rep movsd
        jne public_62694e1
        mov edi, dword ptr ss : [esp+0x18]
        public_62694f9 : nop
        mov eax, dword ptr ds : [ebx+8]
        add eax, edi
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        pop ecx
        ret 8
        public_6269509 : nop
        test esi, esi
        jbe public_62695b8
        push eax
        shl esi, 5
        push eax
        sub eax, esi
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x24], esi
        call public_626a570
        mov edx, dword ptr ds : [ebx+8]
        mov eax, edx
        sub eax, esi
        cmp ebp, eax
        je public_6269549
        nop 
        public_6269530 : nop
        sub eax, 0x20
        sub edx, 0x20
        cmp eax, ebp
        mov ecx, 8
        mov esi, eax
        mov edi, edx
        rep movsd
        jne public_6269530
        mov esi, dword ptr ss : [esp+0x18]
        public_6269549 : nop
        lea eax, ds:[esi+ebp]
        cmp ebp, eax
        je public_626956a
        mov edx, dword ptr ss : [esp+0x1C]
        public_6269554 : nop
        mov edi, ebp
        add ebp, 0x20
        cmp ebp, eax
        mov ecx, 8
        mov esi, edx
        rep movsd
        jne public_6269554
        mov esi, dword ptr ss : [esp+0x18]
        public_626956a : nop
        mov eax, dword ptr ds : [ebx+8]
        pop edi
        add eax, esi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        pop ecx
        ret 8
        public_626957a : nop
        test ecx, ecx
        je public_62695b8
        mov edx, dword ptr ds : [ebx+8]
        mov eax, edx
        sub eax, ecx
        sar eax, 5
        cmp esi, eax
        jae public_62695b8
        shl esi, 5
        add esi, ecx
        mov eax, edx
        cmp eax, edx
        mov ebp, esi
        je public_62695b5
        lea esp, ss:[esp]
        public_62695a0 : nop
        mov esi, eax
        mov edi, ebp
        add eax, 0x20
        mov ecx, 8
        add ebp, 0x20
        cmp eax, edx
        rep movsd
        jne public_62695a0
        public_62695b5 : nop
        mov dword ptr ds : [ebx+8], ebp
        public_62695b8 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x62693a0)
    }
}

#undef public_62693b2
#undef public_62693ba
#undef public_62693ce
#undef public_62693d6
#undef public_62693fe
#undef public_6269402
#undef public_6269415
#undef public_626949f
#undef public_62694e1
#undef public_62694f9
#undef public_6269509
#undef public_6269530
#undef public_6269549
#undef public_6269554
#undef public_626956a
#undef public_626957a
#undef public_62695a0
#undef public_62695b5
#undef public_62695b8
