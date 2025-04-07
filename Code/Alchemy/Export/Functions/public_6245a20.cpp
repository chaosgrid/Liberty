#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6245a20);

#define public_6245a34 _public_6245a34
#define public_6245a44 _public_6245a44
#define public_6245a54 _public_6245a54
#define public_6245a64 _public_6245a64
#define public_6245a74 _public_6245a74
#define public_6245a82 _public_6245a82
#define public_6245a95 _public_6245a95

PROC_DECLARE(0x6245a20, internal_6245a20, public_6245a20);
extern "C" NAKED register_t __cdecl internal_6245a20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0x23C350C
        jne public_6245a34
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x4C]
        jmp public_6245a82
        public_6245a34 : nop
        cmp eax, 0xF5042852
        jne public_6245a44
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [edx+0x50]
        jmp public_6245a82
        public_6245a44 : nop
        cmp eax, 0xE7221F95
        jne public_6245a54
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [edx+0x5C]
        jmp public_6245a82
        public_6245a54 : nop
        cmp eax, 0xAB180C5
        jne public_6245a64
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [edx+0x58]
        jmp public_6245a82
        public_6245a64 : nop
        cmp eax, 0xA635880
        jne public_6245a74
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [edx+0x54]
        jmp public_6245a82
        public_6245a74 : nop
        cmp eax, 0x681233E
        jne public_6245a95
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [edx+0x60]
        public_6245a82 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ecx
        mov eax, ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_6245a95 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6245a20)
    }
}

#undef public_6245a34
#undef public_6245a44
#undef public_6245a54
#undef public_6245a64
#undef public_6245a74
#undef public_6245a82
#undef public_6245a95
