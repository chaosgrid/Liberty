#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce46d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4b30);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4b90);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5750);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5d30);
CLANG_FORWARD_PROC_SYMBOL(public_6d581c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5a850);
CLANG_FORWARD_PROC_SYMBOL(public_6d5af80);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d581e6 _public_6d581e6
#define public_6d581f8 _public_6d581f8
#define public_6d581fc _public_6d581fc
#define public_6d58205 _public_6d58205
#define public_6d58210 _public_6d58210
#define public_6d58229 _public_6d58229
#define public_6d58231 _public_6d58231
#define public_6d5823b _public_6d5823b
#define public_6d58242 _public_6d58242
#define public_6d58246 _public_6d58246
#define public_6d58268 _public_6d58268
#define public_6d58291 _public_6d58291
#define public_6d582b8 _public_6d582b8
#define public_6d582c0 _public_6d582c0
#define public_6d582e2 _public_6d582e2

PROC_DECLARE(0x6d581c0, internal_6d581c0, public_6d581c0);
extern "C" NAKED register_t __cdecl internal_6d581c0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        push edi
        push ebp
        mov esi, ecx
        call public_6d5a850
        mov edx, eax
        mov eax, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [eax+4]
        mov ebx, eax
        cmp edi, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x1C], edx
        je public_6d58205
        public_6d581e6 : nop
        push ebp
        lea ecx, ds:[edi+0xC]
        call public_6d5af80
        test eax, eax
        jge public_6d581f8
        mov edi, dword ptr ds : [edi+8]
        jmp public_6d581fc
        public_6d581f8 : nop
        mov ebx, edi
        mov edi, dword ptr ds : [edi]
        public_6d581fc : nop
        cmp edi, dword ptr ds : [esi+8]
        jne public_6d581e6
        mov edx, dword ptr ss : [esp+0x1C]
        public_6d58205 : nop
        xor ebp, ebp
        cmp ebx, edx
        mov eax, ebx
        je public_6d58246
        lea ecx, ds:[ecx]
        public_6d58210 : nop
        mov ecx, dword ptr ds : [eax+8]
        inc ebp
        cmp byte ptr ds : [ecx+0x21], 0
        jne public_6d58229
        push ecx
        call public_6ce4b90
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 4
        jmp public_6d58242
        public_6d58229 : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6d5823b
        public_6d58231 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_6d58231
        public_6d5823b : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_6d58242
        mov eax, ecx
        public_6d58242 : nop
        cmp eax, edx
        jne public_6d58210
        public_6d58246 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        mov eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_6d582b8
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx]
        jne public_6d582b8
        cmp edx, ecx
        jne public_6d582b8
        mov ebx, dword ptr ds : [ecx+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6d58291
        public_6d58268 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6ce4b30
        mov edi, dword ptr ds : [edi]
        push 0
        lea ecx, ds:[ebx+0xC]
        call public_6ce5d30
        push ebx
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6d58268
        public_6d58291 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov esi, dword ptr ds : [esi+4]
        pop edi
        mov dword ptr ds : [esi+8], esi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        public_6d582b8 : nop
        cmp ebx, edx
        je public_6d582e2
        lea esp, ss:[esp]
        public_6d582c0 : nop
        lea ecx, ss:[esp+0x10]
        mov edi, eax
        call public_6ce5750
        push edi
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_6ce46d0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ss : [esp+0x1C]
        jne public_6d582c0
        public_6d582e2 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d581c0)
    }
}

#undef public_6d581e6
#undef public_6d581f8
#undef public_6d581fc
#undef public_6d58205
#undef public_6d58210
#undef public_6d58229
#undef public_6d58231
#undef public_6d5823b
#undef public_6d58242
#undef public_6d58246
#undef public_6d58268
#undef public_6d58291
#undef public_6d582b8
#undef public_6d582c0
#undef public_6d582e2
