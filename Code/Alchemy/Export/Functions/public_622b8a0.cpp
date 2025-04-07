#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622b8a0);

#define public_622b8c5 _public_622b8c5
#define public_622b8d0 _public_622b8d0
#define public_622b8f1 _public_622b8f1
#define public_622b8fc _public_622b8fc
#define public_622b91d _public_622b91d
#define public_622b928 _public_622b928
#define public_622b949 _public_622b949
#define public_622b954 _public_622b954

PROC_DECLARE(0x622b8a0, internal_622b8a0, public_622b8a0);
extern "C" NAKED register_t __cdecl internal_622b8a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xF9FEBF0D
        jne public_622b8d0
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x5C]
        je public_622b8c5
        or ecx, 0x40
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_622b8c5 : nop
        and ecx, 0xFFFFFFBF
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_622b8d0 : nop
        cmp eax, 0xE2F60EEB
        jne public_622b8fc
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x5C]
        je public_622b8f1
        or ecx, 8
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_622b8f1 : nop
        and ecx, 0xFFFFFFF7
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_622b8fc : nop
        cmp eax, 0xF3D52EE4
        jne public_622b928
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x5C]
        je public_622b91d
        or ch, 0x10
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_622b91d : nop
        and ch, 0xEF
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_622b928 : nop
        cmp eax, 0xE8DC7F5E
        jne public_622b954
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x5C]
        je public_622b949
        or ch, 0x20
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_622b949 : nop
        and ch, 0xDF
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_622b954 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x622b8a0)
    }
}

#undef public_622b8c5
#undef public_622b8d0
#undef public_622b8f1
#undef public_622b8fc
#undef public_622b91d
#undef public_622b928
#undef public_622b949
#undef public_622b954
