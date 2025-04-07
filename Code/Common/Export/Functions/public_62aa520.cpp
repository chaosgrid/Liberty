#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b440);
CLANG_FORWARD_PROC_SYMBOL(public_629b990);
CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_62aa520);
CLANG_FORWARD_PROC_SYMBOL(public_62aab50);
CLANG_FORWARD_PROC_SYMBOL(public_62af420);
CLANG_FORWARD_PROC_SYMBOL(public_62b5fe0);
CLANG_FORWARD_PROC_SYMBOL(public_62d2b10);

#define public_62aa55a _public_62aa55a
#define public_62aa55f _public_62aa55f
#define public_62aa584 _public_62aa584
#define public_62aa59d _public_62aa59d
#define public_62aa5e1 _public_62aa5e1

PROC_DECLARE(0x62aa520, internal_62aa520, public_62aa520);
extern "C" NAKED register_t __cdecl internal_62aa520()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        push ebx
        push ebp
        mov esi, ecx
        call public_62af420
        mov al, byte ptr ds : [esi+0x15C]
        test al, al
        je public_62aa55a
        mov ecx, esi
        call public_62b5fe0
        fcomp qword ptr ds : [public_639c430]
        mov byte ptr ss : [esp+0x24], 1
        fnstsw ax
        test ah, 0x41
        jnp public_62aa55f
        public_62aa55a : nop
        mov byte ptr ss : [esp+0x24], 0
        public_62aa55f : nop
        push edi
        push 0xFF3EFFFC
        lea ecx, ss:[esp+0x14]
        call public_629b990
        lea eax, ss:[esp+0x10]
        lea edi, ds:[esi+0xE4]
        push eax
        mov ecx, edi
        call public_629b440
        test eax, eax
        je public_62aa59d
        public_62aa584 : nop
        mov edx, dword ptr ds : [eax]
        push ebx
        push ebp
        mov ecx, eax
        call dword ptr ds : [edx+0x24]
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, edi
        call public_629b440
        test eax, eax
        jne public_62aa584
        public_62aa59d : nop
        mov eax, dword ptr ds : [esi+0x194]
        test eax, eax
        pop edi
        je public_62aa5e1
        mov al, byte ptr ss : [esp+0x24]
        test al, al
        jne public_62aa5e1
        test dword ptr ds : [public_639e530], ebx
        jne public_62aa5e1
        test byte ptr ds : [esi+0x190], 1
        jne public_62aa5e1
        push 1
        call public_62a8920
        mov ecx, dword ptr ds : [esi+0x194]
        add esp, 4
        push ebp
        call public_62d2b10
        push 0
        call public_62a8920
        add esp, 4
        public_62aa5e1 : nop
        push ebp
        mov ecx, esi
        call public_62aab50
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x62aa520)
    }
}

#undef public_62aa55a
#undef public_62aa55f
#undef public_62aa584
#undef public_62aa59d
#undef public_62aa5e1
