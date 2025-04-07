#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410940);
CLANG_FORWARD_PROC_SYMBOL(public_410d10);
CLANG_FORWARD_PROC_SYMBOL(public_411640);
CLANG_FORWARD_PROC_SYMBOL(public_411670);
CLANG_FORWARD_PROC_SYMBOL(public_4119e0);
CLANG_FORWARD_PROC_SYMBOL(public_411a70);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_4100a0 _public_4100a0
#define public_4100b5 _public_4100b5
#define public_4100c0 _public_4100c0
#define public_4100ca _public_4100ca
#define public_4100d1 _public_4100d1
#define public_4100d5 _public_4100d5
#define public_4100f7 _public_4100f7
#define public_410116 _public_410116
#define public_41013a _public_41013a
#define public_410140 _public_410140
#define public_410160 _public_410160

PROC_DECLARE(0x410070, internal_410070, public_410070);
extern "C" NAKED register_t __cdecl internal_410070()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        push edi
        lea esi, ds:[ecx+0x64]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_4119e0
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        mov ebx, eax
        call public_411640
        mov edi, eax
        cmp edi, ebx
        je public_4100d5
        lea esp, ss:[esp]
        public_4100a0 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        jne public_4100b5
        push ecx
        call public_411670
        add esp, 4
        jmp public_4100d1
        public_4100b5 : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_4100ca
        lea ecx, ds:[ecx]
        public_4100c0 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_4100c0
        public_4100ca : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_4100d1
        mov eax, ecx
        public_4100d1 : nop
        cmp eax, ebx
        jne public_4100a0
        public_4100d5 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        mov eax, edi
        mov dword ptr ss : [esp+0xC], eax
        je public_41013a
        mov ecx, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [ecx]
        jne public_41013a
        cmp ebx, ecx
        jne public_41013a
        mov ebx, dword ptr ds : [ecx+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_410116
        public_4100f7 : nop
        mov edx, dword ptr ds : [edi+8]
        push edx
        mov ecx, esi
        call public_410d10
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_418978
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_4100f7
        public_410116 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov esi, dword ptr ds : [esi+4]
        pop edi
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebx
        add esp, 8
        ret 4
        public_41013a : nop
        cmp edi, ebx
        je public_410160
        mov edi, edi
        public_410140 : nop
        lea ecx, ss:[esp+0xC]
        mov edi, eax
        call public_411a70
        push edi
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, esi
        call public_410940
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, ebx
        jne public_410140
        public_410160 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x410070)
    }
}

#undef public_4100a0
#undef public_4100b5
#undef public_4100c0
#undef public_4100ca
#undef public_4100d1
#undef public_4100d5
#undef public_4100f7
#undef public_410116
#undef public_41013a
#undef public_410140
#undef public_410160
