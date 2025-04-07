#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d299e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ebf0);
CLANG_FORWARD_PROC_SYMBOL(public_6d430d0);

#define public_6d3ec40 _public_6d3ec40
#define public_6d3ec62 _public_6d3ec62
#define public_6d3ec7d _public_6d3ec7d
#define public_6d3ec7f _public_6d3ec7f
#define public_6d3ec83 _public_6d3ec83
#define public_6d3ec95 _public_6d3ec95

PROC_DECLARE(0x6d3ebf0, internal_6d3ebf0, public_6d3ebf0);
extern "C" NAKED register_t __cdecl internal_6d3ebf0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        push edi
        push ebp
        mov esi, ecx
        call dword ptr ds : [public_6d64ba0]
        mov ebx, dword ptr ds : [esi+0x34]
        push 0
/*FIXUP push offset _public_6d299e0 @0x6d3ec06*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea ecx, ss:[esp+0x20]
        push ecx
        mov edi, eax
        mov eax, dword ptr ds : [esi+0x30]
        push ebx
        push eax
        mov word ptr ss : [esp+0x2C], di
        mov word ptr ss : [esp+0x2E], di
        call public_6d430d0
        add esp, 0x18
        cmp eax, ebx
        je public_6d3ec40
        mov dx, word ptr ss : [esp+0x16]
        cmp dx, word ptr ds : [eax]
        jb public_6d3ec40
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        public_6d3ec40 : nop
        push ebp
        call dword ptr ds : [public_6d64bac]
        add esp, 4
        mov ebx, eax
        cmp di, bx
        je public_6d3ec95
        mov edi, dword ptr ds : [esi+0x34]
        mov esi, dword ptr ds : [esi+0x30]
        mov ecx, edi
        sub ecx, esi
        sar ecx, 2
        test ecx, ecx
        jle public_6d3ec83
        public_6d3ec62 : nop
        mov eax, ecx
        cdq 
        sub eax, edx
        sar eax, 1
        cmp word ptr ds : [esi+eax*4+2], bx
        jae public_6d3ec7d
        or edx, 0xFFFFFFFF
        sub edx, eax
        lea esi, ds:[esi+eax*4+4]
        add ecx, edx
        jmp public_6d3ec7f
        public_6d3ec7d : nop
        mov ecx, eax
        public_6d3ec7f : nop
        test ecx, ecx
        jg public_6d3ec62
        public_6d3ec83 : nop
        cmp esi, edi
        je public_6d3ec95
        cmp bx, word ptr ds : [esi]
        jb public_6d3ec95
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        public_6d3ec95 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d3ebf0)
    }
}

#undef public_6d3ec40
#undef public_6d3ec62
#undef public_6d3ec7d
#undef public_6d3ec7f
#undef public_6d3ec83
#undef public_6d3ec95
