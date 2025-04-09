#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4214d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4214f1 _public_4214f1
#define public_421500 _public_421500
#define public_421521 _public_421521
#define public_421530 _public_421530
#define public_42154a _public_42154a
#define public_421557 _public_421557
#define public_42156e _public_42156e
#define public_42157a _public_42157a

PROC_DECLARE(0x4214d0, internal_4214d0, public_4214d0);
extern "C" NAKED register_t __cdecl internal_4214d0()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        fmul dword ptr ds : [public_5c75d8]
        call public_5b7ec0
        test eax, eax
        mov dword ptr ss : [esp+4], eax
        jge public_4214f1
        mov dword ptr ss : [esp+4], 0
        jmp public_421500
        public_4214f1 : nop
        cmp eax, 0xFF
        jle public_421500
        mov dword ptr ss : [esp+4], 0xFF
        public_421500 : nop
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [public_5c75d8]
        call public_5b7ec0
        test eax, eax
        mov dword ptr ss : [esp+8], eax
        jge public_421521
        mov dword ptr ss : [esp+8], 0
        jmp public_421530
        public_421521 : nop
        cmp eax, 0xFF
        jle public_421530
        mov dword ptr ss : [esp+8], 0xFF
        public_421530 : nop
        fld dword ptr ss : [esp+0xC]
        push ebx
        fmul dword ptr ds : [public_5c75d8]
        call public_5b7ec0
        mov ebx, eax
        test ebx, ebx
        jge public_42154a
        xor ebx, ebx
        jmp public_421557
        public_42154a : nop
        cmp ebx, 0xFF
        jle public_421557
        mov ebx, 0xFF
        public_421557 : nop
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5c75d8]
        call public_5b7ec0
        test eax, eax
        jge public_42156e
        xor eax, eax
        jmp public_42157a
        public_42156e : nop
        cmp eax, 0xFF
        jle public_42157a
        mov eax, 0xFF
        public_42157a : nop
        mov ecx, dword ptr ds : [public_5c6de0]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], edx
        xor edx, edx
        mov dh, al
        movzx eax, byte ptr ss : [esp+0xC]
        mov dl, byte ptr ss : [esp+8]
        shl edx, 8
        or edx, eax
        xor eax, eax
        mov al, bl
        shl edx, 8
        or edx, eax
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push 8
        push ecx
        call dword ptr ds : [edx+0x14]
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4214d0)
    }
}

#undef public_4214f1
#undef public_421500
#undef public_421521
#undef public_421530
#undef public_42154a
#undef public_421557
#undef public_42156e
#undef public_42157a
