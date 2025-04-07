#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620a260);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_620a2b9 _public_620a2b9
#define public_620a2ca _public_620a2ca
#define public_620a2db _public_620a2db
#define public_620a2e3 _public_620a2e3
#define public_620a2f1 _public_620a2f1
#define public_620a2fb _public_620a2fb
#define public_620a301 _public_620a301

PROC_DECLARE(0x620a260, internal_620a260, public_620a260);
extern "C" NAKED register_t __cdecl internal_620a260()
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
        jle public_620a301
        mov edx, dword ptr ss : [ebp+0x10]
        cmp edx, ebx
        mov dword ptr ss : [esp+0xC], edx
        jg public_620a2e3
        je public_620a2e3
        push esi
        mov esi, dword ptr ss : [ebp+4]
        push edi
        lea eax, ds:[ebx*8]
        xor edi, edi
        mov dword ptr ss : [esp+0x18], esi
        test eax, eax
        mov dword ptr ss : [esp+0x20], edi
        je public_620a2b9
        push eax
        call public_624612c
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        mov edi, eax
        public_620a2b9 : nop
        test esi, esi
        je public_620a2db
        test edi, edi
        je public_620a2ca
        lea ecx, ds:[edx+edx]
        rep movsd
        mov esi, dword ptr ss : [esp+0x18]
        public_620a2ca : nop
        push esi
        call public_62460e0
        mov edi, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        public_620a2db : nop
        mov dword ptr ss : [ebp+4], edi
        pop edi
        mov dword ptr ss : [ebp+0x10], ebx
        pop esi
        public_620a2e3 : nop
        mov eax, dword ptr ss : [ebp+4]
        cmp ecx, ebx
        lea eax, ds:[eax+ecx*8]
        jge public_620a301
        mov edx, ebx
        sub edx, ecx
        public_620a2f1 : nop
        test eax, eax
        je public_620a2fb
        mov dword ptr ds : [eax], 0
        public_620a2fb : nop
        add eax, 8
        dec edx
        jne public_620a2f1
        public_620a301 : nop
        dec ebx
        mov dword ptr ss : [ebp+0xC], ebx
        pop ebp
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x620a260)
    }
}

#undef public_620a2b9
#undef public_620a2ca
#undef public_620a2db
#undef public_620a2e3
#undef public_620a2f1
#undef public_620a2fb
#undef public_620a301
