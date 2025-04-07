#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_425a20);
CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_506cc0);
CLANG_FORWARD_PROC_SYMBOL(public_506eb0);
CLANG_FORWARD_PROC_SYMBOL(public_506f00);
CLANG_FORWARD_PROC_SYMBOL(public_509d60);
CLANG_FORWARD_PROC_SYMBOL(public_52afa0);
CLANG_FORWARD_PROC_SYMBOL(public_535980);
CLANG_FORWARD_PROC_SYMBOL(public_5379b0);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_5526d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_506d10 _public_506d10
#define public_506d20 _public_506d20
#define public_506d37 _public_506d37
#define public_506d5a _public_506d5a
#define public_506d70 _public_506d70
#define public_506d87 _public_506d87
#define public_506d98 _public_506d98
#define public_506dc8 _public_506dc8
#define public_506e11 _public_506e11
#define public_506e2b _public_506e2b
#define public_506e40 _public_506e40
#define public_506e56 _public_506e56
#define public_506e6b _public_506e6b
#define public_506e89 _public_506e89
#define public_506e94 _public_506e94
#define public_506ea5 _public_506ea5

PROC_DECLARE(0x506cc0, internal_506cc0, public_506cc0);
extern "C" NAKED register_t __cdecl internal_506cc0()
{
    __asm
    {
        sub esp, 0x3C
        push ebx
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x2C0]
        xor ebx, ebx
        cmp al, bl
        je public_506ea5
        mov eax, dword ptr ds : [esi+0xE0]
        push ebp
        push edi
        push eax
        mov dword ptr ds : [esi+0xA0], ebx
        call public_5b7e1d
        mov edi, dword ptr ds : [esi+0xF8]
        mov dword ptr ds : [esi+0xE0], ebx
        mov dword ptr ds : [esi+0xDC], ebx
        mov eax, dword ptr ds : [edi]
        add esp, 4
        cmp eax, edi
        mov dword ptr ss : [esp+0x10], eax
        je public_506d37
        lea ebx, ds:[ebx]
        public_506d10 : nop
        mov eax, dword ptr ds : [eax+8]
        cmp eax, ebx
        je public_506d20
        push 1
        mov ecx, eax
        call public_506f00
        public_506d20 : nop
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_53ab20
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_506d10
        public_506d37 : nop
        lea ecx, ds:[esi+0xF4]
        call public_535980
        mov edi, dword ptr ds : [esi+0x34]
        cmp edi, ebx
        je public_506d5a
        mov ecx, edi
        call dword ptr ds : [public_5c6600]
        push edi
        call public_5b7e1d
        add esp, 4
        public_506d5a : nop
        mov ebp, dword ptr ds : [esi+0x3C]
        mov dword ptr ds : [esi+0x34], ebx
        mov eax, dword ptr ss : [ebp]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x14], eax
        je public_506d98
        nop 
        lea esp, ss:[esp]
        public_506d70 : nop
        mov edi, dword ptr ds : [eax+0x10]
        cmp edi, ebx
        je public_506d87
        mov ecx, edi
        call public_506eb0
        push edi
        call public_5b7e1d
        add esp, 4
        public_506d87 : nop
        lea ecx, ss:[esp+0x14]
        call public_52afa0
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebp
        jne public_506d70
        public_506d98 : nop
        mov eax, dword ptr ds : [esi+0x3C]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x38]
        push eax
        push edx
        lea edx, ss:[esp+0x20]
        push edx
        call public_509d60
        lea ecx, ds:[esi+0x100]
        call public_5526d0
        mov ecx, dword ptr ds : [esi+0xEC]
        cmp ecx, ebx
        pop edi
        pop ebp
        je public_506dc8
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_506dc8 : nop
        cmp dword ptr ds : [esi+0xE8], ebx
        je public_506e11
        lea ecx, ss:[esp+0x14]
        call public_4215b0
        mov ecx, dword ptr ds : [esi+0xE8]
        lea eax, ss:[esp+0x14]
        push eax
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov edx, dword ptr ds : [ecx]
        push 0xFFFFFFFF
        call dword ptr ds : [edx+0x94]
        mov ecx, dword ptr ds : [esi+0xE8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        public_506e11 : nop
        mov ecx, dword ptr ds : [esi+0xF0]
        cmp ecx, ebx
        je public_506e2b
        call public_5379b0
        mov ecx, dword ptr ds : [esi+0xF0]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        public_506e2b : nop
        mov ecx, dword ptr ds : [esi+0xEC]
        cmp ecx, ebx
        je public_506e40
        call public_4f7a90
        mov dword ptr ds : [esi+0xEC], ebx
        public_506e40 : nop
        mov eax, dword ptr ds : [esi+0xE8]
        cmp eax, ebx
        je public_506e56
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xE8], ebx
        public_506e56 : nop
        mov ecx, dword ptr ds : [esi+0xF0]
        cmp ecx, ebx
        je public_506e6b
        call public_537ad0
        mov dword ptr ds : [esi+0xF0], ebx
        public_506e6b : nop
        mov dword ptr ds : [esi+0xE4], ebx
        mov ecx, dword ptr ds : [esi+0x270]
        cmp ecx, ebx
        je public_506e94
        test byte ptr ds : [ecx+0xB4], 8
        je public_506e89
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        public_506e89 : nop
        mov ecx, dword ptr ds : [esi+0x270]
        call public_537ad0
        public_506e94 : nop
        lea ecx, ds:[esi+4]
        call public_425a20
        mov dword ptr ds : [esi+0x20], ebx
        mov byte ptr ds : [esi+0x2C0], bl
        public_506ea5 : nop
        pop esi
        pop ebx
        add esp, 0x3C
        ret 
        UNREACHABLE_TRAP(0x506cc0)
    }
}

#undef public_506d10
#undef public_506d20
#undef public_506d37
#undef public_506d5a
#undef public_506d70
#undef public_506d87
#undef public_506d98
#undef public_506dc8
#undef public_506e11
#undef public_506e2b
#undef public_506e40
#undef public_506e56
#undef public_506e6b
#undef public_506e89
#undef public_506e94
#undef public_506ea5
