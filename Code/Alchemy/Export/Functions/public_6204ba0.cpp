#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6204ba0);

#define public_6204bc0 _public_6204bc0
#define public_6204bc5 _public_6204bc5
#define public_6204bd0 _public_6204bd0
#define public_6204bf1 _public_6204bf1
#define public_6204bfc _public_6204bfc
#define public_6204c1d _public_6204c1d
#define public_6204c28 _public_6204c28
#define public_6204c49 _public_6204c49
#define public_6204c54 _public_6204c54

PROC_DECLARE(0x6204ba0, internal_6204ba0, public_6204ba0);
extern "C" NAKED register_t __cdecl internal_6204ba0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0x8508C35
        jne public_6204bd0
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x5C]
        je public_6204bc5
        or ch, 2
        mov dword ptr ds : [eax+0x5C], ecx
        public_6204bc0 : nop
        xor eax, eax
        ret 0xC
        public_6204bc5 : nop
        and ch, 0xFD
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_6204bd0 : nop
        cmp eax, 0xE8B8CDE7
        jne public_6204bfc
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x5C]
        je public_6204bf1
        or ch, 1
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_6204bf1 : nop
        and ch, 0xFE
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_6204bfc : nop
        cmp eax, 0x1C65B7B9
        jne public_6204c28
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x5C]
        je public_6204c1d
        or ch, 4
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_6204c1d : nop
        and ch, 0xFB
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_6204c28 : nop
        cmp eax, 0xF87B5FD5
        jne public_6204c54
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x5C]
        je public_6204c49
        or ecx, 2
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_6204c49 : nop
        and ecx, 0xFFFFFFFD
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_6204c54 : nop
        cmp eax, 0x3503B61
        je public_6204bc0
        cmp eax, 0xE2F60EEB
        je public_6204bc0
        cmp eax, 0xABE0402
        je public_6204bc0
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6204ba0)
    }
}

#undef public_6204bc0
#undef public_6204bc5
#undef public_6204bd0
#undef public_6204bf1
#undef public_6204bfc
#undef public_6204c1d
#undef public_6204c28
#undef public_6204c49
#undef public_6204c54
