#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636ec70);
CLANG_FORWARD_PROC_SYMBOL(public_636ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_6372680);
CLANG_FORWARD_PROC_SYMBOL(public_638a480);
CLANG_FORWARD_PROC_SYMBOL(public_638b140);
CLANG_FORWARD_PROC_SYMBOL(public_638c680);

#define public_638b172 _public_638b172
#define public_638b1a4 _public_638b1a4
#define public_638b1c0 _public_638b1c0
#define public_638b1d4 _public_638b1d4
#define public_638b1ed _public_638b1ed
#define public_638b1fb _public_638b1fb
#define public_638b201 _public_638b201
#define public_638b20a _public_638b20a
#define public_638b20e _public_638b20e
#define public_638b221 _public_638b221
#define public_638b248 _public_638b248

PROC_DECLARE(0x638b140, internal_638b140, public_638b140);
extern "C" NAKED register_t __cdecl internal_638b140()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_638b248
        mov eax, dword ptr ds : [public_658b810]
        push ebx
        push ebp
        push esi
        push eax
        call public_6372680
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        jne public_638b172
        mov dword ptr ss : [esp+0x20], 0
        public_638b172 : nop
        mov ecx, dword ptr ds : [esi+0x3C]
        push ecx
        call public_636ec10
        lea edx, ds:[eax+eax+2]
        push edx
        call public_636ec70
        mov ecx, dword ptr ds : [public_658b8e0]
        mov ebp, dword ptr ss : [esp+0x2C]
        add esp, 8
        inc ecx
        test esi, esi
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ds : [public_658b8e0], ecx
        mov ebx, esi
        je public_638b221
        push edi
        public_638b1a4 : nop
        cmp dword ptr ds : [ebx+0x48], ecx
        je public_638b1c0
        lea eax, ss:[esp+0x10]
        push ebx
        push eax
        mov dword ptr ds : [ebx+0x48], ecx
        call public_636e1b0
        mov ecx, dword ptr ds : [public_658b8e0]
        add esp, 8
        public_638b1c0 : nop
        mov eax, dword ptr ds : [ebx+0x3C]
        test eax, eax
        je public_638b20e
        mov esi, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        add edi, 4
        test esi, esi
        je public_638b20a
        public_638b1d4 : nop
        cmp dword ptr ds : [esi+0x48], ecx
        je public_638b201
        test ebp, ebp
        mov dword ptr ds : [esi+0x48], ecx
        jne public_638b1ed
        push esi
        call public_638c680
        add esp, 4
        test eax, eax
        jne public_638b1fb
        public_638b1ed : nop
        lea ecx, ss:[esp+0x10]
        push esi
        push ecx
        call public_636e1b0
        add esp, 8
        public_638b1fb : nop
        mov ecx, dword ptr ds : [public_658b8e0]
        public_638b201 : nop
        mov esi, dword ptr ds : [edi]
        add edi, 4
        test esi, esi
        jne public_638b1d4
        public_638b20a : nop
        mov esi, dword ptr ss : [esp+0x20]
        public_638b20e : nop
        mov eax, dword ptr ss : [esp+0x24]
        xor edx, edx
        cmp ebx, esi
        setne dl
        dec edx
        and edx, eax
        mov ebx, edx
        jne public_638b1a4
        pop edi
        public_638b221 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        push ebp
        push eax
        push 0
        push ecx
        push edx
        call public_638a480
        lea eax, ss:[esp+0x20]
        push eax
        call public_636ecc0
        add esp, 0x18
        pop esi
        pop ebp
        pop ebx
        public_638b248 : nop
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x638b140)
    }
}

#undef public_638b172
#undef public_638b1a4
#undef public_638b1c0
#undef public_638b1d4
#undef public_638b1ed
#undef public_638b1fb
#undef public_638b201
#undef public_638b20a
#undef public_638b20e
#undef public_638b221
#undef public_638b248
