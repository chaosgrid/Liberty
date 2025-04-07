#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620a630);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_620a683 _public_620a683
#define public_620a69a _public_620a69a
#define public_620a6a7 _public_620a6a7
#define public_620a6ad _public_620a6ad
#define public_620a6bb _public_620a6bb
#define public_620a6cc _public_620a6cc
#define public_620a6e0 _public_620a6e0
#define public_620a6ea _public_620a6ea
#define public_620a6fc _public_620a6fc
#define public_620a702 _public_620a702

PROC_DECLARE(0x620a630, internal_620a630, public_620a630);
extern "C" NAKED register_t __cdecl internal_620a630()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x18], edi
        mov ebx, dword ptr ds : [edi+0xC]
        inc ebx
        cmp ebp, ebx
        jle public_620a6e0
        mov edx, dword ptr ds : [edi+0x10]
        cmp edx, ebp
        mov dword ptr ss : [esp+0x10], edx
        jg public_620a6ad
        je public_620a6ad
        mov esi, dword ptr ds : [edi+4]
        lea ecx, ds:[ebp*8]
        xor eax, eax
        mov dword ptr ss : [esp+0x14], esi
        test ecx, ecx
        mov dword ptr ss : [esp+0x20], eax
        je public_620a683
        push ecx
        call public_624612c
        mov edx, dword ptr ss : [esp+0x14]
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        public_620a683 : nop
        test esi, esi
        je public_620a6a7
        test eax, eax
        je public_620a69a
        lea ecx, ds:[edx+edx]
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x18]
        public_620a69a : nop
        push esi
        call public_62460e0
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        public_620a6a7 : nop
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+0x10], ebp
        public_620a6ad : nop
        mov eax, dword ptr ds : [edi+4]
        cmp ebx, ebp
        lea eax, ds:[eax+ebx*8]
        jge public_620a702
        mov ecx, ebp
        sub ecx, ebx
        public_620a6bb : nop
        test eax, eax
        je public_620a6cc
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], 0
        public_620a6cc : nop
        add eax, 8
        dec ecx
        jne public_620a6bb
        dec ebp
        mov dword ptr ds : [edi+0xC], ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 4
        public_620a6e0 : nop
        jge public_620a702
        mov esi, dword ptr ds : [edi+4]
        add esi, 4
        sub ebx, ebp
        public_620a6ea : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_620a6fc
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_620a6fc : nop
        add esi, 8
        dec ebx
        jne public_620a6ea
        public_620a702 : nop
        dec ebp
        mov dword ptr ds : [edi+0xC], ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x620a630)
    }
}

#undef public_620a683
#undef public_620a69a
#undef public_620a6a7
#undef public_620a6ad
#undef public_620a6bb
#undef public_620a6cc
#undef public_620a6e0
#undef public_620a6ea
#undef public_620a6fc
#undef public_620a702
