#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421bd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_421bf1 _public_421bf1
#define public_421c00 _public_421c00
#define public_421c21 _public_421c21
#define public_421c30 _public_421c30
#define public_421c4a _public_421c4a
#define public_421c57 _public_421c57
#define public_421c6e _public_421c6e
#define public_421c7a _public_421c7a

PROC_DECLARE(0x421bd0, internal_421bd0, public_421bd0);
extern "C" NAKED register_t __cdecl internal_421bd0()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        fmul dword ptr ds : [public_5c75d8]
        call public_5b7ec0
        test eax, eax
        mov dword ptr ss : [esp+4], eax
        jge public_421bf1
        mov dword ptr ss : [esp+4], 0
        jmp public_421c00
        public_421bf1 : nop
        cmp eax, 0xFF
        jle public_421c00
        mov dword ptr ss : [esp+4], 0xFF
        public_421c00 : nop
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [public_5c75d8]
        call public_5b7ec0
        test eax, eax
        mov dword ptr ss : [esp+8], eax
        jge public_421c21
        mov dword ptr ss : [esp+8], 0
        jmp public_421c30
        public_421c21 : nop
        cmp eax, 0xFF
        jle public_421c30
        mov dword ptr ss : [esp+8], 0xFF
        public_421c30 : nop
        fld dword ptr ss : [esp+0xC]
        push ebx
        fmul dword ptr ds : [public_5c75d8]
        call public_5b7ec0
        mov ebx, eax
        test ebx, ebx
        jge public_421c4a
        xor ebx, ebx
        jmp public_421c57
        public_421c4a : nop
        cmp ebx, 0xFF
        jle public_421c57
        mov ebx, 0xFF
        public_421c57 : nop
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5c75d8]
        call public_5b7ec0
        test eax, eax
        jge public_421c6e
        xor eax, eax
        jmp public_421c7a
        public_421c6e : nop
        cmp eax, 0xFF
        jle public_421c7a
        mov eax, 0xFF
        public_421c7a : nop
        movzx edx, byte ptr ss : [esp+0xC]
        xor ecx, ecx
        mov ch, al
        xor eax, eax
        mov al, bl
        pop ebx
        mov cl, byte ptr ss : [esp+4]
        shl ecx, 8
        or ecx, edx
        shl ecx, 8
        or ecx, eax
        mov dword ptr ds : [public_616898], ecx
        ret 
        UNREACHABLE_TRAP(0x421bd0)
    }
}

#undef public_421bf1
#undef public_421c00
#undef public_421c21
#undef public_421c30
#undef public_421c4a
#undef public_421c57
#undef public_421c6e
#undef public_421c7a
