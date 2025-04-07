#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620a380);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_620a3d9 _public_620a3d9
#define public_620a3ea _public_620a3ea
#define public_620a3fb _public_620a3fb
#define public_620a403 _public_620a403
#define public_620a411 _public_620a411
#define public_620a41b _public_620a41b
#define public_620a421 _public_620a421

PROC_DECLARE(0x620a380, internal_620a380, public_620a380);
extern "C" NAKED register_t __cdecl internal_620a380()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+0xC]
        inc ecx
        cmp ebx, ecx
        mov dword ptr ss : [esp+8], ecx
        jle public_620a421
        mov edx, dword ptr ss : [ebp+0x10]
        cmp edx, ebx
        mov dword ptr ss : [esp+0xC], edx
        jg public_620a403
        je public_620a403
        push esi
        mov esi, dword ptr ss : [ebp+4]
        push edi
        lea eax, ds:[ebx*8]
        xor edi, edi
        mov dword ptr ss : [esp+0x18], esi
        test eax, eax
        mov dword ptr ss : [esp+0x20], edi
        je public_620a3d9
        push eax
        call public_624612c
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        mov edi, eax
        public_620a3d9 : nop
        test esi, esi
        je public_620a3fb
        test edi, edi
        je public_620a3ea
        lea ecx, ds:[edx+edx]
        rep movsd
        mov esi, dword ptr ss : [esp+0x18]
        public_620a3ea : nop
        push esi
        call public_62460e0
        mov edi, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        public_620a3fb : nop
        mov dword ptr ss : [ebp+4], edi
        pop edi
        mov dword ptr ss : [ebp+0x10], ebx
        pop esi
        public_620a403 : nop
        mov eax, dword ptr ss : [ebp+4]
        cmp ecx, ebx
        lea eax, ds:[eax+ecx*8]
        jge public_620a421
        mov edx, ebx
        sub edx, ecx
        public_620a411 : nop
        test eax, eax
        je public_620a41b
        mov dword ptr ds : [eax], 0
        public_620a41b : nop
        add eax, 8
        dec edx
        jne public_620a411
        public_620a421 : nop
        dec ebx
        mov dword ptr ss : [ebp+0xC], ebx
        pop ebp
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x620a380)
    }
}

#undef public_620a3d9
#undef public_620a3ea
#undef public_620a3fb
#undef public_620a403
#undef public_620a411
#undef public_620a41b
#undef public_620a421
