#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6215a00);

#define public_6215a25 _public_6215a25
#define public_6215a30 _public_6215a30
#define public_6215a51 _public_6215a51
#define public_6215a5c _public_6215a5c
#define public_6215a7d _public_6215a7d
#define public_6215a88 _public_6215a88
#define public_6215aa9 _public_6215aa9
#define public_6215ab4 _public_6215ab4
#define public_6215ad5 _public_6215ad5
#define public_6215ae0 _public_6215ae0
#define public_6215b01 _public_6215b01
#define public_6215b0c _public_6215b0c

PROC_DECLARE(0x6215a00, internal_6215a00, public_6215a00);
extern "C" NAKED register_t __cdecl internal_6215a00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xF863872E
        jne public_6215a30
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x5C]
        je public_6215a25
        or ecx, 1
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_6215a25 : nop
        and ecx, 0xFFFFFFFE
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_6215a30 : nop
        cmp eax, 0xF87B5FD5
        jne public_6215a5c
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x5C]
        je public_6215a51
        or ecx, 2
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_6215a51 : nop
        and ecx, 0xFFFFFFFD
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_6215a5c : nop
        cmp eax, 0xE91467F1
        jne public_6215a88
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x5C]
        je public_6215a7d
        or ecx, 4
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_6215a7d : nop
        and ecx, 0xFFFFFFFB
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_6215a88 : nop
        cmp eax, 0xE2F60EEB
        jne public_6215ab4
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x5C]
        je public_6215aa9
        or ecx, 8
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_6215aa9 : nop
        and ecx, 0xFFFFFFF7
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_6215ab4 : nop
        cmp eax, 0xF3D52EE4
        jne public_6215ae0
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x5C]
        je public_6215ad5
        or ch, 0x10
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_6215ad5 : nop
        and ch, 0xEF
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_6215ae0 : nop
        cmp eax, 0xE8DC7F5E
        jne public_6215b0c
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x5C]
        je public_6215b01
        or ch, 0x20
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_6215b01 : nop
        and ch, 0xDF
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_6215b0c : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6215a00)
    }
}

#undef public_6215a25
#undef public_6215a30
#undef public_6215a51
#undef public_6215a5c
#undef public_6215a7d
#undef public_6215a88
#undef public_6215aa9
#undef public_6215ab4
#undef public_6215ad5
#undef public_6215ae0
#undef public_6215b01
#undef public_6215b0c
