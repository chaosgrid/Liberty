#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f38b50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f38b71 _public_6f38b71
#define public_6f38b92 _public_6f38b92
#define public_6f38b9a _public_6f38b9a
#define public_6f38ba4 _public_6f38ba4
#define public_6f38bac _public_6f38bac
#define public_6f38bb7 _public_6f38bb7
#define public_6f38bc5 _public_6f38bc5
#define public_6f38bdb _public_6f38bdb
#define public_6f38bf0 _public_6f38bf0
#define public_6f38bf8 _public_6f38bf8
#define public_6f38c00 _public_6f38c00
#define public_6f38c08 _public_6f38c08
#define public_6f38c10 _public_6f38c10
#define public_6f38c1c _public_6f38c1c
#define public_6f38c24 _public_6f38c24
#define public_6f38c30 _public_6f38c30
#define public_6f38c3e _public_6f38c3e
#define public_6f38c50 _public_6f38c50
#define public_6f38c64 _public_6f38c64
#define public_6f38c6f _public_6f38c6f
#define public_6f38c77 _public_6f38c77
#define public_6f38c8c _public_6f38c8c
#define public_6f38ca2 _public_6f38ca2
#define public_6f38cca _public_6f38cca
#define public_6f38cec _public_6f38cec

PROC_DECLARE(0x6f38b50, internal_6f38b50, public_6f38b50);
extern "C" NAKED register_t __cdecl internal_6f38b50()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        cmp eax, dword ptr ss : [esp+0xC]
        je public_6f38cec
        mov ecx, dword ptr ss : [esp+0x10]
        push ebx
        push ebp
        push esi
        lea esi, ds:[eax+8]
        push edi
        lea ebx, ds:[ecx+4]
        mov dword ptr ss : [esp+0x10], esi
        public_6f38b71 : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [edx]
        lea edx, ds:[esi-4]
        cmp edx, ebx
        mov dword ptr ds : [eax], ecx
        lea ebp, ds:[esi-4]
        je public_6f38cca
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_6f38b92
        xor edi, edi
        jmp public_6f38b9a
        public_6f38b92 : nop
        mov edi, dword ptr ds : [ebx+8]
        sub edi, eax
        sar edi, 2
        public_6f38b9a : nop
        mov edx, dword ptr ds : [esi]
        test edx, edx
        jne public_6f38ba4
        xor ecx, ecx
        jmp public_6f38bac
        public_6f38ba4 : nop
        mov ecx, dword ptr ds : [esi+4]
        sub ecx, edx
        sar ecx, 2
        public_6f38bac : nop
        cmp edi, ecx
        ja public_6f38bf0
        mov ecx, dword ptr ds : [ebx+8]
        cmp eax, ecx
        je public_6f38bc5
        public_6f38bb7 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], edi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_6f38bb7
        public_6f38bc5 : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        jne public_6f38bdb
        mov ecx, dword ptr ds : [esi]
        xor eax, eax
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ds : [esi+4], edx
        jmp public_6f38cca
        public_6f38bdb : nop
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ecx
        mov ecx, dword ptr ds : [esi]
        sar eax, 2
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ds : [esi+4], edx
        jmp public_6f38cca
        public_6f38bf0 : nop
        test eax, eax
        jne public_6f38bf8
        xor edi, edi
        jmp public_6f38c00
        public_6f38bf8 : nop
        mov edi, dword ptr ds : [ebx+8]
        sub edi, eax
        sar edi, 2
        public_6f38c00 : nop
        test edx, edx
        jne public_6f38c08
        xor ecx, ecx
        jmp public_6f38c10
        public_6f38c08 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, edx
        sar ecx, 2
        public_6f38c10 : nop
        cmp edi, ecx
        ja public_6f38c8c
        test edx, edx
        jne public_6f38c1c
        xor ecx, ecx
        jmp public_6f38c24
        public_6f38c1c : nop
        mov ecx, dword ptr ds : [esi+4]
        sub ecx, edx
        sar ecx, 2
        public_6f38c24 : nop
        lea ecx, ds:[eax+ecx*4]
        cmp eax, ecx
        je public_6f38c3e
        nop 
        lea esp, ss:[esp]
        public_6f38c30 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], edi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_6f38c30
        public_6f38c3e : nop
        mov ebp, dword ptr ds : [ebx+8]
        cmp ecx, ebp
        mov edi, dword ptr ds : [esi+4]
        lea eax, ds:[esi-4]
        mov esi, ecx
        je public_6f38c64
        lea ecx, ds:[ecx]
        public_6f38c50 : nop
        push esi
        push edi
        call public_6eb6740
        add esi, 4
        add esp, 8
        add edi, 4
        cmp esi, ebp
        jne public_6f38c50
        public_6f38c64 : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_6f38c6f
        xor ecx, ecx
        jmp public_6f38c77
        public_6f38c6f : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        sar ecx, 2
        public_6f38c77 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ss : [esp+0x10]
        add eax, 0xFFFFFFFC
        lea ecx, ds:[edx+ecx*4]
        mov dword ptr ds : [eax+8], ecx
        jmp public_6f38cca
        public_6f38c8c : nop
        push edx
        call public_6fa8fe0
        add esp, 4
        mov ecx, ebx
        call public_6fa3db0
        test eax, eax
        jge public_6f38ca2
        xor eax, eax
        public_6f38ca2 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+4]
        push eax
        push ecx
        push edx
        mov ecx, ebp
        call public_6eed270
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        public_6f38cca : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        add eax, 0x14
        add esi, 0x14
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f38b71
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6f38cec : nop
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f38b50)
    }
}

#undef public_6f38b71
#undef public_6f38b92
#undef public_6f38b9a
#undef public_6f38ba4
#undef public_6f38bac
#undef public_6f38bb7
#undef public_6f38bc5
#undef public_6f38bdb
#undef public_6f38bf0
#undef public_6f38bf8
#undef public_6f38c00
#undef public_6f38c08
#undef public_6f38c10
#undef public_6f38c1c
#undef public_6f38c24
#undef public_6f38c30
#undef public_6f38c3e
#undef public_6f38c50
#undef public_6f38c64
#undef public_6f38c6f
#undef public_6f38c77
#undef public_6f38c8c
#undef public_6f38ca2
#undef public_6f38cca
#undef public_6f38cec
