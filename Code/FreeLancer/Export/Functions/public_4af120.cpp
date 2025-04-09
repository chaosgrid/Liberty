#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4af120);
CLANG_FORWARD_PROC_SYMBOL(public_5b7010);
CLANG_FORWARD_PROC_SYMBOL(public_5b7030);

#define public_4af164 _public_4af164
#define public_4af1ab _public_4af1ab
#define public_4af1b9 _public_4af1b9
#define public_4af1cb _public_4af1cb
#define public_4af1d1 _public_4af1d1
#define public_4af1ed _public_4af1ed
#define public_4af1fc _public_4af1fc
#define public_4af202 _public_4af202
#define public_4af21e _public_4af21e

PROC_DECLARE(0x4af120, internal_4af120, public_4af120);
extern "C" NAKED register_t __cdecl internal_4af120()
{
    __asm
    {
        sub esp, 0x1C
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        mov eax, dword ptr ds : [public_5c6de0]
        push edi
        mov dword ptr ss : [esp+0x2C], 0
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x24]
        mov eax, dword ptr ss : [esp+0x2C]
        xor edi, edi
        test eax, eax
        jbe public_4af202
        mov ebp, dword ptr ss : [esp+0x38]
        public_4af164 : nop
        push 0
        call public_5b7010
        push 0
        mov dword ptr ss : [esp+0x24], eax
        call public_5b7010
        add esp, 8
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edi
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        test eax, eax
        jne public_4af1ed
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, 1
        je public_4af1ed
        mov ecx, dword ptr ss : [esp+0x30]
        test ecx, ecx
        je public_4af1ab
        cmp ecx, dword ptr ss : [esp+0x10]
        jne public_4af1ed
        public_4af1ab : nop
        mov ecx, dword ptr ss : [esp+0x34]
        test ecx, ecx
        je public_4af1b9
        cmp ecx, dword ptr ss : [esp+0x14]
        jne public_4af1ed
        public_4af1b9 : nop
        push eax
        call public_5b7030
        add esp, 4
        test ebp, ebp
        jle public_4af1cb
        cmp ebp, dword ptr ds : [eax+4]
        jmp public_4af1d1
        public_4af1cb : nop
        mov eax, dword ptr ds : [eax+4]
        cmp dword ptr ds : [esi+0x10], eax
        public_4af1d1 : nop
        jne public_4af1ed
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        lea edx, ds:[ecx*4]
        lea ebp, ds:[eax+eax*2]
        cmp ebp, edx
        je public_4af1fc
        mov ebp, dword ptr ss : [esp+0x38]
        public_4af1ed : nop
        mov eax, dword ptr ss : [esp+0x2C]
        inc edi
        cmp edi, eax
        jb public_4af164
        jmp public_4af202
        public_4af1fc : nop
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], ecx
        public_4af202 : nop
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        jbe public_4af21e
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        jbe public_4af21e
        pop edi
        pop esi
        mov eax, 1
        pop ebp
        add esp, 0x1C
        ret 0x10
        public_4af21e : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x1C
        ret 0x10
        UNREACHABLE_TRAP(0x4af120)
    }
}

#undef public_4af164
#undef public_4af1ab
#undef public_4af1b9
#undef public_4af1cb
#undef public_4af1d1
#undef public_4af1ed
#undef public_4af1fc
#undef public_4af202
#undef public_4af21e
