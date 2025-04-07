#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f30960);
CLANG_FORWARD_PROC_SYMBOL(public_6f31000);
CLANG_FORWARD_PROC_SYMBOL(public_6f7db80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f7db98 _public_6f7db98
#define public_6f7dbab _public_6f7dbab
#define public_6f7dbc3 _public_6f7dbc3
#define public_6f7dbce _public_6f7dbce
#define public_6f7dbe4 _public_6f7dbe4
#define public_6f7dbf3 _public_6f7dbf3
#define public_6f7dc0c _public_6f7dc0c
#define public_6f7dc25 _public_6f7dc25
#define public_6f7dc4b _public_6f7dc4b
#define public_6f7dc53 _public_6f7dc53
#define public_6f7dc6b _public_6f7dc6b
#define public_6f7dc73 _public_6f7dc73
#define public_6f7dc89 _public_6f7dc89
#define public_6f7dc99 _public_6f7dc99
#define public_6f7dcaf _public_6f7dcaf
#define public_6f7dcc0 _public_6f7dcc0
#define public_6f7dcd5 _public_6f7dcd5
#define public_6f7dce5 _public_6f7dce5
#define public_6f7dcf9 _public_6f7dcf9
#define public_6f7dd04 _public_6f7dd04
#define public_6f7dd1a _public_6f7dd1a
#define public_6f7dd2b _public_6f7dd2b
#define public_6f7dd3f _public_6f7dd3f
#define public_6f7dd55 _public_6f7dd55
#define public_6f7dd5d _public_6f7dd5d
#define public_6f7dd82 _public_6f7dd82
#define public_6f7dd98 _public_6f7dd98

PROC_DECLARE(0x6f7db80, internal_6f7db80, public_6f7db80);
extern "C" NAKED register_t __cdecl internal_6f7db80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp esi, eax
        je public_6f7dd98
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push edi
        public_6f7db98 : nop
        cmp esi, ebp
        je public_6f7dd82
        mov edi, dword ptr ss : [ebp+4]
        test edi, edi
        jne public_6f7dbab
        xor ebx, ebx
        jmp public_6f7dbc3
        public_6f7dbab : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edi
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov ebx, edx
        public_6f7dbc3 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6f7dbce
        xor edx, edx
        jmp public_6f7dbe4
        public_6f7dbce : nop
        mov edx, dword ptr ds : [esi+8]
        sub edx, ecx
        mov eax, 0x78787879
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f7dbe4 : nop
        cmp ebx, edx
        ja public_6f7dc4b
        mov ebx, dword ptr ss : [ebp+8]
        mov eax, edi
        cmp eax, ebx
        mov edx, ecx
        je public_6f7dc0c
        public_6f7dbf3 : nop
        mov esi, eax
        mov edi, edx
        add eax, 0x44
        mov ecx, 0x11
        add edx, 0x44
        cmp eax, ebx
        rep movsd
        jne public_6f7dbf3
        mov esi, dword ptr ss : [esp+0x14]
        public_6f7dc0c : nop
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_6f7dc25
        mov eax, dword ptr ds : [esi+4]
        xor edx, edx
        imul edx, 0x44
        add edx, eax
        mov dword ptr ds : [esi+8], edx
        jmp public_6f7dd82
        public_6f7dc25 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, eax
        mov eax, 0x78787879
        imul ecx
        mov eax, dword ptr ds : [esi+4]
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        imul edx, 0x44
        add edx, eax
        mov dword ptr ds : [esi+8], edx
        jmp public_6f7dd82
        public_6f7dc4b : nop
        test edi, edi
        jne public_6f7dc53
        xor ebx, ebx
        jmp public_6f7dc6b
        public_6f7dc53 : nop
        mov edx, dword ptr ss : [ebp+8]
        sub edx, edi
        mov eax, 0x78787879
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov ebx, edx
        public_6f7dc6b : nop
        test ecx, ecx
        jne public_6f7dc73
        xor edx, edx
        jmp public_6f7dc89
        public_6f7dc73 : nop
        mov edx, dword ptr ds : [esi+0xC]
        sub edx, ecx
        mov eax, 0x78787879
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f7dc89 : nop
        cmp ebx, edx
        ja public_6f7dd2b
        test ecx, ecx
        jne public_6f7dc99
        xor edx, edx
        jmp public_6f7dcaf
        public_6f7dc99 : nop
        mov edx, dword ptr ds : [esi+8]
        sub edx, ecx
        mov eax, 0x78787879
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f7dcaf : nop
        imul edx, 0x44
        add edx, edi
        mov eax, edi
        cmp eax, edx
        mov ebx, ecx
        je public_6f7dcd5
        lea esp, ss:[esp]
        public_6f7dcc0 : nop
        mov esi, eax
        mov edi, ebx
        add eax, 0x44
        mov ecx, 0x11
        add ebx, 0x44
        cmp eax, edx
        rep movsd
        jne public_6f7dcc0
        public_6f7dcd5 : nop
        mov ebx, dword ptr ss : [ebp+8]
        cmp edx, ebx
        mov ecx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [ecx+8]
        mov esi, edx
        je public_6f7dcf9
        public_6f7dce5 : nop
        push esi
        push edi
        call public_6f31000
        add esi, 0x44
        add esp, 8
        add edi, 0x44
        cmp esi, ebx
        jne public_6f7dce5
        public_6f7dcf9 : nop
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_6f7dd04
        xor edx, edx
        jmp public_6f7dd1a
        public_6f7dd04 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, eax
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f7dd1a : nop
        mov eax, dword ptr ss : [esp+0x14]
        imul edx, 0x44
        add edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [eax+8], edx
        mov esi, eax
        jmp public_6f7dd82
        public_6f7dd2b : nop
        push ecx
        call public_6fa8fe0
        mov eax, dword ptr ss : [ebp+4]
        add esp, 4
        test eax, eax
        jne public_6f7dd3f
        xor edx, edx
        jmp public_6f7dd55
        public_6f7dd3f : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, eax
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6f7dd55 : nop
        test edx, edx
        mov eax, edx
        jge public_6f7dd5d
        xor eax, eax
        public_6f7dd5d : nop
        imul eax, 0x44
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp+4]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_6f30960
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        public_6f7dd82 : nop
        mov eax, dword ptr ss : [esp+0x18]
        add esi, 0x10
        cmp esi, eax
        mov dword ptr ss : [esp+0x14], esi
        jne public_6f7db98
        pop edi
        pop ebp
        pop ebx
        public_6f7dd98 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f7db80)
    }
}

#undef public_6f7db98
#undef public_6f7dbab
#undef public_6f7dbc3
#undef public_6f7dbce
#undef public_6f7dbe4
#undef public_6f7dbf3
#undef public_6f7dc0c
#undef public_6f7dc25
#undef public_6f7dc4b
#undef public_6f7dc53
#undef public_6f7dc6b
#undef public_6f7dc73
#undef public_6f7dc89
#undef public_6f7dc99
#undef public_6f7dcaf
#undef public_6f7dcc0
#undef public_6f7dcd5
#undef public_6f7dce5
#undef public_6f7dcf9
#undef public_6f7dd04
#undef public_6f7dd1a
#undef public_6f7dd2b
#undef public_6f7dd3f
#undef public_6f7dd55
#undef public_6f7dd5d
#undef public_6f7dd82
#undef public_6f7dd98
