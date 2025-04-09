#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421ad0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_421af1 _public_421af1
#define public_421b00 _public_421b00
#define public_421b1a _public_421b1a
#define public_421b27 _public_421b27
#define public_421b3e _public_421b3e
#define public_421b4a _public_421b4a

PROC_DECLARE(0x421ad0, internal_421ad0, public_421ad0);
extern "C" NAKED register_t __cdecl internal_421ad0()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        fmul dword ptr ds : [public_5c75d8]
        call public_5b7ec0
        test eax, eax
        mov dword ptr ss : [esp+4], eax
        jge public_421af1
        mov dword ptr ss : [esp+4], 0
        jmp public_421b00
        public_421af1 : nop
        cmp eax, 0xFF
        jle public_421b00
        mov dword ptr ss : [esp+4], 0xFF
        public_421b00 : nop
        fld dword ptr ss : [esp+8]
        push ebx
        fmul dword ptr ds : [public_5c75d8]
        call public_5b7ec0
        mov ebx, eax
        test ebx, ebx
        jge public_421b1a
        xor ebx, ebx
        jmp public_421b27
        public_421b1a : nop
        cmp ebx, 0xFF
        jle public_421b27
        mov ebx, 0xFF
        public_421b27 : nop
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5c75d8]
        call public_5b7ec0
        test eax, eax
        jge public_421b3e
        xor eax, eax
        jmp public_421b4a
        public_421b3e : nop
        cmp eax, 0xFF
        jle public_421b4a
        mov eax, 0xFF
        public_421b4a : nop
        movzx ecx, byte ptr ss : [esp+8]
        xor edx, edx
        mov dl, bl
        or ecx, 0xFFFFFF00
        shl ecx, 8
        movzx eax, al
        pop ebx
        or ecx, edx
        shl ecx, 8
        or ecx, eax
        mov dword ptr ds : [public_616898], ecx
        ret 
        UNREACHABLE_TRAP(0x421ad0)
    }
}

#undef public_421af1
#undef public_421b00
#undef public_421b1a
#undef public_421b27
#undef public_421b3e
#undef public_421b4a
