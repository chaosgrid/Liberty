#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb8b70);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0470);
CLANG_FORWARD_PROC_SYMBOL(public_6ed18f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f0fc40);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f20e00);
CLANG_FORWARD_PROC_SYMBOL(public_6f47ba0);
CLANG_FORWARD_PROC_SYMBOL(public_6f47d60);
CLANG_FORWARD_PROC_SYMBOL(public_6f481e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f5a7b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f5a800);
CLANG_FORWARD_PROC_SYMBOL(public_6f5a820);
CLANG_FORWARD_PROC_SYMBOL(public_6f5abc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);

#define public_6eb8093 _public_6eb8093
#define public_6eb80a4 _public_6eb80a4
#define public_6eb80be _public_6eb80be
#define public_6eb80fb _public_6eb80fb
#define public_6eb8107 _public_6eb8107
#define public_6eb811c _public_6eb811c
#define public_6eb81db _public_6eb81db
#define public_6eb81f1 _public_6eb81f1
#define public_6eb8216 _public_6eb8216

PROC_DECLARE(0x6eb8070, internal_6eb8070, public_6eb8070);
extern "C" NAKED register_t __cdecl internal_6eb8070()
{
    __asm
    {
        sub esp, 0xC
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea eax, ss:[esp+0xC]
        lea edi, ds:[esi+0x204]
        push eax
        mov ecx, edi
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [edi+4]
        je public_6eb80be
        public_6eb8093 : nop
        mov ecx, dword ptr ds : [eax+0x10]
        test ecx, ecx
        je public_6eb80a4
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov eax, dword ptr ss : [esp+0xC]
        public_6eb80a4 : nop
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        call public_6f20e00
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0xC], eax
        jne public_6eb8093
        public_6eb80be : nop
        mov eax, dword ptr ds : [esi+0x1FC]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x1F8]
        push eax
        push edx
        lea edx, ss:[esp+0x18]
        push edx
        call public_6fa8370
        mov ecx, dword ptr ds : [esi+8]
        call public_6f481e0
        test eax, 0x3FFFFFFF
        jne public_6eb80fb
        mov ecx, dword ptr ds : [esi+8]
        push 0
        call public_6f481e0
        push eax
        call dword ptr ds : [public_6fb36b4]
        add esp, 8
        public_6eb80fb : nop
        mov eax, dword ptr ds : [esi+0x1C8]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6eb811c
        public_6eb8107 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [esi+0x1C8]
        jne public_6eb8107
        public_6eb811c : nop
        mov ecx, esi
        call public_6eb8b70
        mov eax, dword ptr ds : [esi+0x300]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x2FC]
        push eax
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        call public_6fa8370
        mov eax, dword ptr ds : [esi+0x9C]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x98]
        push eax
        push edx
        lea edx, ss:[esp+0x18]
        push edx
        call public_6ed0470
        mov edi, dword ptr ds : [public_6fcf264]
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, offset public_6fcf260
        call public_6f1df30
        mov ecx, dword ptr ds : [eax]
        push edi
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, offset public_6fcf260
        call public_6ed18f0
        push 1
        mov byte ptr ds : [public_6fd1c78], 0
        mov byte ptr ds : [public_6fd1c79], 0
        call public_6f5a820
        push 1
        call public_6f5a800
        call public_6f5abc0
        push 1
        call public_6f5a7b0
        lea edi, ds:[esi+0xC]
        push edi
        call public_6f49b00
        add esp, 0x10
        test eax, eax
        je public_6eb81db
        mov ecx, dword ptr ds : [esi+8]
        push 0
        push 1
        call public_6f47ba0
        mov ecx, dword ptr ds : [esi+8]
        push 0
        push 1
        call public_6f47d60
        mov eax, dword ptr ds : [edi]
        push eax
        call dword ptr ds : [public_6fb3654]
        add esp, 4
        public_6eb81db : nop
        mov edi, dword ptr ds : [esi+0x150]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        lea ebp, ds:[esi+0x14C]
        mov dword ptr ss : [esp+0xC], eax
        je public_6eb8216
        public_6eb81f1 : nop
        push 0
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x14]
        call public_6f68e30
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebp
        call public_6ecfe80
        cmp dword ptr ss : [esp+0xC], edi
        jne public_6eb81f1
        public_6eb8216 : nop
        mov eax, dword ptr ds : [esi+0x15C]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x158]
        push eax
        push edx
        lea edx, ss:[esp+0x1C]
        push edx
        call public_6fa8370
        mov eax, dword ptr ds : [esi+0x144]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x140]
        push eax
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        call public_6fa8370
        mov ecx, esi
        call public_6f0fc40
        pop edi
        pop esi
        pop ebp
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6eb8070)
    }
}

#undef public_6eb8093
#undef public_6eb80a4
#undef public_6eb80be
#undef public_6eb80fb
#undef public_6eb8107
#undef public_6eb811c
#undef public_6eb81db
#undef public_6eb81f1
#undef public_6eb8216
