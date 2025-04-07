#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6237cd0);

#define public_6237cf5 _public_6237cf5
#define public_6237d00 _public_6237d00
#define public_6237d21 _public_6237d21
#define public_6237d2c _public_6237d2c
#define public_6237d4d _public_6237d4d
#define public_6237d58 _public_6237d58
#define public_6237d79 _public_6237d79
#define public_6237d84 _public_6237d84
#define public_6237da5 _public_6237da5
#define public_6237db0 _public_6237db0
#define public_6237dd1 _public_6237dd1
#define public_6237ddc _public_6237ddc

PROC_DECLARE(0x6237cd0, internal_6237cd0, public_6237cd0);
extern "C" NAKED register_t __cdecl internal_6237cd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xFB7958C1
        jne public_6237d00
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x5C]
        je public_6237cf5
        or ecx, 1
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_6237cf5 : nop
        and ecx, 0xFFFFFFFE
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_6237d00 : nop
        cmp eax, 0xE91467F1
        jne public_6237d2c
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x5C]
        je public_6237d21
        or ecx, 4
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_6237d21 : nop
        and ecx, 0xFFFFFFFB
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_6237d2c : nop
        cmp eax, 0xF9FEBF0D
        jne public_6237d58
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x5C]
        je public_6237d4d
        or ecx, 0x10
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_6237d4d : nop
        and ecx, 0xFFFFFFEF
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_6237d58 : nop
        cmp eax, 0xE2F60EEB
        jne public_6237d84
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x5C]
        je public_6237d79
        or ecx, 8
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_6237d79 : nop
        and ecx, 0xFFFFFFF7
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_6237d84 : nop
        cmp eax, 0xF3D52EE4
        jne public_6237db0
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x5C]
        je public_6237da5
        or ch, 0x10
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_6237da5 : nop
        and ch, 0xEF
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_6237db0 : nop
        cmp eax, 0xE8DC7F5E
        jne public_6237ddc
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x5C]
        je public_6237dd1
        or ch, 0x20
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_6237dd1 : nop
        and ch, 0xDF
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_6237ddc : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6237cd0)
    }
}

#undef public_6237cf5
#undef public_6237d00
#undef public_6237d21
#undef public_6237d2c
#undef public_6237d4d
#undef public_6237d58
#undef public_6237d79
#undef public_6237d84
#undef public_6237da5
#undef public_6237db0
#undef public_6237dd1
#undef public_6237ddc
