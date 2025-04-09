#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a740);
CLANG_FORWARD_PROC_SYMBOL(public_4db930);
CLANG_FORWARD_PROC_SYMBOL(public_4e7950);

#define public_4db204 _public_4db204
#define public_4db221 _public_4db221
#define public_4db230 _public_4db230
#define public_4db249 _public_4db249
#define public_4db290 _public_4db290
#define public_4db29c _public_4db29c

PROC_DECLARE(0x4db1c0, internal_4db1c0, public_4db1c0);
extern "C" NAKED register_t __cdecl internal_4db1c0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        cmp ebp, 0x26
        push esi
        push edi
        mov esi, ecx
        je public_4db204
        cmp ebp, 0x3E
        jne public_4db29c
        call public_45a740
        test al, al
        jne public_4db29c
        cmp ebx, dword ptr ds : [esi+0x58C]
        jne public_4db29c
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+0x590], eax
        jmp public_4db290
        public_4db204 : nop
        cmp ebx, dword ptr ds : [esi+0x548]
        jne public_4db221
        mov edx, dword ptr ds : [esi-0x38]
        lea ecx, ds:[esi-0x38]
        call dword ptr ds : [edx+0x30]
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 0xC
        public_4db221 : nop
        xor edi, edi
        lea eax, ds:[esi+0x4F8]
        lea esp, ss:[esp]
        public_4db230 : nop
        cmp ebx, dword ptr ds : [eax-0x28]
        je public_4db249
        cmp ebx, dword ptr ds : [eax]
        je public_4db249
        cmp ebx, dword ptr ds : [eax+0x28]
        je public_4db249
        inc edi
        add eax, 4
        cmp edi, 0xA
        jl public_4db230
        jmp public_4db29c
        public_4db249 : nop
        mov eax, dword ptr ds : [esi+0x558]
        test eax, eax
        je public_4db29c
        mov ecx, dword ptr ds : [esi+0x55C]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edi, edx
        jae public_4db29c
        mov eax, dword ptr ds : [esi+0x590]
        mov edx, dword ptr ds : [esi+0x558]
        add eax, edi
        lea ecx, ds:[eax+eax*8]
        xor eax, eax
        mov ax, word ptr ds : [edx+ecx*4]
        lea ecx, ds:[esi-0x38]
        push eax
        call public_4db930
        public_4db290 : nop
        mov ecx, dword ptr ds : [public_5d8484]
        mov dword ptr ds : [esi+0x550], ecx
        public_4db29c : nop
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        push ebx
        push ebp
        mov ecx, esi
        call public_4e7950
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x4db1c0)
    }
}

#undef public_4db204
#undef public_4db221
#undef public_4db230
#undef public_4db249
#undef public_4db290
#undef public_4db29c
